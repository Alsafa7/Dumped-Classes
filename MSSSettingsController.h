@interface MSSSettingsController : PSListController
{
	id _photoStreamSwitchSpecifiers;
	id _sharedStreamsSwitchSpecifiers;
	id _accountStore;
	id _photoStreamAccount;
	id _sharedStreamsAccount;
	id _turnOffPhotoStreamConfirmationView;
	int _turnOffPhotoStreamCancelButtonIndex;
	int _turnOffPhotoStreamDeleteButtonIndex;
	id _turnOffSharedStreamsConfirmationView;
	int _turnOffSharedStreamsCancelButtonIndex;
	int _turnOffSharedStreamsDeleteButtonIndex;
	id _currentlyEnabledPhotoStreamAccount;
	id _radiosPreferences;
	unsigned char _originalCellFlag;
	unsigned char _originalWiFiFlag;
	long long _wifiAvailable;
	bit[1] _showAirplaneModeAlertWhenViewLoads;
	bit[1] _showWifiUnavailableWhenViewLoads;
	bit[1] _inAirplaneMode;
	bit[1] _observingNetworkChanges;
	bit[1] _stoppedObservingNetworkChangesBecauseUIDisappeared;
	bit[1] _carrierBundleChanged;
	bit[1] _photoStreamEnabled;
	bit[1] _sharedStreamsEnabled;
	bit[1] _runningAsGuestSettings;
}

@end
