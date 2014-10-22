@interface MPTelephonyManager : NSObject
{
	BOOL _listeningForCallNotifications;
	BOOL _lockScreenPluginIsActive;
	BOOL _passwordNotificationIsExpired;
	pointer _passwordNotification;
}

+ activeCallExists
+ heldCallExists
+ incomingCallExists
+ activeCall
+ heldCall
+ isTTYEnabled
+ listeningForCallNotifications
+ handleCallerUnavailable:
+ handleCallFailure:
+ handleIncomingCall:
+ handleCauseCode:
+ handleCallCenterFailure:
+ handleInvitationSent:
+ passwordNotificationIsExpired
+ passwordNotification
+ setPasswordNotification:
+ setLockScreenPluginIsActive:
+ lockScreenPluginIsActive
+ _showCallFailureAlertForCall:
+ _handleVoicemailPasswordNeeded:
+ displayAlertForCall:
+ updateLockScreenPluginStatus
+ handlePasswordRequestResponse:flags:
+ _startListeningForCallNotifications
+ setPasswordNotificationIsExpired:
+ setListeningForCallNotifications:
+ dealloc
+ init
+ inCall
+ callCount
+ incomingCall
+ handleCallStatusChanged:
- activeCallExists
- heldCallExists
- incomingCallExists
- activeCall
- heldCall
- isTTYEnabled
- listeningForCallNotifications
- handleCallerUnavailable:
- handleCallFailure:
- handleIncomingCall:
- handleCauseCode:
- handleCallCenterFailure:
- handleInvitationSent:
- passwordNotificationIsExpired
- passwordNotification
- setPasswordNotification:
- setLockScreenPluginIsActive:
- lockScreenPluginIsActive
- _showCallFailureAlertForCall:
- _handleVoicemailPasswordNeeded:
- displayAlertForCall:
- updateLockScreenPluginStatus
- handlePasswordRequestResponse:flags:
- _startListeningForCallNotifications
- setPasswordNotificationIsExpired:
- setListeningForCallNotifications:
- dealloc
- init
- inCall
- callCount
- incomingCall
- handleCallStatusChanged:
@end
