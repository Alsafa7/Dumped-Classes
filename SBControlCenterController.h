@interface SBControlCenterController : UIViewController
{
	id _window;
	id _rootView;
	id _viewController;
	id _fullScreenGrabberContainer;
	id _fullScreenGrabberBackdrop;
	id _fullScreenChevron;
	id _preventDismissalOnLockReasons;
	BOOL _uiLocked;
	id _observers;
	long long _orientation;
	BOOL _animatingInitialPresentation;
	BOOL _gotFirstBackdropUpdate;
	BOOL _inGrabberOnlyMode;
	BOOL _presented;
	BOOL _transitioning;
	BOOL _fullyRevealed;
	id _coveredApplication;
}

@end
