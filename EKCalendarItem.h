@interface EKCalendarItem : EKObject
{
	BOOL _haveCachedActionsState;
	int _actionsStateCachedValue;
	id _selfAttendee;
	id _sharedItemCreatedByEmailAddress;
}

+ isAllDay
+ validate:
+ updatePersistentObject
+ externalModificationTag
+ setExternalModificationTag:
+ externalURI
+ lazyLoadRelationForKey:
+ setAllDay:
+ selfAttendee
+ originalItem
+ attendees
+ organizer
+ hasRecurrenceRules
+ recurrenceRules
+ setRecurrenceRules:
+ isExternallyOrganizedInvitation
+ canMoveToCalendar:fromCalendar:error:
+ isSelfOrganizedInvitation
+ allowsCalendarModifications
+ requiresDetach
+ allowsAlarmModifications
+ findOriginalAlarmStartingWith:
+ addAlarm:
+ isAlarmAcknowledgedPropertyDirty
+ hasAttendees
+ allowsAttendeeModifications
+ allowsRecurrenceModifications
+ moveToCalendar:
+ removeAllSnoozedAlarms
+ removeAcknowledgedSnoozedAlarms
+ updatePersistentObjectSkippingProperties:
+ alarms
+ allAlarms
+ removeRecurrenceRule:
+ structuredLocation
+ rebase
+ setOrganizer:
+ addAttendee:
+ setSelfAttendee:
+ addRecurrenceRule:
+ removeAlarm:
+ snoozeAlarm:withTimeIntervalFromNow:
+ _locationRelation
+ setStructuredLocation:
+ _persistentItem
+ calendarItemIdentifier
+ notes
+ hasNotes
+ isOrganizedBySharedCalendarOwner
+ isSelfOrganized
+ _alarmsRelation
+ _recurrencesRelation
+ _attendeesRelation
+ _selfAttendeeRelation
+ selfParticipantStatus
+ _organizerRelation
+ sharedItemCreatedByFirstName
+ sharedItemCreatedByLastName
+ sharedItemModifiedByFirstName
+ sharedItemModifiedByLastName
+ _attachmentsRelation
+ _moveToCalendarInternal:
+ calendarItemExternalIdentifier
+ setNotes:
+ setLastModifiedDate:
+ isDefaultAlarmRemoved
+ setDefaultAlarmRemoved:
+ actionsState
+ hasAlarms
+ setAlarms:
+ setAllAlarms:
+ snoozeAlarm:withLocation:proximity:
+ setAttendees:
+ removeAttendee:
+ sharedItemCreatedByDisplayName
+ setSharedItemCreatedByDisplayName:
+ sharedItemCreatedByEmailAddress
+ setSharedItemCreatedByAddress:
+ setSharedItemCreatedByFirstName:
+ setSharedItemCreatedByLastName:
+ sharedItemCreatedDate
+ setSharedItemCreatedDate:
+ sharedItemCreatedTimeZone
+ setSharedItemCreatedTimeZone:
+ sharedItemModifiedByDisplayName
+ setSharedItemModifiedByDisplayName:
+ sharedItemModifiedByEmailAddress
+ setSharedItemModifiedByEmailAddress:
+ setSharedItemModifiedByFirstName:
+ setSharedItemModifiedByLastName:
+ sharedItemModifiedDate
+ setSharedItemModifiedDate:
+ sharedItemModifiedTimeZone
+ setSharedItemModifiedTimeZone:
+ setSharedItemCreatedByEmailAddress:
+ setTitle:
+ description
+ action
+ setTimeZone:
+ isEditable
+ UUID
+ title
+ setAction:
+ URL
+ location
+ setURL:
+ setCalendar:
+ timeZone
+ calendar
+ priority
+ setPriority:
+ attachments
+ setExternalID:
+ externalID
+ isFloating
+ creationDate
+ setCreationDate:
+ lastModifiedDate
+ setLocation:
- isAllDay
- validate:
- updatePersistentObject
- externalModificationTag
- setExternalModificationTag:
- externalURI
- lazyLoadRelationForKey:
- setAllDay:
- selfAttendee
- originalItem
- attendees
- organizer
- hasRecurrenceRules
- recurrenceRules
- setRecurrenceRules:
- isExternallyOrganizedInvitation
- canMoveToCalendar:fromCalendar:error:
- isSelfOrganizedInvitation
- allowsCalendarModifications
- requiresDetach
- allowsAlarmModifications
- findOriginalAlarmStartingWith:
- addAlarm:
- isAlarmAcknowledgedPropertyDirty
- hasAttendees
- allowsAttendeeModifications
- allowsRecurrenceModifications
- moveToCalendar:
- removeAllSnoozedAlarms
- removeAcknowledgedSnoozedAlarms
- updatePersistentObjectSkippingProperties:
- alarms
- allAlarms
- removeRecurrenceRule:
- structuredLocation
- rebase
- setOrganizer:
- addAttendee:
- setSelfAttendee:
- addRecurrenceRule:
- removeAlarm:
- snoozeAlarm:withTimeIntervalFromNow:
- _locationRelation
- setStructuredLocation:
- _persistentItem
- calendarItemIdentifier
- notes
- hasNotes
- isOrganizedBySharedCalendarOwner
- isSelfOrganized
- _alarmsRelation
- _recurrencesRelation
- _attendeesRelation
- _selfAttendeeRelation
- selfParticipantStatus
- _organizerRelation
- sharedItemCreatedByFirstName
- sharedItemCreatedByLastName
- sharedItemModifiedByFirstName
- sharedItemModifiedByLastName
- _attachmentsRelation
- _moveToCalendarInternal:
- calendarItemExternalIdentifier
- setNotes:
- setLastModifiedDate:
- isDefaultAlarmRemoved
- setDefaultAlarmRemoved:
- actionsState
- hasAlarms
- setAlarms:
- setAllAlarms:
- snoozeAlarm:withLocation:proximity:
- setAttendees:
- removeAttendee:
- sharedItemCreatedByDisplayName
- setSharedItemCreatedByDisplayName:
- sharedItemCreatedByEmailAddress
- setSharedItemCreatedByAddress:
- setSharedItemCreatedByFirstName:
- setSharedItemCreatedByLastName:
- sharedItemCreatedDate
- setSharedItemCreatedDate:
- sharedItemCreatedTimeZone
- setSharedItemCreatedTimeZone:
- sharedItemModifiedByDisplayName
- setSharedItemModifiedByDisplayName:
- sharedItemModifiedByEmailAddress
- setSharedItemModifiedByEmailAddress:
- setSharedItemModifiedByFirstName:
- setSharedItemModifiedByLastName:
- sharedItemModifiedDate
- setSharedItemModifiedDate:
- sharedItemModifiedTimeZone
- setSharedItemModifiedTimeZone:
- setSharedItemCreatedByEmailAddress:
- setTitle:
- description
- action
- setTimeZone:
- isEditable
- UUID
- title
- setAction:
- URL
- location
- setURL:
- setCalendar:
- timeZone
- calendar
- priority
- setPriority:
- attachments
- setExternalID:
- externalID
- isFloating
- creationDate
- setCreationDate:
- lastModifiedDate
- setLocation:
@end
