@interface MCPlainCertificatePayload : MCCertificatePayload
{
	id _certificateFileName;
	id _certificateData;
	id _password;
	int _dataEncoding;
}

+ handlerWithProfileHandler:
+ password
+ description
+ initWithDictionary:profile:outError:
+ installationWarnings
+ copyCertificate
+ isIdentity
+ isSigned
+ persistentResourceID
+ certificateFileName
+ dataEncoding
+ certificateData
+ .cxx_destruct
- handlerWithProfileHandler:
- password
- description
- initWithDictionary:profile:outError:
- installationWarnings
- copyCertificate
- isIdentity
- isSigned
- persistentResourceID
- certificateFileName
- dataEncoding
- certificateData
- .cxx_destruct
@end
