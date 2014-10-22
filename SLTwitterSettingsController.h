@interface SLTwitterSettingsController : ACUIViewController
{
	id _signInAccount;
	id _twitterAccountType;
	id _accounts;
	id _authorizedAppList;
	id _authorizedAppListSpecifiers;
	id _twitterAppInstaller;
	id _signInButtonSpecifier;
	id _updateContactsGroupSpecifier;
	id _updateContactsSpecifier;
	id _createNewAccountGroupSpecifier;
	id _contactUpdater;
	id _updateContactsFooterView;
	id _accountStateDependentSpecifiers;
	id _networkWarning;
	id _appInstallAlert;
}

@end
