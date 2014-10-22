@interface SBFAnimationFactory : NSObject
{
	double _duration;
	double _delay;
	id _timingFunction;
	double _frameInterval;
}

+ dealloc
+ _basicAnimationForView:withKeyPath:
+ _timingFunctionForAnimation
+ duration
+ setDuration:
+ setDelay:
+ setFrameInterval:
+ setTimingFunction:
+ timingFunction
+ frameInterval
+ delay
+ setTimingFunctionFromSettings:
+ animateWithDelay:options:animations:completion:
+ animateWithDelay:animations:completion:
+ _animation
- dealloc
- _basicAnimationForView:withKeyPath:
- _timingFunctionForAnimation
- duration
- setDuration:
- setDelay:
- setFrameInterval:
- setTimingFunction:
- timingFunction
- frameInterval
- delay
- setTimingFunctionFromSettings:
- animateWithDelay:options:animations:completion:
- animateWithDelay:animations:completion:
- _animation
@end
