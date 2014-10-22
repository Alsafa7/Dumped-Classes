@interface _UISystemGestureGateGestureRecognizer : UIGestureRecognizer
{
	bit[1] _systemGesturesRecognitionPossible;
	bit[1] _waitingForSystemGestureStateNotification;
	double _lastTouchTime;
}

+ dealloc
+ initWithTarget:action:
+ touchesCancelled:withEvent:
+ touchesBegan:withEvent:
+ touchesEnded:withEvent:
+ setEnabled:
+ _systemGestureStateChanged:
+ canBePreventedByGestureRecognizer:
+ canPreventGestureRecognizer:
+ _resetGestureRecognizer
+ _gateGestureTypeString
+ _gateGestureType
+ _shouldReceiveTouch:
+ _shouldBeRequiredToFailByGestureRecognizer:
- dealloc
- initWithTarget:action:
- touchesCancelled:withEvent:
- touchesBegan:withEvent:
- touchesEnded:withEvent:
- setEnabled:
- _systemGestureStateChanged:
- canBePreventedByGestureRecognizer:
- canPreventGestureRecognizer:
- _resetGestureRecognizer
- _gateGestureTypeString
- _gateGestureType
- _shouldReceiveTouch:
- _shouldBeRequiredToFailByGestureRecognizer:
@end
