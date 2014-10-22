@interface AADataclassConfigurationViewController : ACUIDataclassConfigurationViewController
{
	id _findMyiPhoneExplanationSpecifier;
	id _findMyiPhoneSwitchSpecifier;
	id _documentsAndDataSwitchSpecifier;
	id _storageAndBackupSpecifier;
	id _keychainSyncSpecifier;
	id _accountDowngradeConfirmation;
	id _accountVerifier;
	id _checkMailSpecifier;
	id _headerSpecifiers;
	id _addEmailNavController;
	id _addEmailLoader;
	id _addEmailObjectModels;
	id _mailDataclassSpecifier;
	int _keychainStatus;
	int _keychainSyncNotificationToken;
	int _iCloudRestoreToken;
	BOOL _presentedUpdate;
	BOOL _shouldAuthenticateAfterUpdate;
	BOOL _loadedViaURL;
	BOOL _monitoringReachability;
	BOOL _allowAccountRevalidation;
	BOOL _performedUpdate;
	BOOL _performingUpdate;
	BOOL _appearedBefore;
	BOOL _shouldRemoveParent;
	BOOL _topLevelSettings;
	BOOL _shouldPresentLocationWarning;
	BOOL _accountWasPromoted;
	BOOL _shouldAttemptToEnableDataclasses;
	BOOL _userCanceledLastUpdate;
	BOOL _didShowDeletionConfirmation;
	BOOL _isTogglingDeviceLocator;
	struct _flags;
	id _accountValidationLock;
	id _networkActivityQueue;
	id _genericTermsRemoteUI;
	id _deviceLocatorService;
	id _deviceLocatorOperationCompletionHandler;
	id _restrictionChangeNotificationObserver;
	id _accountRefreshQueue;
}

@end
