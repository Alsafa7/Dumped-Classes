@interface RemindersScheduledListModel : RemindersListModel
{
	id _days;
	long long _todayIndex;
	id _mergedReminders;
}

+ displayedNumberOfIncompleteReminders
+ invalidateMaintainedReminders
+ reminderAtIndexPath:
+ deleteReminder:
+ checkOrUncheckReminder:
+ numberOfIncompleteReminders
+ numberOfCompletedReminders
+ displayedNumberOfCompletedReminders
+ addReminder:
+ faultReminder:
+ matchesReminder:
+ predicateForCountingReminders
+ fetchProtectedData
+ shouldInvalidateReminder:
+ indexForToday
+ numberOfCompletedRemindersAtDayIndex:
+ dateForScheduledRemindersAtDayIndex:
+ containsDate:atIndex:
+ numberOfUncompletedRemindersAtDayIndex:
+ indexForDate:
+ numberOfDaysWithScheduledReminders
+ numberOfCompletedRemindersAtDayIndex:forDisplay:
+ numberOfScheduledRemindersAtDayIndex:
+ _days
+ indexForToday:
+ remindersOnDay:
+ dictionaryForDate:
+ numberOfCompletedRemindersForDisplay:
+ numberOfIncompleteRemindersForDisplay:
+ numberOfUncompletedRemindersAtDayIndex:forDisplay:
+ _scheduledTaskCacheChanged
+ propertiesToFetch
+ initWithEventStore:
+ dealloc
+ reload
+ .cxx_destruct
- displayedNumberOfIncompleteReminders
- invalidateMaintainedReminders
- reminderAtIndexPath:
- deleteReminder:
- checkOrUncheckReminder:
- numberOfIncompleteReminders
- numberOfCompletedReminders
- displayedNumberOfCompletedReminders
- addReminder:
- faultReminder:
- matchesReminder:
- predicateForCountingReminders
- fetchProtectedData
- shouldInvalidateReminder:
- indexForToday
- numberOfCompletedRemindersAtDayIndex:
- dateForScheduledRemindersAtDayIndex:
- containsDate:atIndex:
- numberOfUncompletedRemindersAtDayIndex:
- indexForDate:
- numberOfDaysWithScheduledReminders
- numberOfCompletedRemindersAtDayIndex:forDisplay:
- numberOfScheduledRemindersAtDayIndex:
- _days
- indexForToday:
- remindersOnDay:
- dictionaryForDate:
- numberOfCompletedRemindersForDisplay:
- numberOfIncompleteRemindersForDisplay:
- numberOfUncompletedRemindersAtDayIndex:forDisplay:
- _scheduledTaskCacheChanged
- propertiesToFetch
- initWithEventStore:
- dealloc
- reload
- .cxx_destruct
@end
