@interface NSURLProtocol : NSObject
{
	id _internal;
}

+ _suspendLoading
+ _resumeLoading
+ _releaseProtocolClientReference
+ startLoading
+ initWithRequest:cachedResponse:client:
+ cachedResponse
+ dealloc
+ request
+ stopLoading
+ client
- _suspendLoading
- _resumeLoading
- _releaseProtocolClientReference
- startLoading
- initWithRequest:cachedResponse:client:
- cachedResponse
- dealloc
- request
- stopLoading
- client
@end
