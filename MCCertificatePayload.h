@interface MCCertificatePayload : MCPayload
{
	id _certificatePersistentID;
	id _installedOnDeviceID;
}

+ description
+ title
+ initWithDictionary:profile:outError:
+ stubDictionary
+ subtitle1Label
+ subtitle1Description
+ expiry
+ subtitle2Label
+ subtitle2Description
+ copyCertificate
+ copyIdentityFromKeychain
+ isIdentity
+ installedOnDeviceID
+ certificatePersistentID
+ isSigned
+ setCertificatePersistentID:
+ setInstalledOnDeviceID:
+ isRoot
+ .cxx_destruct
- description
- title
- initWithDictionary:profile:outError:
- stubDictionary
- subtitle1Label
- subtitle1Description
- expiry
- subtitle2Label
- subtitle2Description
- copyCertificate
- copyIdentityFromKeychain
- isIdentity
- installedOnDeviceID
- certificatePersistentID
- isSigned
- setCertificatePersistentID:
- setInstalledOnDeviceID:
- isRoot
- .cxx_destruct
@end
