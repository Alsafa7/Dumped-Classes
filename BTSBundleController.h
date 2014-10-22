@interface BTSBundleController : PSBundleController
{
	id _specifier;
	int _initialState;
	id _unavailableStr;
	id _offStr;
	id _onStr;
	BOOL _displayedInRootMenu;
}

+ dealloc
+ bundle
+ powerChanged:
+ setBluetoothValue:specifier:
+ bluetoothValue:
+ initWithParentListController:
+ specifiersWithSpecifier:
- dealloc
- bundle
- powerChanged:
- setBluetoothValue:specifier:
- bluetoothValue:
- initWithParentListController:
- specifiersWithSpecifier:
@end
