@interface SLFacebookSettingsController : ACUIViewController
{
	id _signInButtonSpecifier;
	id _updateContactsSpecifier;
	id _account;
	id _facebookAccountType;
	id _accountRefreshQueue;
	id _email;
	id _password;
	id _loginInfoViewControllerWrapper;
	id _updateContactsFooterView;
	id _facebookAppInstaller;
	id _registrationBuddy;
	id _contactUpdater;
	id _appInstallAlert;
	BOOL _shouldPresentSignInInfo;
	BOOL _userWantsToMergeContacts;
	BOOL _isSavingNewAccount;
	id _networkWarning;
	id _accessQueue;
	id _accessList;
	long long _mode;
}

@end
