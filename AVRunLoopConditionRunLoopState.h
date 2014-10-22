@interface AVRunLoopConditionRunLoopState : NSObject
{
	pointer _runLoop;
	pointer _signalSource;
	BOOL _signaled;
}

+ initWithRunLoop:
+ signalSource
+ setSignalSource:
+ signaled
+ setSignaled:
+ runLoop
+ dealloc
- initWithRunLoop:
- signalSource
- setSignalSource:
- signaled
- setSignaled:
- runLoop
- dealloc
@end
