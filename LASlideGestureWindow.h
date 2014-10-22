@interface LASlideGestureWindow : UIWindow
{
	BOOL hasSentSlideEvent;
	id _eventName;
}

+ initWithFrame:eventName:
+ dealloc
+ touchesBegan:withEvent:
+ touchesMoved:withEvent:
+ touchesEnded:withEvent:
+ handleStatusBarChangeFromHeight:toHeight:
+ updateVisibility
- initWithFrame:eventName:
- dealloc
- touchesBegan:withEvent:
- touchesMoved:withEvent:
- touchesEnded:withEvent:
- handleStatusBarChangeFromHeight:toHeight:
- updateVisibility
@end
