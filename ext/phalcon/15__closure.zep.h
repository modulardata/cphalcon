
extern zend_class_entry *phalcon_15__closure_ce;

ZEPHIR_INIT_CLASS(phalcon_15__closure);

PHP_METHOD(phalcon_15__closure, __invoke);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_15__closure___invoke, 0, 0, 4)
	ZEND_ARG_INFO(0, number)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_INFO(0, line)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_15__closure_method_entry) {
	PHP_ME(phalcon_15__closure, __invoke, arginfo_phalcon_15__closure___invoke, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	PHP_FE_END
};
