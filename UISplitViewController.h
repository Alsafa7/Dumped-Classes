@interface UISplitViewController : UIViewController
{
	id _delegate;
	id _barButtonItem;
	id _buttonTitle;
	id _hiddenPopoverController;
	id _rotationSnapshotView;
	float _masterColumnWidth;
	float _gutterWidth;
	float _cornerRadius;
	long long _rotatingFromOrientation;
	long long _lastPresentedOrientation;
	struct _rotatingFromMasterViewFrame;
	struct _rotatingToMasterViewFrame;
	id _cornerImageViews;
	id _underBarSeparatorView;
	usigned long long _slideTransitionCount;
	id _masterBackgroundView;
	BOOL _presentsInFadingPopover;
	BOOL _presentsWithGesture;
	id _popoverPresentationGestureRecognizer;
	struct _splitViewControllerFlags;
}

@end
