@interface MusicTabBarController : UITabBarController
{
	BOOL _isVisible;
	BOOL _needsReloadWhenBecomingVisible;
	BOOL _supportsTransiency;
	BOOL _displayEmptyTabs;
	id _customizableViewControllerIdentifiers;
	id _navigationControllerDelegate;
	id _orderedViewControllerIdentifiers;
	id _radioNavigationController;
	id _radioViewController;
}

@end
