@interface SSAuthenticateRequest : SSRequest
{
	id _authenticationContext;
}

+ dealloc
+ start
+ initWithAccount:
+ startWithAuthenticateResponseBlock:
+ initWithXPCEncoding:
+ copyXPCEncoding
+ startWithCompletionBlock:
+ authenticationContext
+ initWithAuthenticationContext:
- dealloc
- start
- initWithAccount:
- startWithAuthenticateResponseBlock:
- initWithXPCEncoding:
- copyXPCEncoding
- startWithCompletionBlock:
- authenticationContext
- initWithAuthenticationContext:
@end
