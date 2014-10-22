@interface UITapAndAHalfRecognizer : UIGestureRecognizer
{
	struct _startPoint;
	double _allowableMovement;
	int _numberOfFullTaps;
	double _minimumFinalPressDuration;
	id _activeTouches;
	int _currentNumberOfTaps;
	id _touch;
	id _tapTimer;
}

+ dealloc
+ initWithTarget:action:
+ touchesCancelled:withEvent:
+ touchesBegan:withEvent:
+ touchesMoved:withEvent:
+ touchesEnded:withEvent:
+ touch
+ _resetGestureRecognizer
+ setAllowableMovement:
+ setTouch:
+ allowableMovement
+ clearTapTimer
+ tooSlow:
+ startTapTimer:
+ numberOfFullTaps
+ recognized:
+ minimumFinalPressDuration
+ startRecognitionTimer:
+ _verifyMovementInAllowableRange
+ setNumberOfFullTaps:
+ setMinimumFinalPressDuration:
- dealloc
- initWithTarget:action:
- touchesCancelled:withEvent:
- touchesBegan:withEvent:
- touchesMoved:withEvent:
- touchesEnded:withEvent:
- touch
- _resetGestureRecognizer
- setAllowableMovement:
- setTouch:
- allowableMovement
- clearTapTimer
- tooSlow:
- startTapTimer:
- numberOfFullTaps
- recognized:
- minimumFinalPressDuration
- startRecognitionTimer:
- _verifyMovementInAllowableRange
- setNumberOfFullTaps:
- setMinimumFinalPressDuration:
@end
