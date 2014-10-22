@interface SFWirelessSettingsController : NSObject
{
	BOOL _wifiEnabled;
	BOOL _bluetoothEnabled;
	BOOL _deviceSupportsWAPI;
	pointer _information;
	id _delegate;
}

+ isWifiEnabled
+ dealloc
+ setDelegate:
+ init
+ delegate
+ setWifiEnabled:
+ handleOperationCallback:event:withResults:
+ setBluetoothEnabled:
+ isBluetoothEnabled
+ repairAppleID
+ deviceSupportsWAPI
+ .cxx_destruct
- isWifiEnabled
- dealloc
- setDelegate:
- init
- delegate
- setWifiEnabled:
- handleOperationCallback:event:withResults:
- setBluetoothEnabled:
- isBluetoothEnabled
- repairAppleID
- deviceSupportsWAPI
- .cxx_destruct
@end
