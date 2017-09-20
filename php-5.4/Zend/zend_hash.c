/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2013 Zend Technologies Ltd. (http://www.zend.com) |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.00 of the Zend license,     |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.zend.com/license/2_00.txt.                                |
   | If you did not receive a copy of the Zend license and are unable to  |
   | obtain it through the world-wide-web, please send a note to          |
   | license@zend.com so we can mail you a copy immediately.              |
   +----------------------------------------------------------------------+
   | Authors: Andi Gutmans <andi@zend.com>                                |
   |          Zeev Suraski <zeev@zend.com>                                |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#include "zend.h"
#include "zend_globals.h"

/*
 * 定义了哈希表API用到的操作新元素的宏函数
 * CONNECT_TO_BUCKET_DLLIST 将新元素添加到具有相同hash值的bucket链表
 * CONNECT_TO_GLOBAL_DLLIST 将新元素添加到HashTable的双向链表
 */

#define CONNECT_TO_BUCKET_DLLIST(element, list_head)                           \
	(element)->pNext = (list_head);                                        \
	(element)->pLast = NULL;                                               \
	if ((element)->pNext) {                                                \
		(element)->pNext->pLast = (element);                           \
	}

#define CONNECT_TO_GLOBAL_DLLIST(element, ht)                                  \
	(element)->pListLast = (ht)->pListTail;                                \
	(ht)->pListTail = (element);                                           \
	(element)->pListNext = NULL;                                           \
	if ((element)->pListLast != NULL) {                                    \
		(element)->pListLast->pListNext = (element);                   \
	}                                                                      \
	if (!(ht)->pListHead) {                                                \
		(ht)->pListHead = (element);                                   \
	}                                                                      \
	if ((ht)->pInternalPointer == NULL) {                                  \
		(ht)->pInternalPointer = (element);                            \
	}

#if ZEND_DEBUG
#define HT_OK 0
#define HT_IS_DESTROYING 1
#define HT_DESTROYED 2
#define HT_CLEANING 3

static void _zend_is_inconsistent(const HashTable *ht, const char *file,
				  int line)
{
	if (ht->inconsistent == HT_OK) {
		return;
	}
	switch (ht->inconsistent) {
	case HT_IS_DESTROYING:
		zend_output_debug_string(1, "%s(%d) : ht=%p is being destroyed",
					 file, line, ht);
		break;
	case HT_DESTROYED:
		zend_output_debug_string(
		    1, "%s(%d) : ht=%p is already destroyed", file, line, ht);
		break;
	case HT_CLEANING:
		zend_output_debug_string(1, "%s(%d) : ht=%p is being cleaned",
					 file, line, ht);
		break;
	default:
		zend_output_debug_string(1, "%s(%d) : ht=%p is inconsistent",
					 file, line, ht);
		break;
	}
	zend_bailout();
}
#define IS_CONSISTENT(a) _zend_is_inconsistent(a, __FILE__, __LINE__);
#define SET_INCONSISTENT(n) ht->inconsistent = n;
#else
#define IS_CONSISTENT(a)
#define SET_INCONSISTENT(n)
#endif

#define HASH_PROTECT_RECURSION(ht)                                             \
	if ((ht)->bApplyProtection) {                                          \
		if ((ht)->nApplyCount++ >= 3) {                                \
			zend_error(                                            \
			    E_ERROR,                                           \
			    "Nesting level too deep - recursive dependency?"); \
		}                                                              \
	}

#define HASH_UNPROTECT_RECURSION(ht)                                           \
	if ((ht)->bApplyProtection) {                                          \
		(ht)->nApplyCount--;                                           \
	}

#define ZEND_HASH_IF_FULL_DO_RESIZE(ht)                                        \
	if ((ht)->nNumOfElements > (ht)->nTableSize) {                         \
		zend_hash_do_resize(ht);                                       \
	}

static int zend_hash_do_resize(HashTable *ht);

ZEND_API ulong zend_hash_func(const char *arKey, uint nKeyLength)
{
	return zend_inline_hash_func(arKey, nKeyLength);
}

/* 更新元素数据 */
#define UPDATE_DATA(ht, p, pData, nDataSize)                                   \
	if (nDataSize == sizeof(void *)) {                                     \
		if ((p)->pData != &(p)->pDataPtr) {                            \
			pefree_rel((p)->pData, (ht)->persistent);              \
		}                                                              \
		memcpy(&(p)->pDataPtr, pData, sizeof(void *));                 \
		(p)->pData = &(p)->pDataPtr;                                   \
	} else {                                                               \
		if ((p)->pData == &(p)->pDataPtr) {                            \
			(p)->pData =                                           \
			    (void *)pemalloc_rel(nDataSize, (ht)->persistent); \
			(p)->pDataPtr = NULL;                                  \
		} else {                                                       \
			(p)->pData = (void *)perealloc_rel(                    \
			    (p)->pData, nDataSize, (ht)->persistent);          \
			/* (p)->pDataPtr is already NULL so no need to         \
			 * initialize it */                                    \
		}                                                              \
		memcpy((p)->pData, pData, nDataSize);                          \
	}

/* 初始化保存数据的结构体 */
#define INIT_DATA(ht, p, pData, nDataSize)                                     \
	;                                                                      \
	if (nDataSize == sizeof(void *)) {                                     \
		memcpy(&(p)->pDataPtr, pData, sizeof(void *));                 \
		(p)->pData = &(p)->pDataPtr;                                   \
	} else {                                                               \
		(p)->pData =                                                   \
		    (void *)pemalloc_rel(nDataSize, (ht)->persistent);         \
		if (!(p)->pData) {                                             \
			pefree_rel(p, (ht)->persistent);                       \
			return FAILURE;                                        \
		}                                                              \
		memcpy((p)->pData, pData, nDataSize);                          \
		(p)->pDataPtr = NULL;                                          \
	}

/* 检查ht->arBuckets是否已经初始化，如果没有初始化，则为ht->arBuckets分配内存以及设置nTableSize和nTableMask的值
 */
#define CHECK_INIT(ht)                                                         \
	do {                                                                   \
		if (UNEXPECTED((ht)->nTableMask == 0)) {                       \
			(ht)->arBuckets = (Bucket **)pecalloc(                 \
			    (ht)->nTableSize, sizeof(Bucket *),                \
			    (ht)->persistent);                                 \
			(ht)->nTableMask = (ht)->nTableSize - 1;               \
		}                                                              \
	} while (0)

static const Bucket *uninitialized_bucket = NULL;

/* 初始化哈希表
 * 1、设置哈希表大小 (通过nSize参数)
 * 2、设置结构体其他成员变量的初始值 (包括释放内存用的析构函数pDescructor)
 * 3、pHashFunction在此处并没有用到，php的哈希函数使用的是内部的zend_inline_hash_func
 * */
ZEND_API int _zend_hash_init(HashTable *ht, uint nSize,
			     hash_func_t pHashFunction, dtor_func_t pDestructor,
			     zend_bool persistent ZEND_FILE_LINE_DC)
{
	uint i = 3;

	SET_INCONSISTENT(HT_OK);

	if (nSize >= 0x80000000) {
		/* prevent overflow */
		ht->nTableSize = 0x80000000;
	} else {
		while ((1U << i) < nSize) {
			i++;
		}
		ht->nTableSize = 1 << i;
	}

	ht->nTableMask = 0; /* 0 means that ht->arBuckets is uninitialized */
	ht->pDestructor = pDestructor;
	ht->arBuckets = (Bucket **)&uninitialized_bucket;
	ht->pListHead = NULL;
	ht->pListTail = NULL;
	ht->nNumOfElements = 0;
	ht->nNextFreeElement = 0;
	ht->pInternalPointer = NULL;
	ht->persistent = persistent;
	ht->nApplyCount = 0;
	ht->bApplyProtection = 1;
	return SUCCESS;
}

/* 在ZEND引擎内部数据结构初始化时使用，如function和class */
ZEND_API int _zend_hash_init_ex(HashTable *ht, uint nSize,
				hash_func_t pHashFunction,
				dtor_func_t pDestructor, zend_bool persistent,
				zend_bool bApplyProtection ZEND_FILE_LINE_DC)
{
	int retval = _zend_hash_init(ht, nSize, pHashFunction, pDestructor,
				     persistent ZEND_FILE_LINE_CC);

	ht->bApplyProtection = bApplyProtection;
	return retval;
}

ZEND_API void zend_hash_set_apply_protection(HashTable *ht,
					     zend_bool bApplyProtection)
{
	ht->bApplyProtection = bApplyProtection;
}

/* 插入新值到哈希表中 */
ZEND_API int _zend_hash_add_or_update(HashTable *ht, const char *arKey,
				      uint nKeyLength, void *pData,
				      uint nDataSize, void **pDest,
				      int flag ZEND_FILE_LINE_DC)
{
	ulong h;
	uint nIndex;
	Bucket *p;
#ifdef ZEND_SIGNALS
	TSRMLS_FETCH();
#endif

	IS_CONSISTENT(ht);

	/* 键值不能为空字符串 */
	if (nKeyLength <= 0) {
#if ZEND_DEBUG
		ZEND_PUTS("zend_hash_update: Can't put in empty key\n");
#endif
		return FAILURE;
	}

	/* 检查哈希表是否以及初始化，如果没有初始化则进行初始化 */
	CHECK_INIT(ht);

	/* 计算key代表的哈希值以及获取其在arBuckets数组中的下标 */
	h = zend_inline_hash_func(arKey, nKeyLength);
	nIndex = h & ht->nTableMask;

	p = ht->arBuckets[nIndex];
	while (p != NULL) {
		if (p->arKey == arKey ||
		    ((p->h == h) && (p->nKeyLength == nKeyLength) &&
		     !memcmp(p->arKey, arKey, nKeyLength))) { /* 需要更新 */
			if (flag &
			    HASH_ADD) { /* 如果是插入的话就返回，不能插入具有相同键值的元素
					   */
				return FAILURE;
			}
			HANDLE_BLOCK_INTERRUPTIONS();
#if ZEND_DEBUG
			if (p->pData == pData) {
				ZEND_PUTS("Fatal error in zend_hash_update: "
					  "p->pData == pData\n");
				HANDLE_UNBLOCK_INTERRUPTIONS();
				return FAILURE;
			}
#endif
			if (ht->pDestructor) { /* 如果有析构函数，则将指向数据的指针释放掉
						  */
				ht->pDestructor(p->pData);
			}

			/* 更新数据 */
			UPDATE_DATA(ht, p, pData, nDataSize);
			if (pDest) {
				*pDest = p->pData;
			}
			HANDLE_UNBLOCK_INTERRUPTIONS();
			return SUCCESS;
		}
		/* 移动到具有相同hash值的bucket链表中的下一个bucket */
		p = p->pNext;
	}

	if (IS_INTERNED(arKey)) {
		p = (Bucket *)pemalloc(sizeof(Bucket), ht->persistent);
		if (!p) {
			return FAILURE;
		}
		p->arKey = arKey;
	} else {
		p = (Bucket *)pemalloc(sizeof(Bucket) + nKeyLength,
				       ht->persistent);
		if (!p) {
			return FAILURE;
		}
		p->arKey = (const char *)(p + 1);
		memcpy((char *)p->arKey, arKey, nKeyLength);
	}

	/* 设置新的bucket的属性值及添加到哈希表中 */
	p->nKeyLength = nKeyLength;
	INIT_DATA(ht, p, pData, nDataSize);
	p->h = h;
	CONNECT_TO_BUCKET_DLLIST(p, ht->arBuckets[nIndex]);
	if (pDest) {
		*pDest = p->pData;
	}

	HANDLE_BLOCK_INTERRUPTIONS();
	CONNECT_TO_GLOBAL_DLLIST(p, ht);
	ht->arBuckets[nIndex] = p;
	HANDLE_UNBLOCK_INTERRUPTIONS();

	ht->nNumOfElements++;
	ZEND_HASH_IF_FULL_DO_RESIZE(
	    ht); /* If the Hash table is full, resize it */
	return SUCCESS;
}

/* 添加元素的快速版本，接收一个已经计算好的哈希值作为参数 */
ZEND_API int _zend_hash_quick_add_or_update(HashTable *ht, const char *arKey,
					    uint nKeyLength, ulong h,
					    void *pData, uint nDataSize,
					    void **pDest,
					    int flag ZEND_FILE_LINE_DC)
{
	uint nIndex;
	Bucket *p;
#ifdef ZEND_SIGNALS
	TSRMLS_FETCH();
#endif

	IS_CONSISTENT(ht);

	if (nKeyLength == 0) {
		return zend_hash_index_update(ht, h, pData, nDataSize, pDest);
	}

	CHECK_INIT(ht);
	nIndex = h & ht->nTableMask;

	p = ht->arBuckets[nIndex];
	while (p != NULL) {
		if (p->arKey == arKey ||
		    ((p->h == h) && (p->nKeyLength == nKeyLength) &&
		     !memcmp(p->arKey, arKey, nKeyLength))) {
			if (flag & HASH_ADD) {
				return FAILURE;
			}
			HANDLE_BLOCK_INTERRUPTIONS();
#if ZEND_DEBUG
			if (p->pData == pData) {
				ZEND_PUTS("Fatal error in zend_hash_update: "
					  "p->pData == pData\n");
				HANDLE_UNBLOCK_INTERRUPTIONS();
				return FAILURE;
			}
#endif
			if (ht->pDestructor) {
				ht->pDestructor(p->pData);
			}
			UPDATE_DATA(ht, p, pData, nDataSize);
			if (pDest) {
				*pDest = p->pData;
			}
			HANDLE_UNBLOCK_INTERRUPTIONS();
			return SUCCESS;
		}
		p = p->pNext;
	}

	if (IS_INTERNED(arKey)) {
		p = (Bucket *)pemalloc(sizeof(Bucket), ht->persistent);
		if (!p) {
			return FAILURE;
		}
		p->arKey = arKey;
	} else {
		p = (Bucket *)pemalloc(sizeof(Bucket) + nKeyLength,
				       ht->persistent);
		if (!p) {
			return FAILURE;
		}
		p->arKey = (const char *)(p + 1);
		memcpy((char *)p->arKey, arKey, nKeyLength);
	}

	p->nKeyLength = nKeyLength;
	INIT_DATA(ht, p, pData, nDataSize);
	p->h = h;

	CONNECT_TO_BUCKET_DLLIST(p, ht->arBuckets[nIndex]);

	if (pDest) {
		*pDest = p->pData;
	}

	HANDLE_BLOCK_INTERRUPTIONS();
	ht->arBuckets[nIndex] = p;
	CONNECT_TO_GLOBAL_DLLIST(p, ht);
	HANDLE_UNBLOCK_INTERRUPTIONS();

	ht->nNumOfElements++;
	ZEND_HASH_IF_FULL_DO_RESIZE(
	    ht); /* If the Hash table is full, resize it */
	return SUCCESS;
}

ZEND_API int zend_hash_add_empty_element(HashTable *ht, const char *arKey,
					 uint nKeyLength)
{
	void *dummy = (void *)1;

	return zend_hash_add(ht, arKey, nKeyLength, &dummy, sizeof(void *),
			     NULL);
}

/* 数字键值的插入修改 */
ZEND_API int _zend_hash_index_update_or_next_insert(HashTable *ht, ulong h,
						    void *pData, uint nDataSize,
						    void **pDest,
						    int flag ZEND_FILE_LINE_DC)
{
	uint nIndex;
	Bucket *p;
#ifdef ZEND_SIGNALS
	TSRMLS_FETCH();
#endif

	IS_CONSISTENT(ht); // 调试信息
	CHECK_INIT(ht);

	// 如果是新增元素，则h等于下一个数字索引的位置
	if (flag & HASH_NEXT_INSERT) {
		h = ht->nNextFreeElement;
	}
	// 计算键值在HashTable中的存储位置为nIndex
	nIndex = h & ht->nTableMask;

	p = ht->arBuckets[nIndex]; /* 取得索引对应的Bucket的指针 */
	// 循环Bucket中含有nIndex键值的链表
	while (p != NULL) {
		// p 不为NULL说明Bucket中存在键值为nIndex的元素
		if ((p->nKeyLength == 0) &&
		    (p->h == h)) { // 如果是数字键值且键值相同
			if (flag & HASH_NEXT_INSERT ||
			    flag & HASH_ADD) { // 如果是新增元素，则插入失败
				return FAILURE;
			}
			HANDLE_BLOCK_INTERRUPTIONS();
#if ZEND_DEBUG
			if (p->pData == pData) {
				ZEND_PUTS("Fatal error in "
					  "zend_hash_index_update: p->pData == "
					  "pData\n");
				HANDLE_UNBLOCK_INTERRUPTIONS();
				return FAILURE;
			}
#endif
			// 上面的代码return ，说明是更新Bucket中已有键值元素值
			if (ht->pDestructor) { // 如果数据元素存在，则将原来的数据销毁
				ht->pDestructor(p->pData);
			}
			UPDATE_DATA(ht, p, pData, nDataSize); // 更新数据值
			HANDLE_UNBLOCK_INTERRUPTIONS();
			if ((long)h >= (long)ht->nNextFreeElement) {
				ht->nNextFreeElement =
				    h < LONG_MAX ? h + 1 : LONG_MAX;
			}
			// 如果需要返回更新值，则将返回值赋值给pDest
			if (pDest) {
				*pDest = p->pData;
			}
			return SUCCESS;
		}
		// 移动到链表的下一个元素
		p = p->pNext;
	}
	// 如果是新增，为新增元素分配一个Bucket空间
	p = (Bucket *)pemalloc_rel(sizeof(Bucket), ht->persistent);
	if (!p) {
		return FAILURE;
	}
	// 赋值
	p->arKey = NULL;
	p->nKeyLength =
	    0; /* Numeric indices are marked by making the nKeyLength == 0 */
	p->h = h;
	INIT_DATA(ht, p, pData, nDataSize);
	// 如果需要返回更新值，则将返回值赋值给pDest
	if (pDest) {
		*pDest = p->pData;
	}

	CONNECT_TO_BUCKET_DLLIST(
	    p, ht->arBuckets[nIndex]); // 将Bucket加入到对应的桶双向链表中

	HANDLE_BLOCK_INTERRUPTIONS();
	ht->arBuckets[nIndex] = p;
	CONNECT_TO_GLOBAL_DLLIST(
	    p, ht); // 将新的Bucket元素添加到哈希表的双向链表中
	HANDLE_UNBLOCK_INTERRUPTIONS();

	if ((long)h >= (long)ht->nNextFreeElement) {
		ht->nNextFreeElement = h < LONG_MAX ? h + 1 : LONG_MAX;
	}
	ht->nNumOfElements++;
	ZEND_HASH_IF_FULL_DO_RESIZE(
	    ht); /* 如果此时数组的容量满了，则重新分配空间。*/
	return SUCCESS;
}

/* HashTable容量满了的时候重新分配大小 */
static int zend_hash_do_resize(HashTable *ht)
{
	Bucket **t;
#ifdef ZEND_SIGNALS
	TSRMLS_FETCH();
#endif

	IS_CONSISTENT(ht);

	if ((ht->nTableSize << 1) > 0) { /* Let's double the table size */
		/* 重新分配大小 */
		t = (Bucket **)perealloc_recoverable(
		    ht->arBuckets, (ht->nTableSize << 1) * sizeof(Bucket *),
		    ht->persistent);
		if (t) {
			HANDLE_BLOCK_INTERRUPTIONS();
			ht->arBuckets = t;
			/* 设置nTableSize */
			ht->nTableSize = (ht->nTableSize << 1);
			/* nTableMask随着nTableSize改变，永远是nTableSize-1 */
			ht->nTableMask = ht->nTableSize - 1;
			/* 修改HashTable大小之后需要重新哈希 */
			zend_hash_rehash(ht);
			HANDLE_UNBLOCK_INTERRUPTIONS();
			return SUCCESS;
		}
		return FAILURE;
	}
	return SUCCESS;
}

/* 对哈希表进行重新哈希操作 */
ZEND_API int zend_hash_rehash(HashTable *ht)
{
	Bucket *p;
	uint nIndex;

	IS_CONSISTENT(ht);
	if (UNEXPECTED(ht->nNumOfElements == 0)) {
		return SUCCESS;
	}
	/* 先将arBuckets重新初始化为0 */
	memset(ht->arBuckets, 0, ht->nTableSize * sizeof(Bucket *));
	/* p指向pListHead，pListHead指向数组的第一个元素，保存这个指针在重新哈希的时候也非常有用
	 */
	p = ht->pListHead;
	while (p != NULL) {
		/* 逐个计算下标然后添加到相同哈希值的bucket中 */
		nIndex = p->h & ht->nTableMask;
		CONNECT_TO_BUCKET_DLLIST(p, ht->arBuckets[nIndex]);
		ht->arBuckets[nIndex] = p;
		p = p->pListNext;
	}
	return SUCCESS;
}

/* 根据key或index删除HashTable中的元素 */
ZEND_API int zend_hash_del_key_or_index(HashTable *ht, const char *arKey,
					uint nKeyLength, ulong h, int flag)
{
	uint nIndex;
	Bucket *p;
#ifdef ZEND_SIGNALS
	TSRMLS_FETCH();
#endif

	IS_CONSISTENT(ht);

	/* 如果是根据key删除，则先计算key的哈希值 */
	if (flag == HASH_DEL_KEY) {
		h = zend_inline_hash_func(arKey, nKeyLength);
	}
	nIndex = h & ht->nTableMask;

	p = ht->arBuckets[nIndex];
	while (p != NULL) {
		if ((p->h == h) && (p->nKeyLength == nKeyLength) &&
		    ((p->nKeyLength ==
		      0) /* Numeric index (short circuits the memcmp() check) */
		     ||
		     !memcmp(p->arKey, arKey, nKeyLength))) { /* String index */
			HANDLE_BLOCK_INTERRUPTIONS();
			/* 如果是第一个，直接将arBucket[nIndex]指向第二个元素 */
			if (p == ht->arBuckets[nIndex]) {
				ht->arBuckets[nIndex] = p->pNext;
			} else {
				/* 其余的操作是将当前指针的last的next执行当前的next
				 */
				p->pLast->pNext = p->pNext;
			}
			/* 调整相关的指针 */
			if (p->pNext) {
				p->pNext->pLast = p->pLast;
			}
			if (p->pListLast != NULL) {
				p->pListLast->pListNext = p->pListNext;
			} else {
				/* Deleting the head of the list */
				ht->pListHead = p->pListNext;
			}
			if (p->pListNext != NULL) {
				p->pListNext->pListLast = p->pListLast;
			} else {
				ht->pListTail = p->pListLast;
			}
			if (ht->pInternalPointer == p) {
				ht->pInternalPointer = p->pListNext;
			}
			/* 释放数据内存和bucket结构体内存 */
			if (ht->pDestructor) {
				ht->pDestructor(p->pData);
			}
			if (p->pData != &p->pDataPtr) {
				pefree(p->pData, ht->persistent);
			}
			pefree(p, ht->persistent);
			HANDLE_UNBLOCK_INTERRUPTIONS();
			ht->nNumOfElements--;
			return SUCCESS;
		}
		p = p->pNext;
	}
	return FAILURE;
}

/* 销毁HashTable */
ZEND_API void zend_hash_destroy(HashTable *ht)
{
	Bucket *p, *q;

	IS_CONSISTENT(ht);

	SET_INCONSISTENT(HT_IS_DESTROYING);

	/* 指向HashTable的第一个元素 (pListHead在desctroy的时候和很有用) */
	p = ht->pListHead;
	while (p != NULL) {
		q = p;
		p = p->pListNext;
		if (ht->pDestructor) {
			ht->pDestructor(q->pData);
		}
		if (q->pData != &q->pDataPtr) {
			pefree(q->pData, ht->persistent);
		}
		pefree(q, ht->persistent);
	}
	if (ht->nTableMask) {
		pefree(ht->arBuckets, ht->persistent);
	}

	SET_INCONSISTENT(HT_DESTROYED);
}

/* 移除HashTable的所有元素，并不是真正销毁它 */
ZEND_API void zend_hash_clean(HashTable *ht)
{
	Bucket *p, *q;

	IS_CONSISTENT(ht);

	p = ht->pListHead;

	if (ht->nTableMask) {
		/* 这里只是将ht->arBuckets重置为0,并没有释放其内存 */
		memset(ht->arBuckets, 0, ht->nTableSize * sizeof(Bucket *));
	}
	ht->pListHead = NULL;
	ht->pListTail = NULL;
	ht->nNumOfElements = 0;
	ht->nNextFreeElement = 0;
	ht->pInternalPointer = NULL;

	while (p != NULL) {
		q = p;
		p = p->pListNext;
		if (ht->pDestructor) {
			ht->pDestructor(q->pData);
		}
		if (q->pData != &q->pDataPtr) {
			pefree(q->pData, ht->persistent);
		}
		pefree(q, ht->persistent);
	}
}

/* This function is used by the various apply() functions.
 * It deletes the passed bucket, and returns the address of the
 * next bucket.  The hash *may* be altered during that time, the
 * returned value will still be valid.
 */
static Bucket *zend_hash_apply_deleter(HashTable *ht, Bucket *p)
{
	Bucket *retval;
#ifdef ZEND_SIGNALS
	TSRMLS_FETCH();
#endif

	HANDLE_BLOCK_INTERRUPTIONS();
	if (p->pLast) {
		p->pLast->pNext = p->pNext;
	} else {
		uint nIndex;

		nIndex = p->h & ht->nTableMask;
		ht->arBuckets[nIndex] = p->pNext;
	}
	if (p->pNext) {
		p->pNext->pLast = p->pLast;
	} else {
		/* Nothing to do as this list doesn't have a tail */
	}

	if (p->pListLast != NULL) {
		p->pListLast->pListNext = p->pListNext;
	} else {
		/* Deleting the head of the list */
		ht->pListHead = p->pListNext;
	}
	if (p->pListNext != NULL) {
		p->pListNext->pListLast = p->pListLast;
	} else {
		ht->pListTail = p->pListLast;
	}
	if (ht->pInternalPointer == p) {
		ht->pInternalPointer = p->pListNext;
	}
	ht->nNumOfElements--;
	HANDLE_UNBLOCK_INTERRUPTIONS();

	if (ht->pDestructor) {
		ht->pDestructor(p->pData);
	}
	if (p->pData != &p->pDataPtr) {
		pefree(p->pData, ht->persistent);
	}
	retval = p->pListNext;
	pefree(p, ht->persistent);

	return retval;
}

ZEND_API void zend_hash_graceful_destroy(HashTable *ht)
{
	Bucket *p;

	IS_CONSISTENT(ht);

	p = ht->pListHead;
	while (p != NULL) {
		p = zend_hash_apply_deleter(ht, p);
	}
	if (ht->nTableMask) {
		pefree(ht->arBuckets, ht->persistent);
	}

	SET_INCONSISTENT(HT_DESTROYED);
}

ZEND_API void zend_hash_graceful_reverse_destroy(HashTable *ht)
{
	Bucket *p;

	IS_CONSISTENT(ht);

	p = ht->pListTail;
	while (p != NULL) {
		zend_hash_apply_deleter(ht, p);
		p = ht->pListTail;
	}

	if (ht->nTableMask) {
		pefree(ht->arBuckets, ht->persistent);
	}

	SET_INCONSISTENT(HT_DESTROYED);
}

/* This is used to recurse elements and selectively delete certain entries
 * from a hashtable. apply_func() receives the data and decides if the entry
 * should be deleted or recursion should be stopped. The following three
 * return codes are possible:
 * ZEND_HASH_APPLY_KEEP   - continue
 * ZEND_HASH_APPLY_STOP   - stop iteration
 * ZEND_HASH_APPLY_REMOVE - delete the element, combineable with the former
 */

ZEND_API void zend_hash_apply(HashTable *ht, apply_func_t apply_func TSRMLS_DC)
{
	Bucket *p;

	IS_CONSISTENT(ht);

	HASH_PROTECT_RECURSION(ht);
	p = ht->pListHead;
	while (p != NULL) {
		int result = apply_func(p->pData TSRMLS_CC);

		if (result & ZEND_HASH_APPLY_REMOVE) {
			p = zend_hash_apply_deleter(ht, p);
		} else {
			p = p->pListNext;
		}
		if (result & ZEND_HASH_APPLY_STOP) {
			break;
		}
	}
	HASH_UNPROTECT_RECURSION(ht);
}

ZEND_API void zend_hash_apply_with_argument(HashTable *ht,
					    apply_func_arg_t apply_func,
					    void *argument TSRMLS_DC)
{
	Bucket *p;

	IS_CONSISTENT(ht);

	HASH_PROTECT_RECURSION(ht);
	p = ht->pListHead;
	while (p != NULL) {
		int result = apply_func(p->pData, argument TSRMLS_CC);

		if (result & ZEND_HASH_APPLY_REMOVE) {
			p = zend_hash_apply_deleter(ht, p);
		} else {
			p = p->pListNext;
		}
		if (result & ZEND_HASH_APPLY_STOP) {
			break;
		}
	}
	HASH_UNPROTECT_RECURSION(ht);
}

ZEND_API void zend_hash_apply_with_arguments(HashTable *ht TSRMLS_DC,
					     apply_func_args_t apply_func,
					     int num_args, ...)
{
	Bucket *p;
	va_list args;
	zend_hash_key hash_key;

	IS_CONSISTENT(ht);

	HASH_PROTECT_RECURSION(ht);

	p = ht->pListHead;
	while (p != NULL) {
		int result;
		va_start(args, num_args);
		hash_key.arKey = p->arKey;
		hash_key.nKeyLength = p->nKeyLength;
		hash_key.h = p->h;
		result =
		    apply_func(p->pData TSRMLS_CC, num_args, args, &hash_key);

		if (result & ZEND_HASH_APPLY_REMOVE) {
			p = zend_hash_apply_deleter(ht, p);
		} else {
			p = p->pListNext;
		}
		if (result & ZEND_HASH_APPLY_STOP) {
			va_end(args);
			break;
		}
		va_end(args);
	}

	HASH_UNPROTECT_RECURSION(ht);
}

ZEND_API void zend_hash_reverse_apply(HashTable *ht,
				      apply_func_t apply_func TSRMLS_DC)
{
	Bucket *p, *q;

	IS_CONSISTENT(ht);

	HASH_PROTECT_RECURSION(ht);
	p = ht->pListTail;
	while (p != NULL) {
		int result = apply_func(p->pData TSRMLS_CC);

		q = p;
		p = p->pListLast;
		if (result & ZEND_HASH_APPLY_REMOVE) {
			zend_hash_apply_deleter(ht, q);
		}
		if (result & ZEND_HASH_APPLY_STOP) {
			break;
		}
	}
	HASH_UNPROTECT_RECURSION(ht);
}

ZEND_API void zend_hash_copy(HashTable *target, HashTable *source,
			     copy_ctor_func_t pCopyConstructor, void *tmp,
			     uint size)
{
	Bucket *p;
	void *new_entry;
	zend_bool setTargetPointer;

	IS_CONSISTENT(source);
	IS_CONSISTENT(target);

	setTargetPointer = !target->pInternalPointer;
	p = source->pListHead;
	while (p) {
		if (setTargetPointer && source->pInternalPointer == p) {
			target->pInternalPointer = NULL;
		}
		if (p->nKeyLength) {
			zend_hash_quick_update(target, p->arKey, p->nKeyLength,
					       p->h, p->pData, size,
					       &new_entry);
		} else {
			zend_hash_index_update(target, p->h, p->pData, size,
					       &new_entry);
		}
		if (pCopyConstructor) {
			pCopyConstructor(new_entry);
		}
		p = p->pListNext;
	}
	if (!target->pInternalPointer) {
		target->pInternalPointer = target->pListHead;
	}
}

ZEND_API void _zend_hash_merge(HashTable *target, HashTable *source,
			       copy_ctor_func_t pCopyConstructor, void *tmp,
			       uint size, int overwrite ZEND_FILE_LINE_DC)
{
	Bucket *p;
	void *t;
	int mode = (overwrite ? HASH_UPDATE : HASH_ADD);

	IS_CONSISTENT(source);
	IS_CONSISTENT(target);

	p = source->pListHead;
	while (p) {
		if (p->nKeyLength > 0) {
			if (_zend_hash_quick_add_or_update(
				target, p->arKey, p->nKeyLength, p->h, p->pData,
				size, &t,
				mode ZEND_FILE_LINE_RELAY_CC) == SUCCESS &&
			    pCopyConstructor) {
				pCopyConstructor(t);
			}
		} else {
			if ((mode == HASH_UPDATE ||
			     !zend_hash_index_exists(target, p->h)) &&
			    zend_hash_index_update(target, p->h, p->pData, size,
						   &t) == SUCCESS &&
			    pCopyConstructor) {
				pCopyConstructor(t);
			}
		}
		p = p->pListNext;
	}
	target->pInternalPointer = target->pListHead;
}

static zend_bool
zend_hash_replace_checker_wrapper(HashTable *target, void *source_data,
				  Bucket *p, void *pParam,
				  merge_checker_func_t merge_checker_func)
{
	zend_hash_key hash_key;

	hash_key.arKey = p->arKey;
	hash_key.nKeyLength = p->nKeyLength;
	hash_key.h = p->h;
	return merge_checker_func(target, source_data, &hash_key, pParam);
}

ZEND_API void zend_hash_merge_ex(HashTable *target, HashTable *source,
				 copy_ctor_func_t pCopyConstructor, uint size,
				 merge_checker_func_t pMergeSource,
				 void *pParam)
{
	Bucket *p;
	void *t;

	IS_CONSISTENT(source);
	IS_CONSISTENT(target);

	p = source->pListHead;
	while (p) {
		if (zend_hash_replace_checker_wrapper(target, p->pData, p,
						      pParam, pMergeSource)) {
			if (zend_hash_quick_update(
				target, p->arKey, p->nKeyLength, p->h, p->pData,
				size, &t) == SUCCESS &&
			    pCopyConstructor) {
				pCopyConstructor(t);
			}
		}
		p = p->pListNext;
	}
	target->pInternalPointer = target->pListHead;
}

ZEND_API ulong zend_get_hash_value(const char *arKey, uint nKeyLength)
{
	return zend_inline_hash_func(arKey, nKeyLength);
}

/* Returns SUCCESS if found and FAILURE if not. The pointer to the
 * data is returned in pData. The reason is that there's no reason
 * someone using the hash table might not want to have NULL data
 */
/* 在HastTable中查找字符串键值key代表元素 */
ZEND_API int zend_hash_find(const HashTable *ht, const char *arKey,
			    uint nKeyLength, void **pData)
{
	ulong h;
	uint nIndex;
	Bucket *p;

	IS_CONSISTENT(ht);

	h = zend_inline_hash_func(arKey, nKeyLength);
	nIndex = h & ht->nTableMask;

	p = ht->arBuckets[nIndex];
	while (p != NULL) {
		if (p->arKey == arKey ||
		    ((p->h == h) && (p->nKeyLength == nKeyLength) &&
		     !memcmp(p->arKey, arKey, nKeyLength))) {
			*pData = p->pData;
			return SUCCESS;
		}
		p = p->pNext;
	}
	return FAILURE;
}

/* 在HastTable中查找key代表元素的快速版本，参数列表中接收一个计算好的哈希值 */
ZEND_API int zend_hash_quick_find(const HashTable *ht, const char *arKey,
				  uint nKeyLength, ulong h, void **pData)
{
	uint nIndex;
	Bucket *p;

	if (nKeyLength == 0) {
		return zend_hash_index_find(ht, h, pData);
	}

	IS_CONSISTENT(ht);

	nIndex = h & ht->nTableMask;

	p = ht->arBuckets[nIndex];
	while (p != NULL) {
		if (p->arKey == arKey ||
		    ((p->h == h) && (p->nKeyLength == nKeyLength) &&
		     !memcmp(p->arKey, arKey, nKeyLength))) {
			*pData = p->pData;
			return SUCCESS;
		}
		p = p->pNext;
	}
	return FAILURE;
}

/* 判断某个key是否存在HashTable中 */
ZEND_API int zend_hash_exists(const HashTable *ht, const char *arKey,
			      uint nKeyLength)
{
	ulong h;
	uint nIndex;
	Bucket *p;

	IS_CONSISTENT(ht);

	h = zend_inline_hash_func(arKey, nKeyLength);
	nIndex = h & ht->nTableMask;

	p = ht->arBuckets[nIndex];
	while (p != NULL) {
		if (p->arKey == arKey ||
		    ((p->h == h) && (p->nKeyLength == nKeyLength) &&
		     !memcmp(p->arKey, arKey, nKeyLength))) {
			return 1;
		}
		p = p->pNext;
	}
	return 0;
}

/* 判断某个key是否存在HashTable中的快速版本 */
ZEND_API int zend_hash_quick_exists(const HashTable *ht, const char *arKey,
				    uint nKeyLength, ulong h)
{
	uint nIndex;
	Bucket *p;

	if (nKeyLength == 0) {
		return zend_hash_index_exists(ht, h);
	}

	IS_CONSISTENT(ht);

	nIndex = h & ht->nTableMask;

	p = ht->arBuckets[nIndex];
	while (p != NULL) {
		if (p->arKey == arKey ||
		    ((p->h == h) && (p->nKeyLength == nKeyLength) &&
		     !memcmp(p->arKey, arKey, nKeyLength))) {
			return 1;
		}
		p = p->pNext;
	}
	return 0;
}

/* 在HashTable中查找数字键值的元素 */
ZEND_API int zend_hash_index_find(const HashTable *ht, ulong h, void **pData)
{
	uint nIndex;
	Bucket *p;

	IS_CONSISTENT(ht);

	nIndex = h & ht->nTableMask;

	p = ht->arBuckets[nIndex];
	while (p != NULL) {
		if ((p->h == h) && (p->nKeyLength == 0)) {
			*pData = p->pData;
			return SUCCESS;
		}
		p = p->pNext;
	}
	return FAILURE;
}

/* 判断数组键值是否存在HashTable中 */
ZEND_API int zend_hash_index_exists(const HashTable *ht, ulong h)
{
	uint nIndex;
	Bucket *p;

	IS_CONSISTENT(ht);

	nIndex = h & ht->nTableMask;

	p = ht->arBuckets[nIndex];
	while (p != NULL) {
		if ((p->h == h) && (p->nKeyLength == 0)) {
			return 1;
		}
		p = p->pNext;
	}
	return 0;
}

ZEND_API int zend_hash_num_elements(const HashTable *ht)
{
	IS_CONSISTENT(ht);

	return ht->nNumOfElements;
}

/* 将HashPointer的指针指向HashTable的内部指针的位置 */
ZEND_API int zend_hash_get_pointer(const HashTable *ht, HashPointer *ptr)
{
	ptr->pos = ht->pInternalPointer;
	if (ht->pInternalPointer) {
		ptr->h = ht->pInternalPointer->h;
		return 1;
	} else {
		ptr->h = 0;
		return 0;
	}
}

/* 如果HashTable的内部指针位置跟HashPointer的位置不一致，就把HashTable的内部指针指向HashPointer
 */
ZEND_API int zend_hash_set_pointer(HashTable *ht, const HashPointer *ptr)
{
	if (ptr->pos == NULL) {
		ht->pInternalPointer = NULL;
	} else if (ht->pInternalPointer != ptr->pos) {
		Bucket *p;

		IS_CONSISTENT(ht);
		p = ht->arBuckets[ptr->h & ht->nTableMask];
		while (p != NULL) {
			if (p == ptr->pos) {
				ht->pInternalPointer = p;
				return 1;
			}
			p = p->pNext;
		}
		return 0;
	}
	return 1;
}

/* 用在内部数据结构的函数，重置内部指针到第一个 */
ZEND_API void zend_hash_internal_pointer_reset_ex(HashTable *ht,
						  HashPosition *pos)
{
	IS_CONSISTENT(ht);

	if (pos)
		*pos = ht->pListHead;
	else
		ht->pInternalPointer = ht->pListHead;
}

/* This function will be extremely optimized by remembering
 * the end of the list
 */
/* 用在内部数据结构的函数，将内部指针指向最后一个 */
ZEND_API void zend_hash_internal_pointer_end_ex(HashTable *ht,
						HashPosition *pos)
{
	IS_CONSISTENT(ht);

	if (pos)
		*pos = ht->pListTail;
	else
		ht->pInternalPointer = ht->pListTail;
}

/* 用在内部数据结构的函数，指针向后移动一位 */
ZEND_API int zend_hash_move_forward_ex(HashTable *ht, HashPosition *pos)
{
	HashPosition *current = pos ? pos : &ht->pInternalPointer;

	IS_CONSISTENT(ht);

	if (*current) {
		*current = (*current)->pListNext;
		return SUCCESS;
	} else
		return FAILURE;
}

/* 用在内部数据结构的函数，指针向前移动一位 */
ZEND_API int zend_hash_move_backwards_ex(HashTable *ht, HashPosition *pos)
{
	HashPosition *current = pos ? pos : &ht->pInternalPointer;

	IS_CONSISTENT(ht);

	if (*current) {
		*current = (*current)->pListLast;
		return SUCCESS;
	} else
		return FAILURE;
}

/* This function should be made binary safe  */
/* 用在内部数据结构的函数，获取指针当前指向bucket的key的值 */
ZEND_API int zend_hash_get_current_key_ex(const HashTable *ht, char **str_index,
					  uint *str_length, ulong *num_index,
					  zend_bool duplicate,
					  HashPosition *pos)
{
	Bucket *p;

	p = pos ? (*pos) : ht->pInternalPointer;

	IS_CONSISTENT(ht);

	if (p) {
		if (p->nKeyLength) {
			if (duplicate) {
				*str_index =
				    estrndup(p->arKey, p->nKeyLength - 1);
			} else {
				*str_index = (char *)p->arKey;
			}
			if (str_length) {
				*str_length = p->nKeyLength;
			}
			return HASH_KEY_IS_STRING;
		} else {
			*num_index = p->h;
			return HASH_KEY_IS_LONG;
		}
	}
	return HASH_KEY_NON_EXISTANT;
}

/* 用在内部数据结构的函数，返回当前指针执行的buckey的key的类型 */
ZEND_API int zend_hash_get_current_key_type_ex(HashTable *ht, HashPosition *pos)
{
	Bucket *p;

	p = pos ? (*pos) : ht->pInternalPointer;

	IS_CONSISTENT(ht);

	if (p) {
		if (p->nKeyLength) {
			return HASH_KEY_IS_STRING;
		} else {
			return HASH_KEY_IS_LONG;
		}
	}
	return HASH_KEY_NON_EXISTANT;
}

/* 用在内部数据结构的函数，获取当前指针执行的buckey的data */
ZEND_API int zend_hash_get_current_data_ex(HashTable *ht, void **pData,
					   HashPosition *pos)
{
	Bucket *p;

	p = pos ? (*pos) : ht->pInternalPointer;

	IS_CONSISTENT(ht);

	if (p) {
		*pData = p->pData;
		return SUCCESS;
	} else {
		return FAILURE;
	}
}

/* This function changes key of current element without changing elements'
 * order. If element with target key already exists, it will be deleted first.
 */
ZEND_API int zend_hash_update_current_key_ex(HashTable *ht, int key_type,
					     const char *str_index,
					     uint str_length, ulong num_index,
					     int mode, HashPosition *pos)
{
	Bucket *p, *q;
	ulong h;
#ifdef ZEND_SIGNALS
	TSRMLS_FETCH();
#endif

	p = pos ? (*pos) : ht->pInternalPointer;

	IS_CONSISTENT(ht);

	if (p) {
		if (key_type == HASH_KEY_IS_LONG) {
			str_length = 0;
			if (!p->nKeyLength && p->h == num_index) {
				return SUCCESS;
			}

			q = ht->arBuckets[num_index & ht->nTableMask];
			while (q != NULL) {
				if (!q->nKeyLength && q->h == num_index) {
					break;
				}
				q = q->pNext;
			}
		} else if (key_type == HASH_KEY_IS_STRING) {
			if (IS_INTERNED(str_index)) {
				h = INTERNED_HASH(str_index);
			} else {
				h = zend_inline_hash_func(str_index,
							  str_length);
			}

			if (p->arKey == str_index ||
			    (p->nKeyLength == str_length && p->h == h &&
			     memcmp(p->arKey, str_index, str_length) == 0)) {
				return SUCCESS;
			}

			q = ht->arBuckets[h & ht->nTableMask];

			while (q != NULL) {
				if (q->arKey == str_index ||
				    (q->h == h && q->nKeyLength == str_length &&
				     memcmp(q->arKey, str_index, str_length) ==
					 0)) {
					break;
				}
				q = q->pNext;
			}
		} else {
			return FAILURE;
		}

		HANDLE_BLOCK_INTERRUPTIONS();

		if (q) {
			if (mode != HASH_UPDATE_KEY_ANYWAY) {
				Bucket *r = p->pListLast;
				int found = HASH_UPDATE_KEY_IF_BEFORE;

				while (r) {
					if (r == q) {
						found =
						    HASH_UPDATE_KEY_IF_AFTER;
						break;
					}
					r = r->pListLast;
				}
				if (mode & found) {
					/* delete current bucket */
					if (p ==
					    ht->arBuckets[p->h &
							  ht->nTableMask]) {
						ht->arBuckets[p->h &
							      ht->nTableMask] =
						    p->pNext;
					} else {
						p->pLast->pNext = p->pNext;
					}
					if (p->pNext) {
						p->pNext->pLast = p->pLast;
					}
					if (p->pListLast != NULL) {
						p->pListLast->pListNext =
						    p->pListNext;
					} else {
						/* Deleting the head of the list
						 */
						ht->pListHead = p->pListNext;
					}
					if (p->pListNext != NULL) {
						p->pListNext->pListLast =
						    p->pListLast;
					} else {
						ht->pListTail = p->pListLast;
					}
					if (ht->pInternalPointer == p) {
						ht->pInternalPointer =
						    p->pListNext;
					}
					if (ht->pDestructor) {
						ht->pDestructor(p->pData);
					}
					if (p->pData != &p->pDataPtr) {
						pefree(p->pData,
						       ht->persistent);
					}
					pefree(p, ht->persistent);
					ht->nNumOfElements--;
					HANDLE_UNBLOCK_INTERRUPTIONS();
					return FAILURE;
				}
			}
			/* delete another bucket with the same key */
			if (q == ht->arBuckets[q->h & ht->nTableMask]) {
				ht->arBuckets[q->h & ht->nTableMask] = q->pNext;
			} else {
				q->pLast->pNext = q->pNext;
			}
			if (q->pNext) {
				q->pNext->pLast = q->pLast;
			}
			if (q->pListLast != NULL) {
				q->pListLast->pListNext = q->pListNext;
			} else {
				/* Deleting the head of the list */
				ht->pListHead = q->pListNext;
			}
			if (q->pListNext != NULL) {
				q->pListNext->pListLast = q->pListLast;
			} else {
				ht->pListTail = q->pListLast;
			}
			if (ht->pInternalPointer == q) {
				ht->pInternalPointer = q->pListNext;
			}
			if (ht->pDestructor) {
				ht->pDestructor(q->pData);
			}
			if (q->pData != &q->pDataPtr) {
				pefree(q->pData, ht->persistent);
			}
			pefree(q, ht->persistent);
			ht->nNumOfElements--;
		}

		if (p->pNext) {
			p->pNext->pLast = p->pLast;
		}
		if (p->pLast) {
			p->pLast->pNext = p->pNext;
		} else {
			ht->arBuckets[p->h & ht->nTableMask] = p->pNext;
		}

		if ((IS_INTERNED(p->arKey) != IS_INTERNED(str_index)) ||
		    (!IS_INTERNED(p->arKey) && p->nKeyLength != str_length)) {
			Bucket *q;

			if (IS_INTERNED(str_index)) {
				q = (Bucket *)pemalloc(sizeof(Bucket),
						       ht->persistent);
			} else {
				q = (Bucket *)pemalloc(sizeof(Bucket) +
							   str_length,
						       ht->persistent);
			}

			q->nKeyLength = str_length;
			if (p->pData == &p->pDataPtr) {
				q->pData = &q->pDataPtr;
			} else {
				q->pData = p->pData;
			}
			q->pDataPtr = p->pDataPtr;
			q->pListNext = p->pListNext;
			q->pListLast = p->pListLast;
			if (q->pListNext) {
				p->pListNext->pListLast = q;
			} else {
				ht->pListTail = q;
			}
			if (q->pListLast) {
				p->pListLast->pListNext = q;
			} else {
				ht->pListHead = q;
			}
			if (ht->pInternalPointer == p) {
				ht->pInternalPointer = q;
			}
			if (pos) {
				*pos = q;
			}
			pefree(p, ht->persistent);
			p = q;
		}

		if (key_type == HASH_KEY_IS_LONG) {
			p->h = num_index;
		} else {
			p->h = h;
			p->nKeyLength = str_length;
			if (IS_INTERNED(str_index)) {
				p->arKey = str_index;
			} else {
				p->arKey = (const char *)(p + 1);
				memcpy((char *)p->arKey, str_index, str_length);
			}
		}

		CONNECT_TO_BUCKET_DLLIST(p,
					 ht->arBuckets[p->h & ht->nTableMask]);
		ht->arBuckets[p->h & ht->nTableMask] = p;
		HANDLE_UNBLOCK_INTERRUPTIONS();

		return SUCCESS;
	} else {
		return FAILURE;
	}
}

/* 用于使用sort_func_t对HashTable进行排序 */
ZEND_API int zend_hash_sort(HashTable *ht, sort_func_t sort_func,
			    compare_func_t compar, int renumber TSRMLS_DC)
{
	Bucket **arTmp;
	Bucket *p;
	int i, j;

	IS_CONSISTENT(ht);

	if (!(ht->nNumOfElements > 1) &&
	    !(renumber &&
	      ht->nNumOfElements > 0)) { /* Doesn't require sorting */
		return SUCCESS;
	}
	arTmp = (Bucket **)pemalloc(ht->nNumOfElements * sizeof(Bucket *),
				    ht->persistent);
	if (!arTmp) {
		return FAILURE;
	}
	p = ht->pListHead;
	i = 0;
	while (p) {
		arTmp[i] = p;
		p = p->pListNext;
		i++;
	}

	/* 调用sort_func函数进行排序操作，如无特殊情况，用的是PHP预定义的快排实现:zend_qsort函数
	 */
	(*sort_func)((void *)arTmp, i, sizeof(Bucket *), compar TSRMLS_CC);

	HANDLE_BLOCK_INTERRUPTIONS();
	ht->pListHead = arTmp[0];
	ht->pListTail = NULL;
	ht->pInternalPointer = ht->pListHead;

	arTmp[0]->pListLast = NULL;
	/* 遍历数组，设置每一个节点的pListLast和pListNext */
	if (i > 1) {
		arTmp[0]->pListNext = arTmp[1];
		for (j = 1; j < i - 1; j++) {
			arTmp[j]->pListLast = arTmp[j - 1];
			arTmp[j]->pListNext = arTmp[j + 1];
		}
		arTmp[j]->pListLast = arTmp[j - 1];
		arTmp[j]->pListNext = NULL;
	} else {
		arTmp[0]->pListNext = NULL;
	}
	ht->pListTail = arTmp[i - 1];

	pefree(arTmp, ht->persistent);
	HANDLE_UNBLOCK_INTERRUPTIONS();

	/* 如果renumber == 1，数组会被重新编号 */
	if (renumber) {
		p = ht->pListHead;
		i = 0;
		while (p != NULL) {
			p->nKeyLength = 0;
			p->h = i++;
			p = p->pListNext;
		}
		ht->nNextFreeElement = i;
		zend_hash_rehash(ht);
	}
	return SUCCESS;
}

/* 比较两个哈希表
 * 先比较两个哈希表的大小，大小较大的哈希表则更大
 * 如果大小一样，则要根据orderd的值来继续操作
 *	如果orderd ==
0,函数会遍历第一个哈希表的元素，也会如果第二个哈希表中的有元素跟第一个哈希表当前值有相同key的时候也会查找第二个哈希表，找到key相同，则比较data大小，否则，第一个哈希表更大
 *	如果orderd == 1,
两个哈希表都会被同时遍历，遍历的每一对元素先比较key，再比较data */
/* 循环会在某个比较返回非0值时或者没有更多元素需要比较时结束，如果是后者，那么两个哈希表相同
 */
ZEND_API int zend_hash_compare(HashTable *ht1, HashTable *ht2,
			       compare_func_t compar,
			       zend_bool ordered TSRMLS_DC)
{
	Bucket *p1, *p2 = NULL;
	int result;
	void *pData2;

	IS_CONSISTENT(ht1);
	IS_CONSISTENT(ht2);

	HASH_PROTECT_RECURSION(ht1);
	HASH_PROTECT_RECURSION(ht2);

	/* 先比较哈希表的大小，大小较大的哈希表就大 */
	result = ht1->nNumOfElements - ht2->nNumOfElements;
	if (result != 0) {
		HASH_UNPROTECT_RECURSION(ht1);
		HASH_UNPROTECT_RECURSION(ht2);
		return result;
	}

	p1 = ht1->pListHead;
	/* 如果orderd == 1，两个哈希表同时遍历 */
	if (ordered) {
		p2 = ht2->pListHead;
	}

	while (p1) {
		if (ordered && !p2) {
			/* 如果orderd等于1，且此时p2以及没有更多元素，则第一个哈希表更大
			 */
			HASH_UNPROTECT_RECURSION(ht1);
			HASH_UNPROTECT_RECURSION(ht2);
			return 1; /* That's not supposed to happen */
		}
		if (ordered) {
			/* orderd == 1 */
			if (p1->nKeyLength == 0 &&
			    p2->nKeyLength == 0) { /* numeric indices */
				/* 如果是数字键值，比较哈希值的大小作为返回结果
				 */
				result = p1->h - p2->h;
				if (result != 0) {
					HASH_UNPROTECT_RECURSION(ht1);
					HASH_UNPROTECT_RECURSION(ht2);
					return result;
				}
			} else { /* string indices */
				/* 如果是字符串键值，先比较字符串键值的大小 */
				result = p1->nKeyLength - p2->nKeyLength;
				if (result != 0) {
					HASH_UNPROTECT_RECURSION(ht1);
					HASH_UNPROTECT_RECURSION(ht2);
					return result;
				}
				result = memcmp(p1->arKey, p2->arKey,
						p1->nKeyLength);
				if (result != 0) {
					HASH_UNPROTECT_RECURSION(ht1);
					HASH_UNPROTECT_RECURSION(ht2);
					return result;
				}
			}
			pData2 = p2->pData;
		} else {
			/* orderd == 0 */
			if (p1->nKeyLength == 0) { /* numeric index */
				if (zend_hash_index_find(ht2, p1->h, &pData2) ==
				    FAILURE) {
					HASH_UNPROTECT_RECURSION(ht1);
					HASH_UNPROTECT_RECURSION(ht2);
					return 1;
				}
			} else { /* string index */
				if (zend_hash_quick_find(ht2, p1->arKey,
							 p1->nKeyLength, p1->h,
							 &pData2) == FAILURE) {
					HASH_UNPROTECT_RECURSION(ht1);
					HASH_UNPROTECT_RECURSION(ht2);
					return 1;
				}
			}
		}
		/* 如果key相同，则继续比较data */
		result = compar(p1->pData, pData2 TSRMLS_CC);
		if (result != 0) {
			HASH_UNPROTECT_RECURSION(ht1);
			HASH_UNPROTECT_RECURSION(ht2);
			return result;
		}
		p1 = p1->pListNext;
		if (ordered) {
			p2 = p2->pListNext;
		}
	}

	HASH_UNPROTECT_RECURSION(ht1);
	HASH_UNPROTECT_RECURSION(ht2);
	return 0;
}

/* 返回最大值和最小值 */
ZEND_API int zend_hash_minmax(const HashTable *ht, compare_func_t compar,
			      int flag, void **pData TSRMLS_DC)
{
	Bucket *p, *res;

	IS_CONSISTENT(ht);

	if (ht->nNumOfElements == 0) {
		*pData = NULL;
		return FAILURE;
	}

	res = p = ht->pListHead;
	while ((p = p->pListNext)) {
		if (flag) {
			if (compar(&res, &p TSRMLS_CC) < 0) { /* max */
				res = p;
			}
		} else {
			if (compar(&res, &p TSRMLS_CC) > 0) { /* min */
				res = p;
			}
		}
	}
	*pData = res->pData;
	return SUCCESS;
}

ZEND_API ulong zend_hash_next_free_element(const HashTable *ht)
{
	IS_CONSISTENT(ht);

	return ht->nNextFreeElement;
}

#if ZEND_DEBUG
void zend_hash_display_pListTail(const HashTable *ht)
{
	Bucket *p;

	p = ht->pListTail;
	while (p != NULL) {
		zend_output_debug_string(0, "pListTail has key %s\n", p->arKey);
		p = p->pListLast;
	}
}

void zend_hash_display(const HashTable *ht)
{
	Bucket *p;
	uint i;

	if (UNEXPECTED(ht->nNumOfElements == 0)) {
		zend_output_debug_string(0, "The hash is empty");
		return;
	}
	for (i = 0; i < ht->nTableSize; i++) {
		p = ht->arBuckets[i];
		while (p != NULL) {
			zend_output_debug_string(0, "%s <==> 0x%lX\n", p->arKey,
						 p->h);
			p = p->pNext;
		}
	}

	p = ht->pListTail;
	while (p != NULL) {
		zend_output_debug_string(0, "%s <==> 0x%lX\n", p->arKey, p->h);
		p = p->pListLast;
	}
}
#endif

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */
