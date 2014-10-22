@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer
{
	id _touchDelay;
	struct _startScreenLocation;
}

+ dealloc
+ touchesCancelled:withEvent:
+ touchesBegan:withEvent:
+ touchesMoved:withEvent:
+ touchesEnded:withEvent:
+ sendDelayedTouches
+ _resetGestureRecognizer
+ clearTimer
+ sendTouchesShouldBeginForDelayedTouches:
+ sendTouchesShouldBeginForTouches:withEvent:
- dealloc
- touchesCancelled:withEvent:
- touchesBegan:withEvent:
- touchesMoved:withEvent:
- touchesEnded:withEvent:
- sendDelayedTouches
- _resetGestureRecognizer
- clearTimer
- sendTouchesShouldBeginForDelayedTouches:
- sendTouchesShouldBeginForTouches:withEvent:
@end
