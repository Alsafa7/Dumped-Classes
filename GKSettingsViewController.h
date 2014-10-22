@interface GKSettingsViewController : PSListController
{
	id _alertViewWeak;
	BOOL _shouldUseContacts;
	BOOL _shouldUseFacebook;
	int _settingsMode;
	id _appleID;
	id _defaultAppleID;
	id _password;
	id _nickname;
	id _emailAddress;
	id _availableExternalServices;
	id _localPlayer;
	id _specifiersSensitiveToConnectivity;
	id _credentialRecoveryController;
}

@end
