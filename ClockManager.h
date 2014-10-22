@interface ClockManager : NSObject
{
	BOOL _performingUpgrade;
	id _scheduledLocalNotifications;
	id _localNotificationUpdates;
	BOOL runningInSpringBoard;
	BOOL runningInAssistantPlugin;
	BOOL ignoringNotificationPostRequests;
}

+ dealloc
+ scheduleLocalNotification:
+ cancelLocalNotification:
+ postUserPreferencesChangedNotification
+ scheduledLocalNotificationsCache
+ resetUpdatesToLocalNotificationsCache
+ upgrade
+ discardOldVersion
+ isIgnoringNotificationPostRequests
+ isRunningInSpringBoard
+ isRunningInAssistantPlugin
+ upgradeIfNeverAttempted
+ refreshScheduledLocalNotificationsCache
+ updatesToLocalNotificationsCache
+ setRunningInSpringBoard:
+ setRunningInAssistantPlugin:
+ setIgnoringNotificationPostRequests:
- dealloc
- scheduleLocalNotification:
- cancelLocalNotification:
- postUserPreferencesChangedNotification
- scheduledLocalNotificationsCache
- resetUpdatesToLocalNotificationsCache
- upgrade
- discardOldVersion
- isIgnoringNotificationPostRequests
- isRunningInSpringBoard
- isRunningInAssistantPlugin
- upgradeIfNeverAttempted
- refreshScheduledLocalNotificationsCache
- updatesToLocalNotificationsCache
- setRunningInSpringBoard:
- setRunningInAssistantPlugin:
- setIgnoringNotificationPostRequests:
@end
