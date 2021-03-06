@interface EKBBTodayProvider : EKBBDataProvider
{
	id _bulletinRefreshQueue;
	id _descriptionGenerator;
	id _birthdayEvents;
	id _upcomingEvents;
	id _todayEvents;
	id _tomorrowEvents;
	id _updateCountdownTimer;
	id _startCountdownTimer;
	BOOL _isShowingBirthdayBulletin;
	BOOL _isShowingUpcomingEventBulletin;
	BOOL _isShowingTomorrowBulletin;
}

+ supportsAlerts
+ databaseChanged:
+ eventStoreWillClose
+ _upcomingEvents
+ _tomorrowEvents
+ _dateForNow
+ _resetAllEvents
+ _resetTimers
+ _nowComponents
+ _todayEvents
+ _selectedCalendarsChanged:
+ _createBirthdayBulletin
+ _createUpcomingEventBulletin
+ _createTomorrowBulletin
+ _birthdayEventsForToday
+ _dateForEndOfToday
+ _isEventFirstForToday:
+ _refreshUpcomingEventBulletin
+ _loadBirthdayEventsForToday
+ _loadUpcomingEvents
+ _loadTomorrowEvents
+ _loadTodayEvents
+ _selectedCalendars
+ _dateForBeginningOfTomorrow
+ _dateForEndOfTomorrow
+ _dateForBeginningOfToday
+ _todayComponents
+ _tomorrowComponents
+ _refreshBirthdayBulletin
+ _refreshTomorrowBulletin
+ _releaseAllEvents
+ _isEvent:equivalentToEvent:
+ _startCountdownTimerDidFire:
+ _updateCountdownTimerDidFire:
+ _expirationDateForTomorrowSnippet
+ _scheduleTimerForUpdatingCountdownForEvent:
+ _scheduleTimerForStartingCountdownToEvent:
+ _shouldExcludeEvent:allowAllDayEvents:
+ _isListOfEvents:equivalentToListOfEvents:
+ _doesListOfEvents:containEquivalentForEvent:
+ _eventDescriptionWasInvalidated:
+ _localeChanged
+ dealloc
+ init
+ _todayChanged:
+ sectionIdentifier
+ bulletinsWithRequestParameters:lastCleared:
+ defaultSectionInfo
+ sortDescriptors
+ _significantTimeChange:
+ .cxx_destruct
- supportsAlerts
- databaseChanged:
- eventStoreWillClose
- _upcomingEvents
- _tomorrowEvents
- _dateForNow
- _resetAllEvents
- _resetTimers
- _nowComponents
- _todayEvents
- _selectedCalendarsChanged:
- _createBirthdayBulletin
- _createUpcomingEventBulletin
- _createTomorrowBulletin
- _birthdayEventsForToday
- _dateForEndOfToday
- _isEventFirstForToday:
- _refreshUpcomingEventBulletin
- _loadBirthdayEventsForToday
- _loadUpcomingEvents
- _loadTomorrowEvents
- _loadTodayEvents
- _selectedCalendars
- _dateForBeginningOfTomorrow
- _dateForEndOfTomorrow
- _dateForBeginningOfToday
- _todayComponents
- _tomorrowComponents
- _refreshBirthdayBulletin
- _refreshTomorrowBulletin
- _releaseAllEvents
- _isEvent:equivalentToEvent:
- _startCountdownTimerDidFire:
- _updateCountdownTimerDidFire:
- _expirationDateForTomorrowSnippet
- _scheduleTimerForUpdatingCountdownForEvent:
- _scheduleTimerForStartingCountdownToEvent:
- _shouldExcludeEvent:allowAllDayEvents:
- _isListOfEvents:equivalentToListOfEvents:
- _doesListOfEvents:containEquivalentForEvent:
- _eventDescriptionWasInvalidated:
- _localeChanged
- dealloc
- init
- _todayChanged:
- sectionIdentifier
- bulletinsWithRequestParameters:lastCleared:
- defaultSectionInfo
- sortDescriptors
- _significantTimeChange:
- .cxx_destruct
@end
