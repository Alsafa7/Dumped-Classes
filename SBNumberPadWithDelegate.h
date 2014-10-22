@interface SBNumberPadWithDelegate : TPNumberPad
{
	id _delegate;
}

+ buttonDown:
+ buttonUp:
+ setDelegate:
+ hitTest:withEvent:
+ delegate
+ buttonForPoint:forEvent:
+ buttonCancelled:
- buttonDown:
- buttonUp:
- setDelegate:
- hitTest:withEvent:
- delegate
- buttonForPoint:forEvent:
- buttonCancelled:
@end
