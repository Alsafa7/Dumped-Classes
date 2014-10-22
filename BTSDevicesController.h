@interface BTSDevicesController : PSListController
{
	id _mainGroup;
	id _devicesGroup;
	id _devicesDict;
	id _pairingPINDict;
	BOOL _power;
	BOOL _togglingPower;
	BOOL _bluetoothIsBusy;
	BOOL _bluetoothInitialized;
	BOOL _allowScanning;
	id _currentDeviceSpecifier;
	id _currentDeviceConnectionTimer;
	id _alert;
	id _sspAlert;
	pointer _netClient;
	id _centralManager;
}

@end
