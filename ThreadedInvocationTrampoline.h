@interface ThreadedInvocationTrampoline : InvocationTrampoline
{
	id _thread;
	BOOL _immediateForMatchingThread;
}

+ dealloc
+ forwardInvocation:
+ initWithTarget:thread:immediateForMatchingThread:
- dealloc
- forwardInvocation:
- initWithTarget:thread:immediateForMatchingThread:
@end
