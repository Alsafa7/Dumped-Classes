@interface UIScrollViewPagingSwipeGestureRecognizer : UIGestureRecognizer
{
	id _swipeFailureDelay;
	struct _startLocation;
	struct _lastLocation;
	double _lastTime;
	int _directionalFailureCount;
}

+ dealloc
+ touchesCancelled:withEvent:
+ touchesBegan:withEvent:
+ touchesMoved:withEvent:
+ touchesEnded:withEvent:
+ _resetGestureRecognizer
+ clearTimer
+ enoughTimeElapsed:
+ _processNewLocation:
- dealloc
- touchesCancelled:withEvent:
- touchesBegan:withEvent:
- touchesMoved:withEvent:
- touchesEnded:withEvent:
- _resetGestureRecognizer
- clearTimer
- enoughTimeElapsed:
- _processNewLocation:
@end
