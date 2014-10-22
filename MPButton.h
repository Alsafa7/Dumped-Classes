@interface MPButton : UIButton
{
	struct _hitRectInsets;
	double _holdDelayInterval;
	bit[1] _holding;
}

+ setHitRectInsets:
+ _handleTouchDown
+ _handleTouchCancel
+ _handleTouchUp
+ _delayedTriggerHold
+ holdDelayInterval
+ hitRectInsets
+ setHoldDelayInterval:
+ initWithFrame:
+ dealloc
+ pointInside:withEvent:
+ hitRect
+ cancelTrackingWithEvent:
+ beginTrackingWithTouch:withEvent:
+ endTrackingWithTouch:withEvent:
- setHitRectInsets:
- _handleTouchDown
- _handleTouchCancel
- _handleTouchUp
- _delayedTriggerHold
- holdDelayInterval
- hitRectInsets
- setHoldDelayInterval:
- initWithFrame:
- dealloc
- pointInside:withEvent:
- hitRect
- cancelTrackingWithEvent:
- beginTrackingWithTouch:withEvent:
- endTrackingWithTouch:withEvent:
@end
