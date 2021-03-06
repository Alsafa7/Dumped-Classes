@interface UIPrintInteractionController : NSObject
{
	id _printInfo;
	id _delegate;
	BOOL _showsPageRange;
	BOOL _hidesNumberOfCopies;
	id _printPageRenderer;
	id _printFormatter;
	id _printingItem;
	id _printingItems;
	id _printPaper;
	id _completionHandler;
	usigned long long _backgroundTaskIdentifier;
	id _printState;
}

+ _enableManualPrintPage:
+ _manualPrintPage
+ _cancelManualPrintPage
+ release
+ dealloc
+ setDelegate:
+ init
+ delegate
+ _init
+ pageCount
+ printInfo
+ dismissAnimated:
+ setPrintPageRenderer:
+ printPageRenderer
+ _currentPrintInfo
+ setPrinter:
+ _printPanelDidPresent
+ _printPanelWillDismiss:
+ _printPanelDidDismiss
+ _updatePageCount
+ pageRange
+ setPageRange:
+ _printItemContentSize
+ paper
+ setPaper:
+ _canShowDuplex
+ _canShowPageRange
+ _canShowCopies
+ _canShowPaperList
+ printer
+ _cleanPrintState
+ presentFromRect:inView:animated:completionHandler:
+ _setupPrintPanel:
+ presentAnimated:completionHandler:
+ _updatePrintPaper
+ _endPrintJob:error:
+ _startPrinting
+ _setPrintInfoState:
+ _paperForPDFItem:withDuplexMode:
+ _paperForContentType:
+ _preparePrintInfo
+ _printPage
+ _printPageRenderer:
+ _printItem:
+ setPrintingItem:
+ presentFromBarButtonItem:animated:completionHandler:
+ showsNumberOfCopies
+ setShowsNumberOfCopies:
+ setPrintInfo:
+ showsPageRange
+ setShowsPageRange:
+ printPaper
+ printFormatter
+ setPrintFormatter:
+ printingItem
+ printingItems
+ setPrintingItems:
- _enableManualPrintPage:
- _manualPrintPage
- _cancelManualPrintPage
- release
- dealloc
- setDelegate:
- init
- delegate
- _init
- pageCount
- printInfo
- dismissAnimated:
- setPrintPageRenderer:
- printPageRenderer
- _currentPrintInfo
- setPrinter:
- _printPanelDidPresent
- _printPanelWillDismiss:
- _printPanelDidDismiss
- _updatePageCount
- pageRange
- setPageRange:
- _printItemContentSize
- paper
- setPaper:
- _canShowDuplex
- _canShowPageRange
- _canShowCopies
- _canShowPaperList
- printer
- _cleanPrintState
- presentFromRect:inView:animated:completionHandler:
- _setupPrintPanel:
- presentAnimated:completionHandler:
- _updatePrintPaper
- _endPrintJob:error:
- _startPrinting
- _setPrintInfoState:
- _paperForPDFItem:withDuplexMode:
- _paperForContentType:
- _preparePrintInfo
- _printPage
- _printPageRenderer:
- _printItem:
- setPrintingItem:
- presentFromBarButtonItem:animated:completionHandler:
- showsNumberOfCopies
- setShowsNumberOfCopies:
- setPrintInfo:
- showsPageRange
- setShowsPageRange:
- printPaper
- printFormatter
- setPrintFormatter:
- printingItem
- printingItems
- setPrintingItems:
@end
