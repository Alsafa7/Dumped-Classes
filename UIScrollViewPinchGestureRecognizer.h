@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer
{
	id _scrollView;
	SEL _scrollViewAction;
	bit[1] _hasParentScrollView;
}

+ setDelegate:
+ initWithTarget:action:
+ _hysteresis
+ touchesBegan:withEvent:
+ touchesMoved:withEvent:
+ setScrollView:
+ removeTarget:action:
+ scrollView
- setDelegate:
- initWithTarget:action:
- _hysteresis
- touchesBegan:withEvent:
- touchesMoved:withEvent:
- setScrollView:
- removeTarget:action:
- scrollView
@end
