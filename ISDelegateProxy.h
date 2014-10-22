@interface ISDelegateProxy : NSObject
{
	id _delegate;
	id _lock;
	BOOL _shouldMessageMainThread;
}

+ dealloc
+ setDelegate:
+ respondsToSelector:
+ init
+ methodSignatureForSelector:
+ forwardInvocation:
+ sendInvocationToDelegate:
+ setShouldMessageMainThread:
- dealloc
- setDelegate:
- respondsToSelector:
- init
- methodSignatureForSelector:
- forwardInvocation:
- sendInvocationToDelegate:
- setShouldMessageMainThread:
@end
