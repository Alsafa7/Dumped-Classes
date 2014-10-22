@interface CNFRegSignInController : CNFRegFirstRunController
{
	id _usernameSpecifier;
	id _passwordSpecifier;
	id _actionGroupSpecifier;
	id _signInButtonSpecifier;
	id _createAccountButtonSpecifier;
	id _pendingUsername;
	id _pendingPassword;
	id _alertHandler;
	usigned long long _signinFailureCount;
	id _learnMoreButton;
	BOOL _hideLearnMoreButton;
	BOOL _useSystemAccount;
}

@end
