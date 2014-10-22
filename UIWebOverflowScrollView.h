@interface UIWebOverflowScrollView : UIScrollView
{
	id _webBrowserView;
	id _scrollListener;
	id _overflowContentView;
	id _node;
	BOOL _beingRemoved;
}

+ dealloc
+ superview
+ setContentOffset:
+ node
+ setNode:
+ initWithLayer:node:webBrowserView:
+ setOverflowContentView:
+ overflowContentView
+ _replaceLayer:
+ setBeingRemoved:
+ fixUpViewAfterInsertion
+ webBrowserView
+ prepareForRemoval
+ setWebBrowserView:
+ scrollListener
+ setScrollListener:
+ isBeingRemoved
- dealloc
- superview
- setContentOffset:
- node
- setNode:
- initWithLayer:node:webBrowserView:
- setOverflowContentView:
- overflowContentView
- _replaceLayer:
- setBeingRemoved:
- fixUpViewAfterInsertion
- webBrowserView
- prepareForRemoval
- setWebBrowserView:
- scrollListener
- setScrollListener:
- isBeingRemoved
@end
