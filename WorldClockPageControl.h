@interface WorldClockPageControl : UIPageControl
{
	id _indicator;
	id _currentIndicator;
}

+ initWithFrame:useNeutralColor:
+ dealloc
+ _pageIndicatorImageForPage:
+ _pageIndicatorCurrentImageForPage:
- initWithFrame:useNeutralColor:
- dealloc
- _pageIndicatorImageForPage:
- _pageIndicatorCurrentImageForPage:
@end
