@interface UIWebOverflowScrollViewInfo : NSObject
{
	id _scrollView;
	id _scrollViewLayer;
	id _oldSuperview;
}

+ dealloc
+ setScrollView:
+ scrollView
+ initWithScrollView:
+ oldSuperview
+ setOldSuperview:
- dealloc
- setScrollView:
- scrollView
- initWithScrollView:
- oldSuperview
- setOldSuperview:
@end
