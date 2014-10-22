@interface UIDragRecognizer : UIGestureRecognizer
{
	double _maximumDeviation;
	double _minimumDistance;
	struct _startPosition;
	BOOL _restrictsToAngle;
	double _angle;
	id _touch;
	id _tooSlow;
	double _startAngle;
	double _quietPeriod;
	BOOL _canBeginDrag;
	SEL _checkCanBeginDrag;
	id ignoreTouch;
}

+ dealloc
+ initWithTarget:action:
+ touchesCancelled:withEvent:
+ touchesBegan:withEvent:
+ touchesMoved:withEvent:
+ touchesEnded:withEvent:
+ startPosition
+ touch
+ _resetGestureRecognizer
+ setTouch:
+ setCanBeginDrag:
+ setMinimumDistance:
+ setMaximumDeviation:
+ setQuietPeriod:
+ setCheckCanBeginDrag:
+ clearTimer
+ tooSlow:
+ setRestrictsToAngle:
+ setAngle:
+ clearIgnoreTouch
+ ignoreTouch
+ setIgnoreTouch:
+ setStartPosition:
+ quietPeriod
+ angle
+ minimumDistance
+ restrictsToAngle
+ maximumDeviation
+ checkCanBeginDrag
+ canBeginDrag
+ setStartAngle:
+ startAngle
- dealloc
- initWithTarget:action:
- touchesCancelled:withEvent:
- touchesBegan:withEvent:
- touchesMoved:withEvent:
- touchesEnded:withEvent:
- startPosition
- touch
- _resetGestureRecognizer
- setTouch:
- setCanBeginDrag:
- setMinimumDistance:
- setMaximumDeviation:
- setQuietPeriod:
- setCheckCanBeginDrag:
- clearTimer
- tooSlow:
- setRestrictsToAngle:
- setAngle:
- clearIgnoreTouch
- ignoreTouch
- setIgnoreTouch:
- setStartPosition:
- quietPeriod
- angle
- minimumDistance
- restrictsToAngle
- maximumDeviation
- checkCanBeginDrag
- canBeginDrag
- setStartAngle:
- startAngle
@end
