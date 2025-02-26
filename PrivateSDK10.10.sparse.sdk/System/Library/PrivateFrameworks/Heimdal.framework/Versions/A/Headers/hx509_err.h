/* Generated from /Users/sam/Projects/AOS-Downloader/projects/Heimdal-398.1.2/lib/hx509/hx509_err.et */
/* $Id$ */

#ifndef __hx509_err_h__
#define __hx509_err_h__

struct et_list;

void initialize_hx_error_table_r(struct et_list **);

void initialize_hx_error_table(void);
#define init_hx_err_tbl initialize_hx_error_table

typedef enum hx_error_number{
	HX509_BAD_TIMEFORMAT = 569856,
	HX509_EXTENSION_NOT_FOUND = 569857,
	HX509_NO_PATH = 569858,
	HX509_PARENT_NOT_CA = 569859,
	HX509_CA_PATH_TOO_DEEP = 569860,
	HX509_SIG_ALG_NO_SUPPORTED = 569861,
	HX509_SIG_ALG_DONT_MATCH_KEY_ALG = 569862,
	HX509_CERT_USED_BEFORE_TIME = 569863,
	HX509_CERT_USED_AFTER_TIME = 569864,
	HX509_PRIVATE_KEY_MISSING = 569865,
	HX509_ALG_NOT_SUPP = 569866,
	HX509_ISSUER_NOT_FOUND = 569867,
	HX509_VERIFY_CONSTRAINTS = 569868,
	HX509_RANGE = 569869,
	HX509_NAME_CONSTRAINT_ERROR = 569870,
	HX509_PATH_TOO_LONG = 569871,
	HX509_KU_CERT_MISSING = 569872,
	HX509_CERT_NOT_FOUND = 569873,
	HX509_UNKNOWN_LOCK_COMMAND = 569874,
	HX509_PARENT_IS_CA = 569875,
	HX509_EXTRA_DATA_AFTER_STRUCTURE = 569876,
	HX509_PROXY_CERT_INVALID = 569877,
	HX509_PROXY_CERT_NAME_WRONG = 569878,
	HX509_NAME_MALFORMED = 569879,
	HX509_CERTIFICATE_MALFORMED = 569880,
	HX509_CERTIFICATE_MISSING_EKU = 569881,
	HX509_PROXY_CERTIFICATE_NOT_CANONICALIZED = 569882,
	HX509_CMS_FAILED_CREATE_SIGATURE = 569888,
	HX509_CMS_MISSING_SIGNER_DATA = 569889,
	HX509_CMS_SIGNER_NOT_FOUND = 569890,
	HX509_CMS_NO_DATA_AVAILABLE = 569891,
	HX509_CMS_INVALID_DATA = 569892,
	HX509_CMS_PADDING_ERROR = 569893,
	HX509_CMS_NO_RECIPIENT_CERTIFICATE = 569894,
	HX509_CMS_DATA_OID_MISMATCH = 569895,
	HX509_CRYPTO_INTERNAL_ERROR = 569920,
	HX509_CRYPTO_EXTERNAL_ERROR = 569921,
	HX509_CRYPTO_SIGNATURE_MISSING = 569922,
	HX509_CRYPTO_BAD_SIGNATURE = 569923,
	HX509_CRYPTO_SIG_NO_CONF = 569924,
	HX509_CRYPTO_SIG_INVALID_FORMAT = 569925,
	HX509_CRYPTO_OID_MISMATCH = 569926,
	HX509_CRYPTO_NO_PROMPTER = 569927,
	HX509_CRYPTO_SIGNATURE_WITHOUT_SIGNER = 569928,
	HX509_CRYPTO_RSA_PUBLIC_ENCRYPT = 569929,
	HX509_CRYPTO_RSA_PRIVATE_ENCRYPT = 569930,
	HX509_CRYPTO_RSA_PUBLIC_DECRYPT = 569931,
	HX509_CRYPTO_RSA_PRIVATE_DECRYPT = 569932,
	HX509_CRYPTO_ALGORITHM_BEST_BEFORE = 569933,
	HX509_CRYPTO_KEY_FORMAT_UNSUPPORTED = 569934,
	HX509_CRL_USED_BEFORE_TIME = 569952,
	HX509_CRL_USED_AFTER_TIME = 569953,
	HX509_CRL_INVALID_FORMAT = 569954,
	HX509_CERT_REVOKED = 569955,
	HX509_REVOKE_STATUS_MISSING = 569956,
	HX509_CRL_UNKNOWN_EXTENSION = 569957,
	HX509_REVOKE_WRONG_DATA = 569958,
	HX509_REVOKE_NOT_SAME_PARENT = 569959,
	HX509_CERT_NOT_IN_OCSP = 569960,
	HX509_LOCAL_ATTRIBUTE_MISSING = 569964,
	HX509_PARSING_KEY_FAILED = 569965,
	HX509_UNSUPPORTED_OPERATION = 569966,
	HX509_UNIMPLEMENTED_OPERATION = 569967,
	HX509_PARSING_NAME_FAILED = 569968,
	HX509_CERTIFICATE_UNKNOWN_TYPE = 569969,
	HX509_PKCS11_NO_SLOT = 569984,
	HX509_PKCS11_NO_TOKEN = 569985,
	HX509_PKCS11_NO_MECH = 569986,
	HX509_PKCS11_TOKEN_CONFUSED = 569987,
	HX509_PKCS11_OPEN_SESSION = 569988,
	HX509_PKCS11_LOGIN = 569989,
	HX509_PKCS11_LOAD = 569990
} hx_error_number;

#define ERROR_TABLE_BASE_hx 569856

#define COM_ERR_BINDDOMAIN_hx "heim_com_err569856"

#endif /* __hx509_err_h__ */
