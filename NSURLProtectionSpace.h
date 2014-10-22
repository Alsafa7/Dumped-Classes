@interface NSURLProtectionSpace : NSObject
{
	id _internal;
}

+ _cfurlprtotectionspace
+ _internalInit
+ realm
+ proxyType
+ initWithHost:port:protocol:realm:authenticationMethod:
+ initWithProxyHost:port:type:realm:authenticationMethod:
+ receivesCredentialSecurely
+ distinguishedNames
+ serverTrust
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ init
+ isEqual:
+ hash
+ isProxy
+ description
+ copyWithZone:
+ host
+ authenticationMethod
+ protocol
+ _initWithCFURLProtectionSpace:
+ port
- _cfurlprtotectionspace
- _internalInit
- realm
- proxyType
- initWithHost:port:protocol:realm:authenticationMethod:
- initWithProxyHost:port:type:realm:authenticationMethod:
- receivesCredentialSecurely
- distinguishedNames
- serverTrust
- dealloc
- initWithCoder:
- encodeWithCoder:
- init
- isEqual:
- hash
- isProxy
- description
- copyWithZone:
- host
- authenticationMethod
- protocol
- _initWithCFURLProtectionSpace:
- port
@end
