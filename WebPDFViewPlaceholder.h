@interface WebPDFViewPlaceholder : WAKView
{
	id _title;
	id _pageRects;
	id _pageYOrigins;
	pointer _document;
	id _dataSource;
	id _delegate;
	BOOL _didFinishLoadAndMemoryMap;
	struct _containerSize;
	BOOL _didCompleteLayout;
}

+ dealloc
+ setDataSource:
+ setDelegate:
+ setTitle:
+ delegate
+ title
+ layout
+ totalPages
+ rectForPageNumber:
+ doc
+ pageRects
+ .cxx_construct
+ document
+ setDocument:
+ didCompleteLayout
+ setPageRects:
+ didUnlockDocument
+ clearDocument
+ pageYOrigins
+ setContainerSize:
+ simulateClickOnLinkToURL:
+ containerSize
+ dataSourceMemoryMapped
+ dataSourceMemoryMapFailed
+ finishedLoadingWithDataSource:
+ receivedData:withDataSource:
+ dataSourceUpdated:
+ receivedError:withDataSource:
+ viewWillMoveToHostWindow:
+ viewDidMoveToHostWindow
+ canProvideDocumentSource
+ documentSource
+ setPageYOrigins:
+ _updateTitleForURL:
+ _notifyDidCompleteLayout
+ _computePageRects:
+ _updateTitleForDocumentIfAvailable
+ _evaluateJSForDocument:
+ _doPostLoadOrUnlockTasks
+ _getPDFPageBounds:
- dealloc
- setDataSource:
- setDelegate:
- setTitle:
- delegate
- title
- layout
- totalPages
- rectForPageNumber:
- doc
- pageRects
- .cxx_construct
- document
- setDocument:
- didCompleteLayout
- setPageRects:
- didUnlockDocument
- clearDocument
- pageYOrigins
- setContainerSize:
- simulateClickOnLinkToURL:
- containerSize
- dataSourceMemoryMapped
- dataSourceMemoryMapFailed
- finishedLoadingWithDataSource:
- receivedData:withDataSource:
- dataSourceUpdated:
- receivedError:withDataSource:
- viewWillMoveToHostWindow:
- viewDidMoveToHostWindow
- canProvideDocumentSource
- documentSource
- setPageYOrigins:
- _updateTitleForURL:
- _notifyDidCompleteLayout
- _computePageRects:
- _updateTitleForDocumentIfAvailable
- _evaluateJSForDocument:
- _doPostLoadOrUnlockTasks
- _getPDFPageBounds:
@end
