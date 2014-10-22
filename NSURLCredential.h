@interface NSURLCredential : NSObject
{
	id _internal;
}

+ user
+ password
+ initWithUser:password:persistence:
+ initWithIdentity:certificates:persistence:
+ initWithTrust:
+ hasPassword
+ persistence
+ identity
+ certificates
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ _cfurlcredential
+ _initWithCFURLCredential:
- user
- password
- initWithUser:password:persistence:
- initWithIdentity:certificates:persistence:
- initWithTrust:
- hasPassword
- persistence
- identity
- certificates
- dealloc
- initWithCoder:
- encodeWithCoder:
- isEqual:
- hash
- description
- copyWithZone:
- _cfurlcredential
- _initWithCFURLCredential:
@end
