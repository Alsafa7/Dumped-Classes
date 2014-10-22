@interface NSURLCredentialStorage : NSObject
{
	id _internal;
}

+ _initWithCFURLCredentialStorage:
+ _internalInit
+ credentialsForProtectionSpace:
+ allCredentials
+ setCredential:forProtectionSpace:
+ removeCredential:forProtectionSpace:
+ removeCredential:forProtectionSpace:options:
+ setDefaultCredential:forProtectionSpace:
+ dealloc
+ init
+ defaultCredentialForProtectionSpace:
- _initWithCFURLCredentialStorage:
- _internalInit
- credentialsForProtectionSpace:
- allCredentials
- setCredential:forProtectionSpace:
- removeCredential:forProtectionSpace:
- removeCredential:forProtectionSpace:options:
- setDefaultCredential:forProtectionSpace:
- dealloc
- init
- defaultCredentialForProtectionSpace:
@end
