@interface SUTabBarController : UITabBarController
{
	id _clientInterface;
	id _moreListTitle;
	id _overlayBackgroundViewControllers;
	id _preTransientSelectedViewController;
	long long _reloadingUnderneathTransientControllerCount;
	id _sections;
	BOOL _ignoreTabReselection;
	id _moreListSelectedImage;
	id _moreListUnselectedImage;
	id _preloadedViewController;
	id _preloadedViewControllerIdentifier;
	id _preloadedViewControllerKey;
	id _previewOverlayViewController;
	long long _storeBarStyle;
	id _tabBarBackdropView;
}

@end
