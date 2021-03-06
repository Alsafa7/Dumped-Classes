@interface SSAccount : NSObject
{
	long long _accountKind;
	id _accountName;
	long long _accountScope;
	long long _accountSource;
	BOOL _active;
	BOOL _activeLockerAccount;
	long long _availableServiceTypes;
	id _bioToken;
	BOOL _didFallbackToPassword;
	id _creditsString;
	BOOL _demo;
	long long _enabledServiceTypes;
	id _lock;
	BOOL _newCustomer;
	id _secureToken;
	id _storeFrontID;
	id _uniqueIdentifier;
}

+ isAuthenticated
+ dealloc
+ init
+ isEqual:
+ hash
+ description
+ isActive
+ copyWithZone:
+ setActive:
+ uniqueIdentifier
+ setUniqueIdentifier:
+ setAccountName:
+ accountName
+ initWithXPCEncoding:
+ copyXPCEncoding
+ setLockdownDictionary:
+ isNewCustomer
+ setDemoAccount:
+ isDemoAccount
+ _sendBlockingXPCMessage:
+ availableServiceTypes
+ didFallbackToPassword
+ isSocialEnabled
+ accountSource
+ setAccountScope:
+ setAccountSource:
+ setDidFallbackToPassword:
+ setNewCustomer:
+ setAvailableServiceTypes:
+ setEnabledServiceTypes:
+ initDemoAccount
+ acceptTermsAndConditions:withCompletionBlock:
+ getDownloadKindsEligibleForContentRestoreWithBlock:
+ getPurchasedItemsForItems:completionBlock:
+ getTermsAndConditionsWithBlock:
+ addAvailableServiceTypes:
+ removeAvailableServiceTypes:
+ resetTransientData
+ copyLockdownRepresentation
+ mergeValuesFromAccount:
+ popBiometricToken
+ setBiometricToken:
+ storeFrontIdentifier
+ creditsString
+ accountScope
+ setStoreFrontIdentifier:
+ setActiveLockerAccount:
+ secureToken
+ setSecureToken:
+ isActiveLockerAccount
+ accountKind
+ enabledServiceTypes
+ setCreditsString:
+ setAccountKind:
+ addEnabledServiceTypes:
+ removeEnabledServiceTypes:
+ setSocialEnabled:
- isAuthenticated
- dealloc
- init
- isEqual:
- hash
- description
- isActive
- copyWithZone:
- setActive:
- uniqueIdentifier
- setUniqueIdentifier:
- setAccountName:
- accountName
- initWithXPCEncoding:
- copyXPCEncoding
- setLockdownDictionary:
- isNewCustomer
- setDemoAccount:
- isDemoAccount
- _sendBlockingXPCMessage:
- availableServiceTypes
- didFallbackToPassword
- isSocialEnabled
- accountSource
- setAccountScope:
- setAccountSource:
- setDidFallbackToPassword:
- setNewCustomer:
- setAvailableServiceTypes:
- setEnabledServiceTypes:
- initDemoAccount
- acceptTermsAndConditions:withCompletionBlock:
- getDownloadKindsEligibleForContentRestoreWithBlock:
- getPurchasedItemsForItems:completionBlock:
- getTermsAndConditionsWithBlock:
- addAvailableServiceTypes:
- removeAvailableServiceTypes:
- resetTransientData
- copyLockdownRepresentation
- mergeValuesFromAccount:
- popBiometricToken
- setBiometricToken:
- storeFrontIdentifier
- creditsString
- accountScope
- setStoreFrontIdentifier:
- setActiveLockerAccount:
- secureToken
- setSecureToken:
- isActiveLockerAccount
- accountKind
- enabledServiceTypes
- setCreditsString:
- setAccountKind:
- addEnabledServiceTypes:
- removeEnabledServiceTypes:
- setSocialEnabled:
@end
