@interface UIWebBrowserView : UIWebDocumentView
{
	id _accessory;
	id _input;
	id _currentAssistedNode;
	id _assistedNodeStartingFocusRedirects;
	struct _inputViewBounds;
	struct _addressViewBounds;
	double _lastAdjustmentForScroller;
	usigned long long _audioSessionCategoryOverride;
	bit[1] _accessoryEnabled;
	bit[1] _forceInputView;
	bit[1] _formIsAutoFilling;
	bit[1] _inputViewObeysDOMFocus;
	bit[1] _allowDOMFocusRedirects;
	bit[1] _hasEditedTextField;
	bit[1] _alwaysDispatchesScrollEvents;
	id _webTouchEventsGestureRecognizer;
	id _formDelegate;
	id _editingDelegateForEverythingExceptForms;
	usigned long long _dispatchedTouchEvents;
	id _deferredTouchEvents;
	id _activeHighlighters;
	id _overflowScrollViewsPendingInsertion;
	id _overflowScrollViewsPendingDeletion;
	id _overflowScrollViews;
	id _pendingOverflowDataLock;
	id _pendingOverflowScrolls;
	BOOL _pendingGeometryChangeAfterOverflowScroll;
	struct _messages;
	struct _pdf;
	id _autoFillDelegate;
}

@end
