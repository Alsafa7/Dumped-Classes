@interface UIAnimation : NSObject
{
	id _target;
	SEL _action;
	id _delegate;
	id _completion;
	struct _animationFlags;
	double _startTime;
	double _duration;
	int _state;
}

+ state
+ setDuration:
+ type
+ fractionForTime:
+ markStop
+ markStart:
+ dealloc
+ setDelegate:
+ delegate
+ action
+ setAnimationCurve:
+ target
+ setProgress:
+ initWithTarget:
+ setUsesNSTimer:
+ completion
+ setCompletion:
+ progressForFraction:
+ stopAnimation
+ setAction:
+ usesNSTimer
- state
- setDuration:
- type
- fractionForTime:
- markStop
- markStart:
- dealloc
- setDelegate:
- delegate
- action
- setAnimationCurve:
- target
- setProgress:
- initWithTarget:
- setUsesNSTimer:
- completion
- setCompletion:
- progressForFraction:
- stopAnimation
- setAction:
- usesNSTimer
@end
