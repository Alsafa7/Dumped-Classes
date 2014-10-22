@interface SBAppSliderController : UIViewController
{
	id _delegate;
	id _appList;
	id _switcherServices;
	id _switcherServiceViewControllerMap;
	usigned long long _appListAccessCount;
	id _pageController;
	id _iconController;
	id _containerView;
	id _contentView;
	id _pageView;
	id _iconView;
	id _iconParallaxView;
	id _iconParallaxCorrectionView;
	id _hostedApplications;
	id _appSnapshots;
	struct _lastVisibleRange;
	usigned long long _startAnchorIndex;
	long long _startingInterfaceOrientation;
	long long _layoutInterfaceOrientation;
	BOOL _interactionEnabled;
	BOOL _visible;
	int _mode;
	BOOL _deferredWorkComplete;
	usigned long long _startingIndex;
	id _startingDisplayIdentifier;
	id _startingViews;
	int _enterSide;
	id _settings;
	id _snapshotQueue;
	id _servicesRemovedWhileAwayFromSwitcher;
	id _statusBarCache;
	struct _wallpaperTransform;
}

@end
