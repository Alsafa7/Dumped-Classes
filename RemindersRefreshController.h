@interface RemindersRefreshController : NSObject
{
	id _calendarsPendingRefresh;
	BOOL _isPendingRefreshForCalendarList;
	id _lastCalendarRefreshDates;
	id _lastCalendarListRefreshDate;
	id _accountStore;
	id _allRemindersSyncingAccountIDs;
	BOOL _paused;
}

+ scheduleRefreshForCalendarList
+ pauseScheduledRefreshes
+ resumeScheduledRefreshes
+ scheduleRefreshForAllCalendars
+ scheduleRefreshForCalendarWithIdentifier:
+ _allRemindersSyncingAccountIDs
+ setLastCalendarListRefreshDate:
+ _needsRefreshForCalendarWithIdentifier:
+ _refreshCalendarWithIdentifier:
+ _needsRefreshForCalendarList
+ _refreshCalendarList
+ lastCalendarListRefreshDate
+ dealloc
+ _accountStoreDidChange:
+ .cxx_destruct
+ _accountStore
- scheduleRefreshForCalendarList
- pauseScheduledRefreshes
- resumeScheduledRefreshes
- scheduleRefreshForAllCalendars
- scheduleRefreshForCalendarWithIdentifier:
- _allRemindersSyncingAccountIDs
- setLastCalendarListRefreshDate:
- _needsRefreshForCalendarWithIdentifier:
- _refreshCalendarWithIdentifier:
- _needsRefreshForCalendarList
- _refreshCalendarList
- lastCalendarListRefreshDate
- dealloc
- _accountStoreDidChange:
- .cxx_destruct
- _accountStore
@end
