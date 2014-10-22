@interface GKAuthenticateResponse : GKInternalRepresentation
{
	BOOL _loginDisabled;
	BOOL _passwordChangeRequired;
	BOOL _shouldShowLinkAccountsUI;
	id _accountName;
	id _playerID;
	id _authToken;
	long long _environment;
	id _passwordChangeURL;
}

+ setEnvironment:
+ setLoginDisabled:
+ setPasswordChangeRequired:
+ setPasswordChangeURL:
+ setShouldShowLinkAccountsUI:
+ setPlayerID:
+ playerID
+ authToken
+ setAuthToken:
+ passwordChangeRequired
+ passwordChangeURL
+ shouldShowLinkAccountsUI
+ dealloc
+ environment
+ setAccountName:
+ accountName
+ loginDisabled
- setEnvironment:
- setLoginDisabled:
- setPasswordChangeRequired:
- setPasswordChangeURL:
- setShouldShowLinkAccountsUI:
- setPlayerID:
- playerID
- authToken
- setAuthToken:
- passwordChangeRequired
- passwordChangeURL
- shouldShowLinkAccountsUI
- dealloc
- environment
- setAccountName:
- accountName
- loginDisabled
@end
