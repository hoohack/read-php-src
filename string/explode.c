/* {{{ proto array explode(string separator, string str [, int limit])
   Splits a string on string separator and return array of components. If limit is positive only limit number of components is returned. If limit is negative all components except the last abs(limit) are returned. */
PHP_FUNCTION(explode)
{
	char *str, *delim;
	int str_len = 0, delim_len = 0;
	long limit = LONG_MAX; /* No limit */
	zval zdelim, zstr;

	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "ss|l", &delim, &delim_len, &str, &str_len, &limit) == FAILURE) {
		return;
	}
	// 如果delimiter为空字符串，返回FALSE
	if (delim_len == 0) {
		php_error_docref(NULL TSRMLS_CC, E_WARNING, "Empty delimiter");
		RETURN_FALSE;
	}

	// 初始化返回的数组
	array_init(return_value);

	if (str_len == 0) {
	  	if (limit >= 0) {
	  		// 如果字符串为空且limit大于等于0，则返回一个包含空字符串的数组，注意此处sizeof("") == 1
			add_next_index_stringl(return_value, "", sizeof("") - 1, 1);
		}
		return;
	}

	// 初始化zstr和zdelim的字符串变量
	ZVAL_STRINGL(&zstr, str, str_len, 0);
	ZVAL_STRINGL(&zdelim, delim, delim_len, 0);
	if (limit > 1) {
		// limit大于1，limit默认是LONG_MAX
		php_explode(&zdelim, &zstr, return_value, limit);
	} else if (limit < 0) {
		// limit 为负数
		php_explode_negative_limit(&zdelim, &zstr, return_value, limit);
	} else {
		// limit为0，被当作1处理，返回整个字符串，add_index_stringl函数将str添加到数组return_value中
		add_index_stringl(return_value, 0, str, str_len, 1);
	}
}
/* }}} */

/* {{{ php_explode
 */
PHPAPI void php_explode(zval *delim, zval *str, zval *return_value, long limit)
{
	char *p1, *p2, *endp;

	endp = Z_STRVAL_P(str) + Z_STRLEN_P(str);

	// p1指向字符串的开始
	p1 = Z_STRVAL_P(str);
	// p2指向第一个分隔符的位置
	p2 = php_memnstr(Z_STRVAL_P(str), Z_STRVAL_P(delim), Z_STRLEN_P(delim), endp);

	if (p2 == NULL) {
		// 找不到分隔符，直接返回整个字符串
		add_next_index_stringl(return_value, p1, Z_STRLEN_P(str), 1);
	} else {
		do {
			// 将p1添加到return_value数组中
			add_next_index_stringl(return_value, p1, p2 - p1, 1);
			p1 = p2 + Z_STRLEN_P(delim);
		} while ((p2 = php_memnstr(p1, Z_STRVAL_P(delim), Z_STRLEN_P(delim), endp)) != NULL &&
				 --limit > 1);

		// 将最后一个值添加到return_value
		if (p1 <= endp)
			add_next_index_stringl(return_value, p1, endp-p1, 1);
	}
}
/* }}} */

/* {{{ php_explode_negative_limit
 */
PHPAPI void php_explode_negative_limit(zval *delim, zval *str, zval *return_value, long limit)
{
#define EXPLODE_ALLOC_STEP 64
	char *p1, *p2, *endp;

	endp = Z_STRVAL_P(str) + Z_STRLEN_P(str);

	p1 = Z_STRVAL_P(str);
	p2 = php_memnstr(Z_STRVAL_P(str), Z_STRVAL_P(delim), Z_STRLEN_P(delim), endp);

	// 如果delimiter不在string中，且limit为负数，什么都不做，返回空的array
	if (p2 == NULL) {
		/*
		do nothing since limit <= -1, thus if only one chunk - 1 + (limit) <= 0
		by doing nothing we return empty array
		*/
	} else {
		int allocated = EXPLODE_ALLOC_STEP, found = 0;
		long i, to_return;
		char **positions = emalloc(allocated * sizeof(char *));
		// 第一个单词的位置
		positions[found++] = p1;
		do {
			if (found >= allocated) {
				allocated = found + EXPLODE_ALLOC_STEP;/* make sure we have enough memory */
				positions = erealloc(positions, allocated*sizeof(char *));
			}
			// positions保存每个单词的起始位置
			positions[found++] = p1 = p2 + Z_STRLEN_P(delim);
		} while ((p2 = php_memnstr(p1, Z_STRVAL_P(delim), Z_STRLEN_P(delim), endp)) != NULL);

		// to_return 是return_value的数量，其实等于found - |limit|
		to_return = limit + found;
		/* limit is at least -1 therefore no need of bounds checking : i will be always less than found */
		for (i = 0;i < to_return;i++) { /* this checks also for to_return > 0 */
			add_next_index_stringl(return_value, positions[i],
					(positions[i+1] - Z_STRLEN_P(delim)) - positions[i],
					1
				);
		}
		efree(positions);
	}
#undef EXPLODE_ALLOC_STEP
}