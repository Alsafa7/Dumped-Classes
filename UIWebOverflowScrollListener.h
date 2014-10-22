@interface UIWebOverflowScrollListener : NSObject
{
	id _scrollView;
}

+ scrollViewWillBeginDragging:
+ scrollViewDidEndDragging:willDecelerate:
+ scrollViewDidEndDecelerating:
+ scrollViewDidScrollToTop:
+ _didCompleteScrolling
+ initWithScrollView:
- scrollViewWillBeginDragging:
- scrollViewDidEndDragging:willDecelerate:
- scrollViewDidEndDecelerating:
- scrollViewDidScrollToTop:
- _didCompleteScrolling
- initWithScrollView:
@end
