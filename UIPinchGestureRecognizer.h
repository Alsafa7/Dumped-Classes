@interface UIPinchGestureRecognizer : UIGestureRecognizer
{
	double _initialTouchDistance;
	double _initialTouchScale;
	double _lastTouchTime;
	double _velocity;
	double _previousVelocity;
	double _scaleThreshold;
	struct _transform;
	struct _anchorPoint;
	Array _touches;
	double _hysteresis;
	id _transformAnalyzer;
	bit[1] _endsOnSingleTouch;
}

+ dealloc
+ initWithCoder:
+ initWithTarget:action:
+ _hysteresis
+ _setHysteresis:
+ scale
+ touchesCancelled:withEvent:
+ touchesBegan:withEvent:
+ touchesMoved:withEvent:
+ touchesEnded:withEvent:
+ anchorPoint
+ setScale:
+ velocity
+ _resetGestureRecognizer
+ _endsOnSingleTouch
+ _setEndsOnSingleTouch:
+ scaleThreshold
+ setScaleThreshold:
- dealloc
- initWithCoder:
- initWithTarget:action:
- _hysteresis
- _setHysteresis:
- scale
- touchesCancelled:withEvent:
- touchesBegan:withEvent:
- touchesMoved:withEvent:
- touchesEnded:withEvent:
- anchorPoint
- setScale:
- velocity
- _resetGestureRecognizer
- _endsOnSingleTouch
- _setEndsOnSingleTouch:
- scaleThreshold
- setScaleThreshold:
@end
