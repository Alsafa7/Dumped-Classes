@interface _UIAsyncInvocation : NSObject
{
	id _observer;
	id _invocationBlock;
	BOOL _invocationBlockHasBeenCalled;
}

+ dealloc
+ invoke
- dealloc
- invoke
@end
