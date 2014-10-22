@interface SBLockdownManager : NSObject
{
	int _state;
	BOOL _settingUpActivationState;
	BOOL _isBricked;
	BOOL _isDeveloperDevice;
	BOOL _hasShownMismatchedSIM;
	id _activatingAlertItem;
	id _unqiueDeviceIdentifier;
}

+ brickedDevice
+ _postAlertsIfNeeded
+ _shouldShowTelephonyAlerts
+ _hasEverRegistered
+ _isRegisteredToNetwork
+ _setHasEverRegistered:
+ _setCurrentAlertItem:
+ isDeveloperDevice
+ _serviceAvailabilityChanged:
+ dealloc
+ init
+ _setupActivationState
+ lockdownState
+ _activationFailed
+ _resetActivationState
- brickedDevice
- _postAlertsIfNeeded
- _shouldShowTelephonyAlerts
- _hasEverRegistered
- _isRegisteredToNetwork
- _setHasEverRegistered:
- _setCurrentAlertItem:
- isDeveloperDevice
- _serviceAvailabilityChanged:
- dealloc
- init
- _setupActivationState
- lockdownState
- _activationFailed
- _resetActivationState
@end
