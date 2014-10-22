@interface NSCFURLProtocol : NSURLProtocol
{
	pointer cfProt;
}

+ _suspendLoading
+ _resumeLoading
+ startLoading
+ initWithRequest:cachedResponse:client:
+ dealloc
+ stopLoading
+ finalize
- _suspendLoading
- _resumeLoading
- startLoading
- initWithRequest:cachedResponse:client:
- dealloc
- stopLoading
- finalize
@end
