#include <php.h>
#include "hello.h"

zend_function_entry hello_functions[] = {
            PHP_FE(hello_world, NULL)
        PHP_FE_END
};

zend_module_entry hello_module_entry = {
            STANDARD_MODULE_HEADER,
        PHP_HELLO_EXTNAME,
        hello_functions,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        PHP_HELLO_VERSION,
        STANDARD_MODULE_PROPERTIES,
};

ZEND_GET_MODULE(hello);

PHP_FUNCTION(hello_world) {
        int ret, mode = 1;
        size_t s_len;
        char *s;
        zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "s", &s, &s_len);
        ret = php_exec(mode, s, NULL, return_value);
};

