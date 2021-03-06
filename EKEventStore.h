@interface EKEventStore : NSObject
{
	unsigned int _flags;
	id _registeredObjects;
	id _publicRegisteredObjects;
	id _insertedObjects;
	id _deletedObjects;
	id _updatedObjects;
	id _defaultTimedAlarmOffset;
	id _defaultAllDayAlarmOffset;
	id _defaultCalendarForNewEvents;
	id _defaultCalendarForNewReminders;
	id _database;
	double _lastDatabaseNotificationTimestamp;
	id _timeZone;
	id _calendars;
	id _sources;
	id _objectsPendingCommit;
	id _calendarQueue;
	id _registeredQueue;
	id _unsavedChangesQueue;
	id _dbChangedQueue;
	id _cachedValidatedEmails;
}

+ colorForCalendar:
+ _uicolorFromString:
+ symbolicNameToUIColors
+ colorNamesInRainbowOrder
+ localizedStringForSymbolicColorName:
+ defaultCalendarColorsInRainbowOrder
+ stringForColor:
+ setDeletedObjects:
+ setInsertedObjects:
+ setUpdatedObjects:
+ initWithOptions:path:
+ _requestAccessForEntityType:
+ _accessStatusChanged
+ requestAccessToEntityType:completion:
+ daemonRestarted
+ serverPort
+ _unregisterObject:
+ set_defaultCalendarForNewEvents:
+ set_defaultCalendarForNewReminders:
+ _validateObjectIDs:completion:
+ isDataProtected
+ _databaseChangedExternally
+ registerFetchedObjectWithID:
+ sources
+ commit:
+ _allCalendars
+ _saveWithoutNotify
+ registerFetchedObjectWithID:withDefaultLoadedProperties:inSet:
+ _calendar:supportsEntityType:
+ _calendarWithID:
+ saveCalendar:commit:error:
+ removeCalendar:commit:error:
+ _addObjectToPendingCommits:
+ _parseURI:expectedScheme:identifier:options:
+ eventForUID:occurrenceDate:checkValid:
+ saveEvent:span:commit:error:
+ removeEvent:span:commit:error:
+ _insertObject:
+ _deleteObject:
+ importICSData:intoCalendar:options:
+ _performServerFunction:replyHandler:
+ importICSData:intoCalendar:options:completion:
+ saveReminder:commit:error:
+ removeReminder:commit:error:
+ calendarItemWithIdentifier:
+ _calendarItemsMatchingPredicate:
+ _predicateForRemindersWithDate:useAsCompletionDate:calendars:limitToCompletedOrIncomplete:completed:includeDatesBefore:sortOrder:
+ predicateForCompletedRemindersWithDueDate:calendars:sortOrder:
+ predicateForRemindersWithTitle:listTitle:limitToCompletedOrIncomplete:completed:dueAfter:dueBefore:searchTerm:sortOrder:maxResults:
+ sharedCalendarInvitationsForEntityTypes:
+ calendarWithIdentifier:
+ remindersMatchingPredicate:
+ markEventAlerted:
+ markResourceChangeAlerted:error:
+ markCalendarAlerted:
+ markInviteReplyNotificationAlerted:
+ publicObjectWithPersistentObject:
+ removeResourceChanges:error:
+ removeInviteReplyNotifications:error:
+ _refreshDASource:isUserRequested:
+ refreshSourcesIfNecessary:
+ _registerObjectImmediate:
+ _addFetchedObjectWithID:
+ calendarWithID:
+ sourceWithIdentifier:
+ _registerObject:
+ _forgetRegisteredObjects
+ _reregisterObject:oldID:
+ fetchEventsMatchingPredicate:resultHandler:
+ alarmOccurrencesBetweenStartDate:endDate:inCalendars:completion:
+ defaultTimedAlarmOffset
+ defaultAllDayAlarmOffset
+ sequenceNumber
+ changesSinceSequenceNumber:
+ eventStoreIdentifier
+ localSource
+ ownedSources
+ saveSource:error:
+ removeSource:error:
+ calendars
+ hideCalendarsFromNotificationCenter:error:
+ calendarsForEntityType:
+ readWriteCalendarCountForEntityType:
+ readWriteCalendarsForEntityType:
+ saveCalendar:error:
+ removeCalendar:error:
+ deleteCalendar:forEntityType:error:
+ eventWithIdentifier:
+ _eventWithURI:checkValid:
+ eventForUID:occurrenceDate:
+ eventWithUniqueId:
+ saveEvent:span:error:
+ removeEvent:span:error:
+ setInvitationStatus:forEvent:error:
+ setInvitationStatus:forEvents:error:
+ importICS:intoCalendar:options:
+ copyCGColorForNewCalendar
+ defaultCalendarForNewEvents
+ setDefaultCalendarForNewEvents:
+ defaultCalendarForNewReminders
+ setDefaultCalendarForNewReminders:
+ saveReminder:error:
+ removeReminder:error:
+ reminderWithExternalURI:
+ calendarItemsWithExternalIdentifier:
+ insertNewReminder
+ countOfRemindersMatchingPredicate:
+ fetchRemindersMatchingPredicate:completion:
+ predicateForRemindersInCalendars:
+ predicateForIncompleteRemindersWithDueDateStarting:ending:calendars:
+ predicateForCompletedRemindersWithCompletionDateStarting:ending:calendars:
+ predicateForIncompleteRemindersWithDueDate:calendars:sortOrder:
+ predicateForIncompleteRemindersDueBeforeOrOnDueDate:calendars:sortOrder:
+ predicateForCompletedRemindersWithDueDateOrCompletionDate:calendars:sortOrder:
+ predicateForAllRemindersWithDueDate:calendars:
+ predicateForAllRemindersDueBeforeOrOnDueDate:calendars:
+ predicateForRemindersWithTitle:calendars:
+ predicateForCompletedRemindersWithCalendars:
+ predicateForRemindersWithSearchTerm:
+ predicateForRemindersWithTitle:listTitle:limitToCompletedOrIncomplete:completed:dueAfter:dueBefore:searchTerm:sortOrder:
+ fetchProperties:forReminders:
+ eventWithUUID:
+ closestCachedOccurrenceToDate:forEventUID:
+ doEvents:haveOccurrencesAfterDate:
+ calendarWithExternalURI:
+ insertNewEvent
+ insertNewExceptionDateWithDate:
+ occurrenceCacheOccurrencesAreBeingGenerated
+ occurrenceCacheGetOccurrencesForCalendars:onDay:
+ occurrenceCacheGetOccurrencesForCalendars:
+ scheduledTaskCacheFetchDaysAndTaskCounts
+ scheduledTaskCacheFetchTasksOnDay:
+ setShowDeclinedEvents:
+ markNotificationsAlertedAndSave:
+ unacknowledgedEventCount
+ notifiableEventCount
+ earliestExpiringNotifiableEventEndDateAfterDate:timeZone:
+ resourceChangesForEntityTypes:
+ removeResourceChange:error:
+ inviteReplyNotifications
+ removeInviteReplyNotification:error:
+ refreshSourcesIfNecessary
+ publicObjectWithObjectID:
+ _trackModifiedObject:
+ eventsMatchingPredicate:
+ enumerateEventsMatchingPredicate:usingBlock:
+ cancelFetchRequest:
+ alarmWithUUID:
+ alarmOccurrencesBetweenStartDate:endDate:completion:
+ locationBasedAlarmOccurrencesWithCompletion:
+ predicateForEventsWithStartDate:endDate:calendars:
+ predicateForEventsWithStartDate:endDate:calendars:loadDefaultProperties:
+ predicateForEventsWithStartDate:endDate:eventUUID:calendars:
+ predicateForNotifiableEvents
+ predicateForRecentNotifiableEvents
+ predicateForNotificationCenterVisibleEvents
+ predicateForUnacknowledgedEvents
+ predicateForUnalertedEvents
+ predicateForUpcomingEventsWithLimit:
+ predicateForMasterEventsInCalendars:
+ _protectedDataWillBecomeUnavailable
+ _protectedDataDidBecomeAvailable
+ setDefaultTimedAlarmOffset:
+ defaultTimedAlarm
+ setDefaultAllDayAlarmOffset:
+ defaultAllDayAlarm
+ cacheValidationStatusForEmail:status:
+ emailAddressValidationStatus:
+ getDataAccessLog
+ getCalDAVLog
+ moveDiagnosticsLogToCrashReporterFolder
+ setRegisteredObjects:
+ publicRegisteredObjects
+ setPublicRegisteredObjects:
+ _defaultCalendarForNewEvents
+ _defaultCalendarForNewReminders
+ database
+ setDatabase:
+ lastDatabaseNotificationTimestamp
+ setLastDatabaseNotificationTimestamp:
+ _calendars
+ set_calendars:
+ _sources
+ set_sources:
+ objectsPendingCommit
+ setObjectsPendingCommit:
+ calendarQueue
+ setCalendarQueue:
+ registeredQueue
+ setRegisteredQueue:
+ unsavedChangesQueue
+ setUnsavedChangesQueue:
+ dbChangedQueue
+ setDbChangedQueue:
+ _cachedValidatedEmails
+ set_cachedValidatedEmails:
+ release
+ dealloc
+ init
+ setTimeZone:
+ timeZone
+ reset
+ connection
+ flags
+ setFlags:
+ rollback
+ objectWithObjectID:
+ registeredObjects
+ deletedObjects
+ insertedObjects
+ updatedObjects
- colorForCalendar:
- _uicolorFromString:
- symbolicNameToUIColors
- colorNamesInRainbowOrder
- localizedStringForSymbolicColorName:
- defaultCalendarColorsInRainbowOrder
- stringForColor:
- setDeletedObjects:
- setInsertedObjects:
- setUpdatedObjects:
- initWithOptions:path:
- _requestAccessForEntityType:
- _accessStatusChanged
- requestAccessToEntityType:completion:
- daemonRestarted
- serverPort
- _unregisterObject:
- set_defaultCalendarForNewEvents:
- set_defaultCalendarForNewReminders:
- _validateObjectIDs:completion:
- isDataProtected
- _databaseChangedExternally
- registerFetchedObjectWithID:
- sources
- commit:
- _allCalendars
- _saveWithoutNotify
- registerFetchedObjectWithID:withDefaultLoadedProperties:inSet:
- _calendar:supportsEntityType:
- _calendarWithID:
- saveCalendar:commit:error:
- removeCalendar:commit:error:
- _addObjectToPendingCommits:
- _parseURI:expectedScheme:identifier:options:
- eventForUID:occurrenceDate:checkValid:
- saveEvent:span:commit:error:
- removeEvent:span:commit:error:
- _insertObject:
- _deleteObject:
- importICSData:intoCalendar:options:
- _performServerFunction:replyHandler:
- importICSData:intoCalendar:options:completion:
- saveReminder:commit:error:
- removeReminder:commit:error:
- calendarItemWithIdentifier:
- _calendarItemsMatchingPredicate:
- _predicateForRemindersWithDate:useAsCompletionDate:calendars:limitToCompletedOrIncomplete:completed:includeDatesBefore:sortOrder:
- predicateForCompletedRemindersWithDueDate:calendars:sortOrder:
- predicateForRemindersWithTitle:listTitle:limitToCompletedOrIncomplete:completed:dueAfter:dueBefore:searchTerm:sortOrder:maxResults:
- sharedCalendarInvitationsForEntityTypes:
- calendarWithIdentifier:
- remindersMatchingPredicate:
- markEventAlerted:
- markResourceChangeAlerted:error:
- markCalendarAlerted:
- markInviteReplyNotificationAlerted:
- publicObjectWithPersistentObject:
- removeResourceChanges:error:
- removeInviteReplyNotifications:error:
- _refreshDASource:isUserRequested:
- refreshSourcesIfNecessary:
- _registerObjectImmediate:
- _addFetchedObjectWithID:
- calendarWithID:
- sourceWithIdentifier:
- _registerObject:
- _forgetRegisteredObjects
- _reregisterObject:oldID:
- fetchEventsMatchingPredicate:resultHandler:
- alarmOccurrencesBetweenStartDate:endDate:inCalendars:completion:
- defaultTimedAlarmOffset
- defaultAllDayAlarmOffset
- sequenceNumber
- changesSinceSequenceNumber:
- eventStoreIdentifier
- localSource
- ownedSources
- saveSource:error:
- removeSource:error:
- calendars
- hideCalendarsFromNotificationCenter:error:
- calendarsForEntityType:
- readWriteCalendarCountForEntityType:
- readWriteCalendarsForEntityType:
- saveCalendar:error:
- removeCalendar:error:
- deleteCalendar:forEntityType:error:
- eventWithIdentifier:
- _eventWithURI:checkValid:
- eventForUID:occurrenceDate:
- eventWithUniqueId:
- saveEvent:span:error:
- removeEvent:span:error:
- setInvitationStatus:forEvent:error:
- setInvitationStatus:forEvents:error:
- importICS:intoCalendar:options:
- copyCGColorForNewCalendar
- defaultCalendarForNewEvents
- setDefaultCalendarForNewEvents:
- defaultCalendarForNewReminders
- setDefaultCalendarForNewReminders:
- saveReminder:error:
- removeReminder:error:
- reminderWithExternalURI:
- calendarItemsWithExternalIdentifier:
- insertNewReminder
- countOfRemindersMatchingPredicate:
- fetchRemindersMatchingPredicate:completion:
- predicateForRemindersInCalendars:
- predicateForIncompleteRemindersWithDueDateStarting:ending:calendars:
- predicateForCompletedRemindersWithCompletionDateStarting:ending:calendars:
- predicateForIncompleteRemindersWithDueDate:calendars:sortOrder:
- predicateForIncompleteRemindersDueBeforeOrOnDueDate:calendars:sortOrder:
- predicateForCompletedRemindersWithDueDateOrCompletionDate:calendars:sortOrder:
- predicateForAllRemindersWithDueDate:calendars:
- predicateForAllRemindersDueBeforeOrOnDueDate:calendars:
- predicateForRemindersWithTitle:calendars:
- predicateForCompletedRemindersWithCalendars:
- predicateForRemindersWithSearchTerm:
- predicateForRemindersWithTitle:listTitle:limitToCompletedOrIncomplete:completed:dueAfter:dueBefore:searchTerm:sortOrder:
- fetchProperties:forReminders:
- eventWithUUID:
- closestCachedOccurrenceToDate:forEventUID:
- doEvents:haveOccurrencesAfterDate:
- calendarWithExternalURI:
- insertNewEvent
- insertNewExceptionDateWithDate:
- occurrenceCacheOccurrencesAreBeingGenerated
- occurrenceCacheGetOccurrencesForCalendars:onDay:
- occurrenceCacheGetOccurrencesForCalendars:
- scheduledTaskCacheFetchDaysAndTaskCounts
- scheduledTaskCacheFetchTasksOnDay:
- setShowDeclinedEvents:
- markNotificationsAlertedAndSave:
- unacknowledgedEventCount
- notifiableEventCount
- earliestExpiringNotifiableEventEndDateAfterDate:timeZone:
- resourceChangesForEntityTypes:
- removeResourceChange:error:
- inviteReplyNotifications
- removeInviteReplyNotification:error:
- refreshSourcesIfNecessary
- publicObjectWithObjectID:
- _trackModifiedObject:
- eventsMatchingPredicate:
- enumerateEventsMatchingPredicate:usingBlock:
- cancelFetchRequest:
- alarmWithUUID:
- alarmOccurrencesBetweenStartDate:endDate:completion:
- locationBasedAlarmOccurrencesWithCompletion:
- predicateForEventsWithStartDate:endDate:calendars:
- predicateForEventsWithStartDate:endDate:calendars:loadDefaultProperties:
- predicateForEventsWithStartDate:endDate:eventUUID:calendars:
- predicateForNotifiableEvents
- predicateForRecentNotifiableEvents
- predicateForNotificationCenterVisibleEvents
- predicateForUnacknowledgedEvents
- predicateForUnalertedEvents
- predicateForUpcomingEventsWithLimit:
- predicateForMasterEventsInCalendars:
- _protectedDataWillBecomeUnavailable
- _protectedDataDidBecomeAvailable
- setDefaultTimedAlarmOffset:
- defaultTimedAlarm
- setDefaultAllDayAlarmOffset:
- defaultAllDayAlarm
- cacheValidationStatusForEmail:status:
- emailAddressValidationStatus:
- getDataAccessLog
- getCalDAVLog
- moveDiagnosticsLogToCrashReporterFolder
- setRegisteredObjects:
- publicRegisteredObjects
- setPublicRegisteredObjects:
- _defaultCalendarForNewEvents
- _defaultCalendarForNewReminders
- database
- setDatabase:
- lastDatabaseNotificationTimestamp
- setLastDatabaseNotificationTimestamp:
- _calendars
- set_calendars:
- _sources
- set_sources:
- objectsPendingCommit
- setObjectsPendingCommit:
- calendarQueue
- setCalendarQueue:
- registeredQueue
- setRegisteredQueue:
- unsavedChangesQueue
- setUnsavedChangesQueue:
- dbChangedQueue
- setDbChangedQueue:
- _cachedValidatedEmails
- set_cachedValidatedEmails:
- release
- dealloc
- init
- setTimeZone:
- timeZone
- reset
- connection
- flags
- setFlags:
- rollback
- objectWithObjectID:
- registeredObjects
- deletedObjects
- insertedObjects
- updatedObjects
@end
