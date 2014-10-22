@interface IMDelayedInvocationTrampoline : IMInvocationTrampoline
{
	id _modes;
	double _delay;
}

+ dealloc
+ forwardInvocation:
+ initWithTarget:delay:modes:
- dealloc
- forwardInvocation:
- initWithTarget:delay:modes:
@end
