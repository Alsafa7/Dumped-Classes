@interface WebPDFView : WAKView
{
	BOOL dataSourceHasBeenSet;
	pointer _PDFDocument;
	id _title;
	pointer _pageRects;
}

+ dealloc
+ drawRect:
+ setDataSource:
+ title
+ layout
+ setNeedsLayout:
+ totalPages
+ rectForPageNumber:
+ doc
+ finishedLoadingWithDataSource:
+ receivedData:withDataSource:
+ dataSourceUpdated:
+ receivedError:withDataSource:
+ viewWillMoveToHostWindow:
+ viewDidMoveToHostWindow
+ canProvideDocumentSource
+ documentSource
+ _pagesInRect:
+ drawPage:
+ _checkPDFTitle
+ _computePageRects
+ pageNumberForRect:
- dealloc
- drawRect:
- setDataSource:
- title
- layout
- setNeedsLayout:
- totalPages
- rectForPageNumber:
- doc
- finishedLoadingWithDataSource:
- receivedData:withDataSource:
- dataSourceUpdated:
- receivedError:withDataSource:
- viewWillMoveToHostWindow:
- viewDidMoveToHostWindow
- canProvideDocumentSource
- documentSource
- _pagesInRect:
- drawPage:
- _checkPDFTitle
- _computePageRects
- pageNumberForRect:
@end
