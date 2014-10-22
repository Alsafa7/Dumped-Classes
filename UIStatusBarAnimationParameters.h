@interface UIStatusBarAnimationParameters : NSObject
{
	double _duration;
	double _delay;
	long long _curve;
	id _animationFactory;
	double _startTime;
}

+ dealloc
+ init
+ duration
+ initWithDefaultParameters
+ setDuration:
+ setDelay:
+ setCurve:
+ setStartTime:
+ curve
+ delay
+ shouldAnimate
+ initWithEmptyParameters
+ animationFactory
+ setAnimationFactory:
+ startTime
- dealloc
- init
- duration
- initWithDefaultParameters
- setDuration:
- setDelay:
- setCurve:
- setStartTime:
- curve
- delay
- shouldAnimate
- initWithEmptyParameters
- animationFactory
- setAnimationFactory:
- startTime
@end
