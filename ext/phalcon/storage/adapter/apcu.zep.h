
extern zend_class_entry *phalcon_storage_adapter_apcu_ce;

ZEPHIR_INIT_CLASS(Phalcon_Storage_Adapter_Apcu);

PHP_METHOD(Phalcon_Storage_Adapter_Apcu, __construct);
PHP_METHOD(Phalcon_Storage_Adapter_Apcu, clear);
PHP_METHOD(Phalcon_Storage_Adapter_Apcu, decrement);
PHP_METHOD(Phalcon_Storage_Adapter_Apcu, delete);
PHP_METHOD(Phalcon_Storage_Adapter_Apcu, get);
PHP_METHOD(Phalcon_Storage_Adapter_Apcu, getKeys);
PHP_METHOD(Phalcon_Storage_Adapter_Apcu, has);
PHP_METHOD(Phalcon_Storage_Adapter_Apcu, increment);
PHP_METHOD(Phalcon_Storage_Adapter_Apcu, set);
PHP_METHOD(Phalcon_Storage_Adapter_Apcu, setForever);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_storage_adapter_apcu___construct, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, factory, Phalcon\\Storage\\SerializerFactory, 0)
#if PHP_VERSION_ID >= 80000
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
#else
	ZEND_ARG_ARRAY_INFO(0, options, 0)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_storage_adapter_apcu_clear, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_storage_adapter_apcu_decrement, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_storage_adapter_apcu_delete, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_storage_adapter_apcu_get, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_storage_adapter_apcu_getkeys, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, prefix, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_storage_adapter_apcu_has, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_storage_adapter_apcu_increment, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_storage_adapter_apcu_set, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_INFO(0, ttl)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_storage_adapter_apcu_setforever, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_storage_adapter_apcu_method_entry) {
	PHP_ME(Phalcon_Storage_Adapter_Apcu, __construct, arginfo_phalcon_storage_adapter_apcu___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Phalcon_Storage_Adapter_Apcu, clear, arginfo_phalcon_storage_adapter_apcu_clear, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Storage_Adapter_Apcu, decrement, arginfo_phalcon_storage_adapter_apcu_decrement, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Storage_Adapter_Apcu, delete, arginfo_phalcon_storage_adapter_apcu_delete, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Storage_Adapter_Apcu, get, arginfo_phalcon_storage_adapter_apcu_get, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Storage_Adapter_Apcu, getKeys, arginfo_phalcon_storage_adapter_apcu_getkeys, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Storage_Adapter_Apcu, has, arginfo_phalcon_storage_adapter_apcu_has, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Storage_Adapter_Apcu, increment, arginfo_phalcon_storage_adapter_apcu_increment, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Storage_Adapter_Apcu, set, arginfo_phalcon_storage_adapter_apcu_set, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Storage_Adapter_Apcu, setForever, arginfo_phalcon_storage_adapter_apcu_setforever, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
