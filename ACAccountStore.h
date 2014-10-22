@interface ACAccountStore : NSObject
{
	id _connection;
	id _clientBundleID;
	id _replyQueue;
	BOOL _shouldSendClientState;
	BOOL _notificationsEnabled;
	id _daemonAccountStoreDidChangeObserver;
	id _remoteAccountStore;
}

+ aa_appleAccountType
+ _performUpdateRequestWithAccount:completion:
+ aa_appleAccounts
+ aa_appleAccountWithUsername:
+ aa_appleAccountWithPersonID:
+ aa_accountsEnabledForDataclass:
+ aa_registerAppleAccount:withCompletion:
+ aa_lookupEmailAddresses:withAppleAccount:completion:
+ aa_registerAppleAccountWithHSA:completion:
+ aa_updatePropertiesForAppleAccount:completion:
+ aa_primaryAppleAccount
+ accountsWithAccountType:appleID:
+ accountWithAppleID:
+ initWithRemoteEndpoint:effectiveBundleID:
+ disconnectFromRemoteAccountStore
+ _saveAccount:verify:dataclassActions:completion:
+ credentialForAccount:error:
+ initWithRemoteEndpoint:
+ insertAccountType:withCompletionHandler:
+ removeAccountType:withCompletionHandler:
+ canSaveAccount:withCompletionHandler:
+ saveAccount:withDataclassActions:completion:
+ saveAccount:withDataclassActions:doVerify:completion:
+ requestAccessToAccountsWithType:withCompletionHandler:
+ promptForWebLoginForAccount:atURL:callbackURL:force:reason:completion:
+ allAccountTypes
+ allDataclasses
+ credentialForAccount:bundleID:
+ parentAccountForAccount:
+ childAccountsForAccount:
+ childAccountsForAccount:withTypeIdentifier:
+ enabledDataclassesForAccount:
+ provisionedDataclassesForAccount:
+ supportedDataclassesForAccountType:
+ syncableDataclassesForAccountType:
+ accessKeysForAccountType:
+ appPermissionsForAccountType:
+ setPermissionGranted:forBundleID:onAccountType:
+ clearAllPermissionsGrantedForAccountType:
+ permissionForAccountType:
+ grantedPermissionsForAccountType:
+ clearGrantedPermissionsForAccountType:
+ typeIdentifierForDomain:
+ dataclassActionsForAccountSave:
+ dataclassActionsForAccountDeletion:
+ isTetheredSyncingEnabledForDataclass:
+ tetheredSyncSourceTypeForDataclass:
+ remoteAccountStore
+ setRemoteAccountStore:
+ displayTypeForAccountWithIdentifier:
+ accountIdentifiersEnabledToSyncDataclass:
+ updateExistenceCacheOfAccountWithTypeIdentifier:
+ dealloc
+ init
+ _connectToRemoteAccountStoreUsingEndpoint:
+ verifyCredentialsForAccount:saveWhenAuthorized:withHandler:
+ isPerformingDataclassActionsForAccount:
+ isPushSupportedForAccount:
+ kerberosAccountsForDomainFromURL:completion:
+ removeAccount:withDataclassActions:completion:
+ accountIdentifiersEnabledForDataclasses:withAccountTypeIdentifiers:completion:
+ handleURL:
+ _remoteAccountStore
+ saveAccount:withCompletionHandler:
+ hasAccountWithDescription:
+ accountIdentifiersEnabledForDataclass:
+ accounts
+ accountWithIdentifier:completion:
+ credentialForAccount:
+ verifyCredentialsForAccount:withHandler:
+ setNotificationsEnabled:
+ addClientToken:forAccount:
+ clientTokenForAccount:
+ renewCredentialsForAccount:reason:completion:
+ openAuthenticationURL:forAccount:shouldConfirm:completion:
+ accountWithIdentifier:
+ accountTypeWithAccountTypeIdentifier:
+ accountsWithAccountType:completion:
+ accountTypeWithIdentifier:completion:
+ saveVerifiedAccount:withCompletionHandler:
+ removeAccount:withCompletionHandler:
+ renewCredentialsForAccount:force:reason:completion:
+ .cxx_destruct
+ accountsWithAccountType:
+ renewCredentialsForAccount:completion:
+ requestAccessToAccountsWithType:options:completion:
+ initWithEffectiveBundleID:
+ effectiveBundleID
- aa_appleAccountType
- _performUpdateRequestWithAccount:completion:
- aa_appleAccounts
- aa_appleAccountWithUsername:
- aa_appleAccountWithPersonID:
- aa_accountsEnabledForDataclass:
- aa_registerAppleAccount:withCompletion:
- aa_lookupEmailAddresses:withAppleAccount:completion:
- aa_registerAppleAccountWithHSA:completion:
- aa_updatePropertiesForAppleAccount:completion:
- aa_primaryAppleAccount
- accountsWithAccountType:appleID:
- accountWithAppleID:
- initWithRemoteEndpoint:effectiveBundleID:
- disconnectFromRemoteAccountStore
- _saveAccount:verify:dataclassActions:completion:
- credentialForAccount:error:
- initWithRemoteEndpoint:
- insertAccountType:withCompletionHandler:
- removeAccountType:withCompletionHandler:
- canSaveAccount:withCompletionHandler:
- saveAccount:withDataclassActions:completion:
- saveAccount:withDataclassActions:doVerify:completion:
- requestAccessToAccountsWithType:withCompletionHandler:
- promptForWebLoginForAccount:atURL:callbackURL:force:reason:completion:
- allAccountTypes
- allDataclasses
- credentialForAccount:bundleID:
- parentAccountForAccount:
- childAccountsForAccount:
- childAccountsForAccount:withTypeIdentifier:
- enabledDataclassesForAccount:
- provisionedDataclassesForAccount:
- supportedDataclassesForAccountType:
- syncableDataclassesForAccountType:
- accessKeysForAccountType:
- appPermissionsForAccountType:
- setPermissionGranted:forBundleID:onAccountType:
- clearAllPermissionsGrantedForAccountType:
- permissionForAccountType:
- grantedPermissionsForAccountType:
- clearGrantedPermissionsForAccountType:
- typeIdentifierForDomain:
- dataclassActionsForAccountSave:
- dataclassActionsForAccountDeletion:
- isTetheredSyncingEnabledForDataclass:
- tetheredSyncSourceTypeForDataclass:
- remoteAccountStore
- setRemoteAccountStore:
- displayTypeForAccountWithIdentifier:
- accountIdentifiersEnabledToSyncDataclass:
- updateExistenceCacheOfAccountWithTypeIdentifier:
- dealloc
- init
- _connectToRemoteAccountStoreUsingEndpoint:
- verifyCredentialsForAccount:saveWhenAuthorized:withHandler:
- isPerformingDataclassActionsForAccount:
- isPushSupportedForAccount:
- kerberosAccountsForDomainFromURL:completion:
- removeAccount:withDataclassActions:completion:
- accountIdentifiersEnabledForDataclasses:withAccountTypeIdentifiers:completion:
- handleURL:
- _remoteAccountStore
- saveAccount:withCompletionHandler:
- hasAccountWithDescription:
- accountIdentifiersEnabledForDataclass:
- accounts
- accountWithIdentifier:completion:
- credentialForAccount:
- verifyCredentialsForAccount:withHandler:
- setNotificationsEnabled:
- addClientToken:forAccount:
- clientTokenForAccount:
- renewCredentialsForAccount:reason:completion:
- openAuthenticationURL:forAccount:shouldConfirm:completion:
- accountWithIdentifier:
- accountTypeWithAccountTypeIdentifier:
- accountsWithAccountType:completion:
- accountTypeWithIdentifier:completion:
- saveVerifiedAccount:withCompletionHandler:
- removeAccount:withCompletionHandler:
- renewCredentialsForAccount:force:reason:completion:
- .cxx_destruct
- accountsWithAccountType:
- renewCredentialsForAccount:completion:
- requestAccessToAccountsWithType:options:completion:
- initWithEffectiveBundleID:
- effectiveBundleID
@end