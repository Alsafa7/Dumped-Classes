@interface UIWebPDFViewHandler : NSObject
{
	id _pdfView;
	BOOL _scalesPageToFit;
	double _initialZoomScale;
	id _pdfHandlerDelegate;
	id _linkHighlightView;
	id _pageLabelView;
	BOOL _showPageLabels;
	BOOL _showsShadowsForHTMLContent;
	BOOL _cachedScrollViewShadowsState;
	id _passwordEntryView;
	id _searchControllers;
	id _backgroundColorForUnRenderedContent;
	BOOL _hideActivityIndicatorForUnRenderedContent;
	BOOL _hidePageViewsUntilReadyToRender;
	id _labelViewFormatter;
	struct _pendingHistoryItemRestore;
	id _linkActionSheet;
	id _linkActionInfo;
	id _linkActions;
	struct _rectOfInterest;
	BOOL _rectOfInterestConsidersHeight;
	id _currentAlert;
}

+ dealloc
+ init
+ actionSheet:clickedButtonAtIndex:
+ actionSheet:didDismissWithButtonIndex:
+ alertView:didDismissWithButtonIndex:
+ contentView
+ saveStateToHistoryItem:forWebView:
+ restoreStateFromHistoryItem:forWebView:
+ minimumScaleForSize:
+ enclosingScrollView
+ zoomedDocumentScale
+ currentDocumentScale
+ visibleContentRect
+ rectOfInterestForPoint:
+ doubleTapScalesForSize:
+ considerHeightForDoubleTap
+ hostViewForSheet:
+ initialPresentationRectInHostViewForSheet:
+ presentationRectInHostViewForSheet:
+ scalesPageToFit
+ pdfView
+ updateViewSettings
+ setScalesPageToFit:
+ setShowPageLabels:
+ rotateEnclosingScrollViewToFrame:
+ updateViewHierarchyForFirstNonEmptyLayoutInFrame:
+ updateViewHierarchyForDocumentViewNewLoad:
+ updateViewHierarchyForDocumentViewLoadComplete:
+ handleScrollToAnchor:
+ didReceiveMemoryWarning:
+ _keyboardDidShow:
+ scalesForContainerSize:
+ updateBoundariesOfScrollView:withScales:
+ rectOfInterestForRotation
+ minimumVerticalContentOffset
+ heightToKeepVisible
+ activeRectForRectOfInterest:
+ considerHeightOfRectOfInterestForRotation
+ _absoluteUrlRelativeToDocumentURL:
+ frontView
+ didScroll:
+ setBackgroundColorForUnRenderedContent:
+ ensureCorrectPagesAreInstalled:
+ passwordForPDFView:
+ didDetermineDocumentBounds:
+ pdfView:zoomToRect:forPoint:considerHeight:
+ resetZoom:
+ handleLinkClick:inRect:
+ handleLongPressOnLink:atPoint:inRect:contentRect:
+ hidePageViewsUntilReadyToRender
+ setHidePageViewsUntilReadyToRender:
+ backgroundColorForUnRenderedContent
+ hideActivityIndicatorForUnRenderedContent
+ setHideActivityIndicatorForUnRenderedContent:
+ clearPageLabel
+ _setSearchControllerDocumentToSearch:
+ clearAllViews
+ clearActionSheet
+ clearLinkHighlight
+ _rectForPdfView:
+ _scroller:
+ _getPDFDocumentViewForWebView:
+ _replacePDFViewIfPresentWithWebDocView:
+ _rectForPasswordView:
+ _removePDFViewIfWebDocViewIsNotPDF:
+ _removePDFViewIfWebDocViewIsNotSamePDF:
+ _createPDFViewIfNeeded:
+ _ensurePDFViewInHierarchyForWebDocView:
+ _verticalEdgeForContentOffsetInScrollView:
+ _pinValueForVerticalEdge:inScrollView:
+ _adjustZoomScalesForScrollViewInternal:
+ createLinkHighlight
+ _notifyDelegateWillClickLink:
+ _notifyDelegateDidClickLink:
+ _completeLinkClickWithURL:
+ _completeLinkClickWithURLString:
+ highlightRect:
+ _actionForType:
+ _actionsForInteractionInfo:
+ _showLinkSheet:
+ _showPasswordErrorAlert
+ _adjustContentOffsetForKeyboardIfNeeded
+ adjustZoomScalesForScrollView
+ restoreStateFromPendingHistoryItem
+ _frameForDocumentBounds:
+ _postdidDetermineDocumentBounds
+ _showPasswordEntryViewForFile:
+ updatePageNumberLabelWithUserScrolling:animated:
+ _updateViewHierarchyForDocumentView:ignoreIfSame:
+ updateViewHierarchyForDocumentViewTabSwitch:restoringZoomScale:andScrollPt:
+ _getLabelViewFormatter
+ createPageLabel
+ scrollToPageNumber:animate:
+ _resultRects:andResultViews:forSearchResult:inViewCoordinates:
+ userDidEnterPassword:forPasswordView:
+ didBeginEditingPassword:inView:
+ didEndEditingPassword:inView:
+ searchControllerForHighlighter:
+ clearSearchControllerForHighlighter:
+ findOnPageHighlighter
+ removeViewFromSuperview
+ updateViewHierarchyForDocumentViewTabSwitch:
+ revealSearchResult:andZoomIn:
+ showPageLabels
+ pdfHandlerDelegate
+ setPdfHandlerDelegate:
- dealloc
- init
- actionSheet:clickedButtonAtIndex:
- actionSheet:didDismissWithButtonIndex:
- alertView:didDismissWithButtonIndex:
- contentView
- saveStateToHistoryItem:forWebView:
- restoreStateFromHistoryItem:forWebView:
- minimumScaleForSize:
- enclosingScrollView
- zoomedDocumentScale
- currentDocumentScale
- visibleContentRect
- rectOfInterestForPoint:
- doubleTapScalesForSize:
- considerHeightForDoubleTap
- hostViewForSheet:
- initialPresentationRectInHostViewForSheet:
- presentationRectInHostViewForSheet:
- scalesPageToFit
- pdfView
- updateViewSettings
- setScalesPageToFit:
- setShowPageLabels:
- rotateEnclosingScrollViewToFrame:
- updateViewHierarchyForFirstNonEmptyLayoutInFrame:
- updateViewHierarchyForDocumentViewNewLoad:
- updateViewHierarchyForDocumentViewLoadComplete:
- handleScrollToAnchor:
- didReceiveMemoryWarning:
- _keyboardDidShow:
- scalesForContainerSize:
- updateBoundariesOfScrollView:withScales:
- rectOfInterestForRotation
- minimumVerticalContentOffset
- heightToKeepVisible
- activeRectForRectOfInterest:
- considerHeightOfRectOfInterestForRotation
- _absoluteUrlRelativeToDocumentURL:
- frontView
- didScroll:
- setBackgroundColorForUnRenderedContent:
- ensureCorrectPagesAreInstalled:
- passwordForPDFView:
- didDetermineDocumentBounds:
- pdfView:zoomToRect:forPoint:considerHeight:
- resetZoom:
- handleLinkClick:inRect:
- handleLongPressOnLink:atPoint:inRect:contentRect:
- hidePageViewsUntilReadyToRender
- setHidePageViewsUntilReadyToRender:
- backgroundColorForUnRenderedContent
- hideActivityIndicatorForUnRenderedContent
- setHideActivityIndicatorForUnRenderedContent:
- clearPageLabel
- _setSearchControllerDocumentToSearch:
- clearAllViews
- clearActionSheet
- clearLinkHighlight
- _rectForPdfView:
- _scroller:
- _getPDFDocumentViewForWebView:
- _replacePDFViewIfPresentWithWebDocView:
- _rectForPasswordView:
- _removePDFViewIfWebDocViewIsNotPDF:
- _removePDFViewIfWebDocViewIsNotSamePDF:
- _createPDFViewIfNeeded:
- _ensurePDFViewInHierarchyForWebDocView:
- _verticalEdgeForContentOffsetInScrollView:
- _pinValueForVerticalEdge:inScrollView:
- _adjustZoomScalesForScrollViewInternal:
- createLinkHighlight
- _notifyDelegateWillClickLink:
- _notifyDelegateDidClickLink:
- _completeLinkClickWithURL:
- _completeLinkClickWithURLString:
- highlightRect:
- _actionForType:
- _actionsForInteractionInfo:
- _showLinkSheet:
- _showPasswordErrorAlert
- _adjustContentOffsetForKeyboardIfNeeded
- adjustZoomScalesForScrollView
- restoreStateFromPendingHistoryItem
- _frameForDocumentBounds:
- _postdidDetermineDocumentBounds
- _showPasswordEntryViewForFile:
- updatePageNumberLabelWithUserScrolling:animated:
- _updateViewHierarchyForDocumentView:ignoreIfSame:
- updateViewHierarchyForDocumentViewTabSwitch:restoringZoomScale:andScrollPt:
- _getLabelViewFormatter
- createPageLabel
- scrollToPageNumber:animate:
- _resultRects:andResultViews:forSearchResult:inViewCoordinates:
- userDidEnterPassword:forPasswordView:
- didBeginEditingPassword:inView:
- didEndEditingPassword:inView:
- searchControllerForHighlighter:
- clearSearchControllerForHighlighter:
- findOnPageHighlighter
- removeViewFromSuperview
- updateViewHierarchyForDocumentViewTabSwitch:
- revealSearchResult:andZoomIn:
- showPageLabels
- pdfHandlerDelegate
- setPdfHandlerDelegate:
@end
