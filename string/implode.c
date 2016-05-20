/* {{{ proto string implode([string glue,] array pieces)
   Joins array elements placing glue string between items and return one string */
PHP_FUNCTION(implode)
{
	zval **arg1 = NULL, **arg2 = NULL, *delim, *arr;

	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "Z|Z", &arg1, &arg2) == FAILURE) {
		return;
	}

	if (arg2 == NULL) {
		// 第二个参数为空，第一个参数必须为数组
		if (Z_TYPE_PP(arg1) != IS_ARRAY) {
			php_error_docref(NULL TSRMLS_CC, E_WARNING, "Argument must be an array");
			return;
		}

		MAKE_STD_ZVAL(delim);
#define _IMPL_EMPTY ""
		// 默认使用""连接
		ZVAL_STRINGL(delim, _IMPL_EMPTY, sizeof(_IMPL_EMPTY) - 1, 0);

		SEPARATE_ZVAL(arg1);
		arr = *arg1;
	} else {
		// 根据参数类型设置参数的值
		if (Z_TYPE_PP(arg1) == IS_ARRAY) {
			arr = *arg1;
			convert_to_string_ex(arg2);
			delim = *arg2;
		} else if (Z_TYPE_PP(arg2) == IS_ARRAY) {
			arr = *arg2;
			convert_to_string_ex(arg1);
			delim = *arg1;
		} else {
			php_error_docref(NULL TSRMLS_CC, E_WARNING, "Invalid arguments passed");
			return;
		}
	}

	// 调用php_implode函数进行转换
	php_implode(delim, arr, return_value TSRMLS_CC);

	if (arg2 == NULL) {
		FREE_ZVAL(delim);
	}
}
/* }}} */

/* {{{ php_implode
 */
PHPAPI void php_implode(zval *delim, zval *arr, zval *return_value TSRMLS_DC)
{
	zval         **tmp;
	HashPosition   pos;
	smart_str      implstr = {0};
	int            numelems, i = 0;
	zval tmp_val;
	int str_len;

	// 数组数量
	numelems = zend_hash_num_elements(Z_ARRVAL_P(arr));

	// 数组为空，返回空字符串
	if (numelems == 0) {
		RETURN_EMPTY_STRING();
	}

	// 重置指针
	zend_hash_internal_pointer_reset_ex(Z_ARRVAL_P(arr), &pos);

	// 遍历数组的每一个元素，判断其类型，然后调用smart_str_appendl函数将值追加到字符串中
	while (zend_hash_get_current_data_ex(Z_ARRVAL_P(arr), (void **) &tmp, &pos) == SUCCESS) {
		switch ((*tmp)->type) {
			case IS_STRING:
				smart_str_appendl(&implstr, Z_STRVAL_PP(tmp), Z_STRLEN_PP(tmp));
				break;

			case IS_LONG: {
				char stmp[MAX_LENGTH_OF_LONG + 1];
				str_len = slprintf(stmp, sizeof(stmp), "%ld", Z_LVAL_PP(tmp));
				smart_str_appendl(&implstr, stmp, str_len);
			}
				break;

			case IS_BOOL:
				if (Z_LVAL_PP(tmp) == 1) {
					smart_str_appendl(&implstr, "1", sizeof("1")-1);
				}
				break;

			case IS_NULL:
				break;

			case IS_DOUBLE: {
				char *stmp;
				str_len = spprintf(&stmp, 0, "%.*G", (int) EG(precision), Z_DVAL_PP(tmp));
				smart_str_appendl(&implstr, stmp, str_len);
				efree(stmp);
			}
				break;

			case IS_OBJECT: {
				int copy;
				zval expr;
				zend_make_printable_zval(*tmp, &expr, &copy);
				smart_str_appendl(&implstr, Z_STRVAL(expr), Z_STRLEN(expr));
				if (copy) {
					zval_dtor(&expr);
				}
			}
				break;

			default:
				tmp_val = **tmp;
				zval_copy_ctor(&tmp_val);
				convert_to_string(&tmp_val);
				smart_str_appendl(&implstr, Z_STRVAL(tmp_val), Z_STRLEN(tmp_val));
				zval_dtor(&tmp_val);
				break;

		}

		// 添加glue字符
		if (++i != numelems) {
			smart_str_appendl(&implstr, Z_STRVAL_P(delim), Z_STRLEN_P(delim));
		}
		zend_hash_move_forward_ex(Z_ARRVAL_P(arr), &pos);
	}
	// 在尾部添加字符0
	smart_str_0(&implstr);

	if (implstr.len) {
		RETURN_STRINGL(implstr.c, implstr.len, 0);
	} else {
		smart_str_free(&implstr);
		RETURN_EMPTY_STRING();
	}
}
/* }}} */

#define smart_str_appendl_ex(dest, src, nlen, what) do {			\
	register size_t __nl;											\
	smart_str *__dest = (smart_str *) (dest);						\
																	\
	smart_str_alloc4(__dest, (nlen), (what), __nl);					\
	memcpy(__dest->c + __dest->len, (src), (nlen));					\
	__dest->len = __nl;												\
} while (0)