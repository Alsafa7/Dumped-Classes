@interface SFAirDropDiscoveryController : NSObject
{
	BOOL _isVisible;
	pointer _controller;
	id _actionSheet;
	long long _discoverableMode;
	id _delegate;
	id _actionSheetDelegate;
}

+ dealloc
+ setDelegate:
+ init
+ delegate
+ actionSheet:clickedButtonAtIndex:
+ actionSheet:willDismissWithButtonIndex:
+ actionSheet:didDismissWithButtonIndex:
+ isVisible
+ operationDiscoverableModeToInteger:
+ discoverableModeToString:
+ setDiscoverableMode:
+ handleOperationCallback:event:withResults:
+ discoverableModeActionSheet
+ discoverableMode
+ actionSheetDelegate
+ setActionSheetDelegate:
+ .cxx_destruct
- dealloc
- setDelegate:
- init
- delegate
- actionSheet:clickedButtonAtIndex:
- actionSheet:willDismissWithButtonIndex:
- actionSheet:didDismissWithButtonIndex:
- isVisible
- operationDiscoverableModeToInteger:
- discoverableModeToString:
- setDiscoverableMode:
- handleOperationCallback:event:withResults:
- discoverableModeActionSheet
- discoverableMode
- actionSheetDelegate
- setActionSheetDelegate:
- .cxx_destruct
@end
