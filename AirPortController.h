@interface AirPortController : PSBundleController
{
	id _specifier;
	id _disconnectedStr;
	id _onStr;
	id _offStr;
	id _unavailableStr;
	id _manager;
	BOOL _displayedInRootMenu;
}

+ dealloc
+ bundle
+ networkChanged:
+ currentNetwork:
+ updateUI:
+ setCurrentNetwork:specifier:
+ willResignActive
+ willBecomeActive
+ initWithParentListController:
+ specifiersWithSpecifier:
- dealloc
- bundle
- networkChanged:
- currentNetwork:
- updateUI:
- setCurrentNetwork:specifier:
- willResignActive
- willBecomeActive
- initWithParentListController:
- specifiersWithSpecifier:
@end
