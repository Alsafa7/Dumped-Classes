@interface SBIconListPageControl : UIPageControl
{
	id _delegate;
	id _pageIndicatorImageSet;
	id _enabledPageIndicatorImageSet;
}

+ _setIndicatorImage:toEnabled:
+ pageIndicatorImageSet
+ setPageIndicatorImageSet:
+ enabledPageIndicatorImageSet
+ setEnabledPageIndicatorImageSet:
+ initWithFrame:
+ dealloc
+ setDelegate:
+ setFrame:
+ delegate
+ touchesBegan:withEvent:
+ touchesMoved:withEvent:
+ touchesEnded:withEvent:
+ defaultHeight
+ _indicatorViewEnabled:index:
+ _transitionIndicator:toEnabled:index:
+ setLegibilitySettings:
- _setIndicatorImage:toEnabled:
- pageIndicatorImageSet
- setPageIndicatorImageSet:
- enabledPageIndicatorImageSet
- setEnabledPageIndicatorImageSet:
- initWithFrame:
- dealloc
- setDelegate:
- setFrame:
- delegate
- touchesBegan:withEvent:
- touchesMoved:withEvent:
- touchesEnded:withEvent:
- defaultHeight
- _indicatorViewEnabled:index:
- _transitionIndicator:toEnabled:index:
- setLegibilitySettings:
@end
