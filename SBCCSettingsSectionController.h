@interface SBCCSettingsSectionController : SBControlCenterSectionViewController
{
	id _buttonsByID;
	Array _settingSupported;
	id _airplaneModeController;
	pointer _wifiManager;
	pointer _wifiDevice;
	id _settingsGateway;
	BOOL _dndEnabled;
	long long _dndStatus;
	id _btManager;
}

@end
