@interface IMLockdownManager : NSObject
{
	BOOL _settingUpActivationState;
	BOOL _isInternalInstall;
	BOOL _isCarrierInstall;
	BOOL _isVendorInstall;
	BOOL _hasShownMismatchedSIM;
	BOOL _hasShownWaitingAlertThisSession;
	usigned long long _state;
}

+ dealloc
+ init
+ description
+ _state
+ _setState:
+ _isInternalInstall
+ isVendorInstall
+ _calculateInstallType
+ _setupActivationState
+ lockdownState
+ _activationFailed
+ _resetActivationState
+ isCarrierInstall
+ uniqueDeviceIdentifier
+ _settingUpActivationState
+ set_settingUpActivationState:
+ set_isInternalInstall:
+ _isCarrierInstall
+ set_isCarrierInstall:
+ _isVendorInstall
+ set_isVendorInstall:
+ _hasShownMismatchedSIM
+ set_hasShownMismatchedSIM:
+ _hasShownWaitingAlertThisSession
+ set_hasShownWaitingAlertThisSession:
+ isInternalInstall
+ isActivated
+ isExpired
- dealloc
- init
- description
- _state
- _setState:
- _isInternalInstall
- isVendorInstall
- _calculateInstallType
- _setupActivationState
- lockdownState
- _activationFailed
- _resetActivationState
- isCarrierInstall
- uniqueDeviceIdentifier
- _settingUpActivationState
- set_settingUpActivationState:
- set_isInternalInstall:
- _isCarrierInstall
- set_isCarrierInstall:
- _isVendorInstall
- set_isVendorInstall:
- _hasShownMismatchedSIM
- set_hasShownMismatchedSIM:
- _hasShownWaitingAlertThisSession
- set_hasShownWaitingAlertThisSession:
- isInternalInstall
- isActivated
- isExpired
@end
