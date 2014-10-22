@interface UIWindow : UIView
{
	id _delegate;
	double _windowLevel;
	double _windowSublevel;
	id _layerContext;
	id _lastMouseDownView;
	id _lastMouseEnteredView;
	id _firstResponder;
	id _fingerInfo;
	id _touchData;
	long long _viewOrientation;
	id _exclusiveTouchView;
	id _undoManager;
	id _screen;
	id _transformLayer;
	id _rotationViewControllers;
	id _rootViewController;
	id _savedBackgroundColor;
	id _subtreeMonitoringViews;
	id _tintViews;
	id _currentTintView;
	struct _windowFlags;
	id _windowController;
	id _responderSelectionCursor;
	id _systemGestureGateForGestures;
	id _systemGestureGateForTouches;
	BOOL __usesLegacySupportedOrientationChecks;
	id _windowInternalConstraints;
	id _rootViewConstraints;
	id _deferredLaunchBlock;
	id __rotationCompleteBlock;
}

@end
