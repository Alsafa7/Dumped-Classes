@interface UITabBarController : UIViewController
{
	id _tabBar;
	id _containerView;
	id _viewControllerTransitionView;
	id _tabBarItemsToViewControllers;
	id _selectedViewController;
	id _moreNavigationController;
	id _customizableViewControllers;
	id _delegate;
	id _selectedViewControllerDuringWillAppear;
	id _transientViewController;
	usigned long long _customMaxItems;
	usigned long long _defaultMaxItems;
	long long _tabBarPosition;
	struct _tabBarControllerFlags;
	id _moreChildViewControllers;
	id _accessoryView;
	id __animator;
	id __interactor;
}

@end
