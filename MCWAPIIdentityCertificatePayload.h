@interface MCWAPIIdentityCertificatePayload : MCCertificatePayload
{
	id _pemData;
}

+ handlerWithProfileHandler:
+ description
+ initWithDictionary:profile:outError:
+ copyCertificate
+ copyIdentityFromKeychain
+ isIdentity
+ pemData
+ .cxx_destruct
- handlerWithProfileHandler:
- description
- initWithDictionary:profile:outError:
- copyCertificate
- copyIdentityFromKeychain
- isIdentity
- pemData
- .cxx_destruct
@end
