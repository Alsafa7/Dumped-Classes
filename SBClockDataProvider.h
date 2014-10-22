@interface SBClockDataProvider : NSObject
{
	id _alarmUpdateTimer;
	id _dataProviderProxy;
	id _nextAlarmForToday;
	id _nextTodayAlarmBulletin;
	id _firstAlarmForTomorrow;
	id _nextTomorrowFireDate;
	id _nextTomorrowAlarmBulletin;
}

+ _handleClockNotificationUpdate:
+ _handleAlarmSnoozedNotification:
+ _handlePossibleAlarmNotificationUpdate:
+ _scheduledNotifications
+ _publishAlarmsWithScheduledNotifications:
+ _publishTimerInScheduledNotifications:
+ _bulletinRequestForTimerNotification:
+ _bulletinRequestForSnoozedAlarm:
+ _snoozedAlarmRefired:
+ _nextAlarmForFeed:withNotifications:
+ _alarmMessageForNotification:withSingleAlarmFormat:
+ _calculateNextTodayAlarmAndBulletinWithScheduledNotifications:
+ _calculateNextTomorrowAlarmAndBulletinWithScheduledNotifications:
+ dealloc
+ init
+ sectionIdentifier
+ bulletinsWithRequestParameters:lastCleared:
+ bulletinsFilteredBy:count:lastCleared:
+ defaultSectionInfo
+ sortDescriptors
- _handleClockNotificationUpdate:
- _handleAlarmSnoozedNotification:
- _handlePossibleAlarmNotificationUpdate:
- _scheduledNotifications
- _publishAlarmsWithScheduledNotifications:
- _publishTimerInScheduledNotifications:
- _bulletinRequestForTimerNotification:
- _bulletinRequestForSnoozedAlarm:
- _snoozedAlarmRefired:
- _nextAlarmForFeed:withNotifications:
- _alarmMessageForNotification:withSingleAlarmFormat:
- _calculateNextTodayAlarmAndBulletinWithScheduledNotifications:
- _calculateNextTomorrowAlarmAndBulletinWithScheduledNotifications:
- dealloc
- init
- sectionIdentifier
- bulletinsWithRequestParameters:lastCleared:
- bulletinsFilteredBy:count:lastCleared:
- defaultSectionInfo
- sortDescriptors
@end
