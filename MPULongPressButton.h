@interface MPULongPressButton : UIButton
{
	id _longPressTimer;
	BOOL _longPress;
	double _minimumPressDuration;
}

+ initWithFrame:
+ dealloc
+ setMinimumPressDuration:
+ cancelTrackingWithEvent:
+ beginTrackingWithTouch:withEvent:
+ endTrackingWithTouch:withEvent:
+ minimumPressDuration
+ _clearLongPressTimer
+ _longPressTimerAction
+ .cxx_destruct
- initWithFrame:
- dealloc
- setMinimumPressDuration:
- cancelTrackingWithEvent:
- beginTrackingWithTouch:withEvent:
- endTrackingWithTouch:withEvent:
- minimumPressDuration
- _clearLongPressTimer
- _longPressTimerAction
- .cxx_destruct
@end
