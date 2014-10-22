@interface SBSystemLocalNotificationAlert : SBAlertItem
{
	id _app;
	id _localNotification;
	id _bodyText;
	id _actionLabel;
	id _customLockLabel;
	usigned long long _launchButtonIndex;
	usigned long long _snoozeButtonIndex;
	id _sound;
	id _autoMuteTimer;
}

+ initWithLocalNotification:forApplication:
+ localNotification
+ isSnoozable
+ isSystemLocalNotificationAlert
+ shouldShowInEmergencyCall
+ configure:requirePasscodeForActions:
+ dealloc
+ alertView:clickedButtonAtIndex:
+ bodyText
+ sound
+ alertSheetClass
+ _playPresentationSound
+ unlockSource
+ isCriticalAlert
+ lockLabel
+ performUnlockAction
+ willActivate
+ willDeactivateForReason:
+ alertItemNotificationType
+ alertItemNotificationSender
+ alertPriority
+ _autoMuteTimerFired
+ dismiss:
+ application
- initWithLocalNotification:forApplication:
- localNotification
- isSnoozable
- isSystemLocalNotificationAlert
- shouldShowInEmergencyCall
- configure:requirePasscodeForActions:
- dealloc
- alertView:clickedButtonAtIndex:
- bodyText
- sound
- alertSheetClass
- _playPresentationSound
- unlockSource
- isCriticalAlert
- lockLabel
- performUnlockAction
- willActivate
- willDeactivateForReason:
- alertItemNotificationType
- alertItemNotificationSender
- alertPriority
- _autoMuteTimerFired
- dismiss:
- application
@end
