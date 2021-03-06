@interface UIWebDocumentView : UIWebTiledView
{
	id _webView;
	id _reachabilityObserver;
	id m_parentTextView;
	id _delegate;
	id _textSuggestionDelegate;
	struct _doubleTapRect;
	struct _mainDocumentDoubleTapRect;
	struct _scrollPoint;
	struct _doubleTapStartPosition;
	double _doubleTapStartTime;
	struct _pendingSize;
	long long _orientation;
	id _standaloneEditingElement;
	struct _mouseDownPoint;
	double _mouseDownTime;
	id _autoscroll;
	pointer _plugInViews;
	long long m_selectionGranularity;
	id _contentLayersHostingLayer;
	id _flattenedRotatingContentLayer;
	id _additionalSubviews;
	id _traits;
	id _inputDelegate;
	id _singleTapGestureRecognizer;
	id _doubleTapGestureRecognizer;
	id _twoFingerDoubleTapGestureRecognizer;
	id _highlightLongPressGestureRecognizer;
	id _longPressGestureRecognizer;
	id _twoFingerPanGestureRecognizer;
	struct _interaction;
	id _viewportHandler;
	int _documentType;
	float _documentScale;
	float _previousDocumentScale;
	struct _fixedLayoutOriginRoundingDelta;
	struct _fixedLayoutSizeRoundingDelta;
	unsigned int _mouseDownCount;
	usigned long long _dataDetectorTypes;
	bit[1] _webCoreNeedsSetNeedsDisplay;
	bit[1] _webCoreNeedsDraw;
	bit[1] _ignoresFocusingMouse;
	bit[1] _ignoresKeyEvents;
	bit[1] _autoresizes;
	bit[1] _ignoresViewportOverflowWhenAutoresizing;
	bit[1] _shouldIgnoreCustomViewport;
	bit[1] _updatingSize;
	bit[1] _scalesToFit;
	bit[1] _updatesScrollView;
	bit[1] _hasCustomScale;
	bit[1] _shouldRestoreScrollPosition;
	bit[1] _pageNeedsReset;
	bit[1] _hasScrollPoint;
	bit[1] _gesturesDisabled;
	bit[1] _doubleTapRectIsReplaced;
	bit[1] _standaloneEditableView;
	bit[1] _widgetEditingView;
	bit[1] _mouseDragged;
	bit[1] _mouseReentrancyGuard;
	bit[1] _isShowingFullScreenPlugIn;
	bit[1] _isSettingRedrawFrame;
	bit[1] _needsScrollNotifications;
	bit[1] _loadsSynchronously;
	bit[1] _mouseDown;
	bit[1] _usePreTimberlineTransparencyBehavior;
	bit[1] _geolocationDialogAllowed;
	bit[1] _usingMinimalTilesDuringLoading;
	bit[2] _sheetsCount;
	bit[1] _didFirstVisuallyNonEmptyLayout;
	bit[1] _loadInProgress;
	bit[1] _uiwdvIsResigningFirstResponder;
	bit[1] _sizeUpdatesSuspended;
	bit[1] _sizeUpdateOccurredWhileSuspended;
	bit[1] _shouldOnlyRecognizeGesturesOnActiveElements;
	bit[1] _ignoresFocusEventFromFirstResponderChange;
	bit[1] _shouldCloseWebViewAtDealloc;
	bit[1] _shouldRemoveUserStyleSheet;
	bit[1] _hasDrawnTiles;
	bit[1] _showingTextStyleOptions;
	bit[1] _subviewCachesNeedUpdate;
	bit[1] _avoidFixedPositionUpdateViaDidScroll;
	bit[1] _inspectorSearchingForNode;
	bit[1] _previousScrollWasScrollToTop;
	bit[1] _pageIsLoadedFromPageCache;
	bit[1] _shouldSendWillShowInteractionHighlight;
	id _undoManager;
	id _webSelectionAssistant;
	id _textSelectionAssistant;
	id _textChecker;
	struct _caretInsets;
	id _fileUploadPanel;
	int _selectionAffinity;
	id _dictationResultPlaceholder;
	id _dictationResultPlaceholderRemovalObserver;
	id _rangeToRestoreAfterDictation;
	Array _defaultViewportConfigurations;
	id _definitionSession;
	id _learnSession;
	id _latestCommittedPageLoadHistoryItem;
	BOOL _suppressesIncrementalRendering;
	usigned long long _renderTreeSize;
	usigned long long _renderTreeSizeThresholdForReset;
	struct _exposedScrollViewRect;
}

@end
