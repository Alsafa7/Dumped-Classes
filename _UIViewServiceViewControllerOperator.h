@interface _UIViewServiceViewControllerOperator : UIViewController
{
	int _hostPID;
	struct _hostAuditToken;
	id _remoteViewControllerProxyToOperator;
	id _remoteViewControllerProxyToViewController;
	id _localViewController;
	id _hostedWindow;
	BOOL _isResigningFirstResponderFromHostNotification;
	id _hostedActionSheet;
	BOOL _serviceInPopover;
	long long _hostStatusBarOrientation;
	double _hostStatusBarHeight;
	id _deputyRotationDelegates;
	unsigned int _hostAccessibilityServerPort;
	id _deputyDelegate;
	id _textServiceSession;
	id _prepareForDisconnectionInvocation;
	id _invalidationInvocation;
	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;
	id _displayedPopoverController;
	id _dummyPopoverController;
	usigned long long _supportedOrientations;
	BOOL _canShowTextServices;
	id _delegate;
}

@end
