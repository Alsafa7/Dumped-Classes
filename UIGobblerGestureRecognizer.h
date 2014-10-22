@interface UIGobblerGestureRecognizer : UIGestureRecognizer
{
	id _excludedView;
}

+ dealloc
+ touchesBegan:withEvent:
+ initWithTarget:action:excludedView:
+ canBePreventedByGestureRecognizer:
+ canPreventGestureRecognizer:
- dealloc
- touchesBegan:withEvent:
- initWithTarget:action:excludedView:
- canBePreventedByGestureRecognizer:
- canPreventGestureRecognizer:
@end
