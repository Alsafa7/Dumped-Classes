@interface SUUIAppearance : NSObject
{
	id _backButtonAppearance;
	id _confirmationButtonAppearance;
	id _destructiveButtonAppearance;
	id _exitStoreButtonAppearance;
	id _forwardButtonAppearance;
	BOOL _isDefaultAppearance;
	id _navigationBarBackgroundImages;
	id _navigationBarTitleTextAttributes;
	id _navigationButtonAppearance;
	id _segmentedControlAppearance;
	id _tabBarAppearance;
	id _toolbarAppearance;
}

+ dealloc
+ copyWithZone:
+ tabBarAppearance
+ styleNavigationBar:
+ styleTabBarItem:
+ styleBarButtonItem:
+ styleExitStoreButtonItem:
+ styleToolbar:
+ _styleBackBarButtonItem:
+ styleConfirmationButtonItem:
+ styleForwardButtonItem:
+ styleSegmentedControl:tintStyle:
+ setNavigationBarBackgroundImage:forBarMetrics:
+ setTabBarAppearance:
+ setNavigationBarTitleTextAttributes:
+ setNavigationButtonAppearance:forStyle:
+ _copySegmentedControlKeyWithStyle:tintStyle:
+ setSegmentedControlAppearance:forStyle:tintStyle:
+ navigationButtonAppearanceForStyle:
+ confirmationButtonAppearance
+ destructiveButtonAppearance
+ backButtonAppearance
+ navigationBarTitleTextAttributes
+ segmentedControlAppearanceForStyle:tintStyle:
+ toolbarAppearance
+ exitStoreButtonAppearance
+ forwardButtonAppearance
+ navigationBarBackgroundImageForBarMetrics:
+ styleDestructiveButton:
+ styleTabBar:
+ setBackButtonAppearance:
+ setConfirmationButtonAppearance:
+ setDestructiveButtonAppearance:
+ setExitStoreButtonAppearance:
+ setForwardButtonAppearance:
+ setToolbarAppearance:
- dealloc
- copyWithZone:
- tabBarAppearance
- styleNavigationBar:
- styleTabBarItem:
- styleBarButtonItem:
- styleExitStoreButtonItem:
- styleToolbar:
- _styleBackBarButtonItem:
- styleConfirmationButtonItem:
- styleForwardButtonItem:
- styleSegmentedControl:tintStyle:
- setNavigationBarBackgroundImage:forBarMetrics:
- setTabBarAppearance:
- setNavigationBarTitleTextAttributes:
- setNavigationButtonAppearance:forStyle:
- _copySegmentedControlKeyWithStyle:tintStyle:
- setSegmentedControlAppearance:forStyle:tintStyle:
- navigationButtonAppearanceForStyle:
- confirmationButtonAppearance
- destructiveButtonAppearance
- backButtonAppearance
- navigationBarTitleTextAttributes
- segmentedControlAppearanceForStyle:tintStyle:
- toolbarAppearance
- exitStoreButtonAppearance
- forwardButtonAppearance
- navigationBarBackgroundImageForBarMetrics:
- styleDestructiveButton:
- styleTabBar:
- setBackButtonAppearance:
- setConfirmationButtonAppearance:
- setDestructiveButtonAppearance:
- setExitStoreButtonAppearance:
- setForwardButtonAppearance:
- setToolbarAppearance:
@end
