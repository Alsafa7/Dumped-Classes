@interface MCSCEPPayload : MCCertificatePayload
{
	id _URLString;
	id _CAInstanceName;
	id _challenge;
	id _subject;
	usigned long long _keySize;
	int _usageFlags;
	id _CAFingerprint;
	id _CACaps;
	id _subjectAltName;
	usigned long long _retries;
	usigned long long _retryDelay;
}

+ handlerWithProfileHandler:
+ description
+ URLString
+ subject
+ retries
+ initWithDictionary:profile:outError:
+ stubDictionary
+ copyCertificate
+ copyIdentityFromKeychain
+ isIdentity
+ CAInstanceName
+ keySize
+ usageFlags
+ CAFingerprint
+ CACaps
+ subjectAltName
+ retryDelay
+ isRoot
+ .cxx_destruct
+ challenge
- handlerWithProfileHandler:
- description
- URLString
- subject
- retries
- initWithDictionary:profile:outError:
- stubDictionary
- copyCertificate
- copyIdentityFromKeychain
- isIdentity
- CAInstanceName
- keySize
- usageFlags
- CAFingerprint
- CACaps
- subjectAltName
- retryDelay
- isRoot
- .cxx_destruct
- challenge
@end
