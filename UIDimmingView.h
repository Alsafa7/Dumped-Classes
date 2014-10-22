@interface UIDimmingView : UIView
{
	id _delegate;
	id _highlightedBarButtonItem;
	id _highlightedImageView;
	id _backgroundGlow;
	id _passthroughViews;
	BOOL _ignoresTouches;
	BOOL _displayed;
	BOOL _inPassthroughHitTest;
	id _dimmingColor;
}

+ initWithFrame:
+ dealloc
+ setDelegate:
+ hitTest:withEvent:
+ delegate
+ setDimmingColor:
+ dimmingColor
+ touchesEnded:withEvent:
+ hitTest:forEvent:
+ displayed
+ setIgnoresTouches:
+ display:withAnimationDuration:afterDelay:
+ mouseUp:
+ dimmingRemovalAnimationDidStop
+ setHighlightedBarButtonItem:
+ highlightedBarButtonItem
+ _simulateTap
+ passthroughViews
+ setPassthroughViews:
+ ignoresTouches
+ setDisplayed:
- initWithFrame:
- dealloc
- setDelegate:
- hitTest:withEvent:
- delegate
- setDimmingColor:
- dimmingColor
- touchesEnded:withEvent:
- hitTest:forEvent:
- displayed
- setIgnoresTouches:
- display:withAnimationDuration:afterDelay:
- mouseUp:
- dimmingRemovalAnimationDidStop
- setHighlightedBarButtonItem:
- highlightedBarButtonItem
- _simulateTap
- passthroughViews
- setPassthroughViews:
- ignoresTouches
- setDisplayed:
@end
