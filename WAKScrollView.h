@interface WAKScrollView : WAKView
{
	id _documentView;
	id _contentView;
	id _delegate;
	struct _scrollOrigin;
}

+ initWithFrame:
+ dealloc
+ drawRect:
+ setDelegate:
+ description
+ delegate
+ contentView
+ scrollWheel:
+ setDrawsBackground:
+ documentView
+ .cxx_construct
+ drawsBackground
+ setDocumentView:
+ setScrollingModes:vertical:andLock:
+ scrollingModes:vertical:
+ actualDocumentVisibleRect
+ documentVisibleExtent
+ setActualScrollPosition:
+ documentVisibleRect
+ setScrollBarsSuppressed:repaintOnUnsuppress:
+ scrollOrigin
+ scrollPoint:
+ setScrollOrigin:updatePositionAtAll:immediately:
+ _selfHandleEvent:
+ setHasVerticalScroller:
+ hasVerticalScroller
+ setHasHorizontalScroller:
+ hasHorizontalScroller
+ setLineScroll:
+ verticalLineScroll
+ horizontalLineScroll
+ reflectScrolledClipView:
+ setHorizontalScrollingMode:
+ setVerticalScrollingMode:
+ setScrollingMode:
+ horizontalScrollingMode
+ verticalScrollingMode
+ inProgrammaticScroll
+ _adjustScrollers
- initWithFrame:
- dealloc
- drawRect:
- setDelegate:
- description
- delegate
- contentView
- scrollWheel:
- setDrawsBackground:
- documentView
- .cxx_construct
- drawsBackground
- setDocumentView:
- setScrollingModes:vertical:andLock:
- scrollingModes:vertical:
- actualDocumentVisibleRect
- documentVisibleExtent
- setActualScrollPosition:
- documentVisibleRect
- setScrollBarsSuppressed:repaintOnUnsuppress:
- scrollOrigin
- scrollPoint:
- setScrollOrigin:updatePositionAtAll:immediately:
- _selfHandleEvent:
- setHasVerticalScroller:
- hasVerticalScroller
- setHasHorizontalScroller:
- hasHorizontalScroller
- setLineScroll:
- verticalLineScroll
- horizontalLineScroll
- reflectScrolledClipView:
- setHorizontalScrollingMode:
- setVerticalScrollingMode:
- setScrollingMode:
- horizontalScrollingMode
- verticalScrollingMode
- inProgrammaticScroll
- _adjustScrollers
@end
