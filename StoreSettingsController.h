@interface StoreSettingsController : PSListController
{
	id _appleID;
	id _authenticateRequest;
	id _automaticDownloadConfigurations;
	char _cellularNetworkingAllowed;
	id _cloudClient;
	id _defaultAccountName;
	BOOL _didAuthenticate;
	id _enabledAutomaticDownloadKinds;
	BOOL _isAuthenticating;
	BOOL _isIBooksInstalled;
	id _password;
	id _pendingAutomaticDownloadKinds;
	BOOL _radioSupported;
	BOOL _sagaAvailable;
	BOOL _sagaEnabled;
	BOOL _sagaSupported;
	id _signedInAlertView;
	id _signedOutAlertView;
}

@end
