@interface SBPasscodeController : NSObject
{
	id _passcodeAlertItem;
	int _mode;
	id _previousPasscode;
	id _newPasscode;
	int _unlockScreenType;
	id _complianceAlertItem;
	id _forcedComplianceDate;
	id _telephonyNotificationObserver;
	int _restoreCompletedAlertStateChangedToken;
	BOOL _delayedComplianceAlertUntilAfterRestoreCompletedAlert;
}

+ _userWantsToComplyNow:
+ _stopListeningToRestoreCompletedAlertStateChangedNotifications
+ forceUserToChangePasscode
+ _stopListeningToTelephonyNotifications
+ _didEndCall
+ _isRestoreCompletedAlertActive
+ _activateComplianceAlert
+ _startListeningToTelephonyNotifications
+ _startListeningToRestoreCompletedAlertStateChangedNotifications
+ checkPasscodeCompliance
+ dealloc
+ _passwordEntered:
+ _abort
- _userWantsToComplyNow:
- _stopListeningToRestoreCompletedAlertStateChangedNotifications
- forceUserToChangePasscode
- _stopListeningToTelephonyNotifications
- _didEndCall
- _isRestoreCompletedAlertActive
- _activateComplianceAlert
- _startListeningToTelephonyNotifications
- _startListeningToRestoreCompletedAlertStateChangedNotifications
- checkPasscodeCompliance
- dealloc
- _passwordEntered:
- _abort
@end
