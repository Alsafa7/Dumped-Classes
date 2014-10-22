@interface UIPrintFormatter : NSObject
{
	id _printPageRenderer;
	double _maximumContentHeight;
	double _maximumContentWidth;
	struct _contentInsets;
	long long _startPage;
	long long _pageCount;
	BOOL _needsRecalc;
}

+ init
+ copyWithZone:
+ pageCount
+ _setNeedsRecalc
+ _recalcPageCount
+ _recalcIfNecessary
+ _pageContentRect:
+ removeFromPrintPageRenderer
+ setMaximumContentWidth:
+ setMaximumContentHeight:
+ setContentInsets:
+ setPrintPageRenderer:
+ rectForPageAtIndex:
+ drawInRect:forPageAtIndex:
+ printPageRenderer
+ maximumContentHeight
+ maximumContentWidth
+ contentInsets
+ startPage
+ setStartPage:
- init
- copyWithZone:
- pageCount
- _setNeedsRecalc
- _recalcPageCount
- _recalcIfNecessary
- _pageContentRect:
- removeFromPrintPageRenderer
- setMaximumContentWidth:
- setMaximumContentHeight:
- setContentInsets:
- setPrintPageRenderer:
- rectForPageAtIndex:
- drawInRect:forPageAtIndex:
- printPageRenderer
- maximumContentHeight
- maximumContentWidth
- contentInsets
- startPage
- setStartPage:
@end
