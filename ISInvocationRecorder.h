@interface ISInvocationRecorder : NSObject
{
	id _target;
}

+ dealloc
+ methodSignatureForSelector:
+ initWithTarget:
+ forwardInvocation:
+ invokeInvocation:
+ adjustedTargetForSelector:
- dealloc
- methodSignatureForSelector:
- initWithTarget:
- forwardInvocation:
- invokeInvocation:
- adjustedTargetForSelector:
@end
