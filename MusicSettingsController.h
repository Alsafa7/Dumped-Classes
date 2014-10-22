@interface MusicSettingsController : MusicBaseSettingsController
{
	id _authenticateRequest;
	BOOL _didAuthenticate;
	id _cloudClient;
	BOOL _sagaAvailable;
	BOOL _sagaEnabled;
	BOOL _sagaSupported;
	int _lateNightModeToken;
	BOOL _lateNightModeTokenIsValid;
}

@end
