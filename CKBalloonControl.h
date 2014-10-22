@interface CKBalloonControl : UIControl
{
	id _tapEvent;
	id _pressEvent;
	struct _tapEventTouchPoint;
	BOOL _isDoubleTap;
	BOOL _didLongPress;
	id _balloonView;
}

+ balloonView
+ setBalloonView:
+ initWithFrame:
+ dealloc
+ touchesCancelled:withEvent:
+ prepareForReuse
+ touchDown:forEvent:
+ touchUp:forEvent:
+ touchUpOutside:forEvent:
+ repeatTouchDown:forEvent:
+ dragExit:forEvent:
+ cancelDelayedLongPress
+ cancelDelayedSingleTap
+ doSingleTap
+ doLongPress
+ doDoubleTap
+ tapEventTouchPoint
- balloonView
- setBalloonView:
- initWithFrame:
- dealloc
- touchesCancelled:withEvent:
- prepareForReuse
- touchDown:forEvent:
- touchUp:forEvent:
- touchUpOutside:forEvent:
- repeatTouchDown:forEvent:
- dragExit:forEvent:
- cancelDelayedLongPress
- cancelDelayedSingleTap
- doSingleTap
- doLongPress
- doDoubleTap
- tapEventTouchPoint
@end
