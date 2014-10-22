@interface SBNotificationCenterViewController : UIViewController
{
	id _delegate;
	id _clippingView;
	id _containerView;
	id _contentView;
	id _backgroundView;
	id _bottomSeparator;
	id _modeController;
	id _todayViewController;
	id _allModeViewController;
	id _missedModeViewController;
	id _statusBar;
	id _grabberView;
	id _grabberContentView;
	id _grabberBackgroundView;
	id _registeredGrabberView;
	struct _grabberContentViewFrameForRegisteredGrabber;
	id _registeredGrabberHideBlock;
	struct _notificationCenterViewControllerFlags;
}

@end
