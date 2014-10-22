@interface _WebSafeForwarder : NSObject
{
	id target;
	id defaultTarget;
	id asyncForwarder;
	long long asyncForwarderPred;
}

+ dealloc
+ respondsToSelector:
+ methodSignatureForSelector:
+ forwardInvocation:
+ asyncForwarder
+ clearTarget
+ initWithTarget:defaultTarget:
- dealloc
- respondsToSelector:
- methodSignatureForSelector:
- forwardInvocation:
- asyncForwarder
- clearTarget
- initWithTarget:defaultTarget:
@end
