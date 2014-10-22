@interface EKSourceConstraints : NSObject
{
	int _maxAlarmsAllowed;
	int _maxRecurrencesAllowed;
	struct _flags;
}

+ supportsIncomingInvitations
+ supportsInvitationModifications
+ supportsOutgoingInvitations
+ allowsTasks
+ allowsEvents
+ allowsCalendarAddDeleteModify
+ recurrenceSeriesMustIncludeMoreThanFirstOccurrence
+ supportsStructuredLocations
+ supportsReminderActions
+ supportsReminderLocations
+ supportsAlarmProximity
+ requiresMSFormattedUID
+ statusesAreAccurate
+ requiresOutgoingInvitationsInDefaultCalendar
+ deliverySourceOrExternalIDRequiredForResponse
+ proposedStatusRequiredForResponse
+ declinedStatusChangeRequiresNoPendingStatus
+ eventDurationConstrainedToRecurrenceInterval
+ occurrencesMustOccurOnSeparateDays
+ futureStartDateLimitedToOccurrenceCacheBounds
+ eventAvalabilityLimited
+ canSetAvailability
+ shouldCancelDeletedEvents
+ shouldDeclineDeletedInvitations
+ supportsURLField
+ supportsAlarmTriggerDates
+ supportsAlarmTriggerIntervals
+ supportsAlarmsTriggeringAfterStartDate
+ alarmTriggerIntervalConstrainedToRecurrenceInterval
+ supportsSharedCalendars
+ maxAlarmsAllowed
+ maxRecurrencesAllowed
+ supportsRecurrencesOnDetachedEvents
+ recurrencesShouldPinToMonthDays
+ mustAcknowledgeMasterEvent
+ supportsResponseComments
+ organizerCanSeeAttendeeStatuses
+ inviteesCanSeeAttendeeStatuses
+ requiresAttendeeSearchInSingleAccount
+ supportsAllDayDueDates
+ snoozeAlarmRequiresDetach
+ isFacebook
+ initWithMaxAlarms:maxRecurrences:constraintFlags:
+ setSupportsAlarmTriggerIntervals:
+ setSupportsAlarmTriggerDates:
+ setSupportsAlarmsTriggeringAfterStartDate:
+ setSnoozeAlarmRequiresDetach:
+ setOrganizerCanSeeAttendeeStatuses:
+ setInviteesCanSeeAttendeeStatuses:
+ setStatusesAreAccurate:
+ setSupportsIncomingInvitations:
+ setSupportsOutgoingInvitations:
+ setRequiresOutgoingInvitationsInDefaultCalendar:
+ setSupportsInvitationModifications:
+ setSupportsResponseComments:
+ setDeliverySourceOrExternalIDRequiredForResponse:
+ setProposedStatusRequiredForResponse:
+ setDeclinedStatusChangeRequiresNoPendingStatus:
+ setEventDurationConstrainedToRecurrenceInterval:
+ setAlarmTriggerIntervalConstrainedToRecurrenceInterval:
+ setOccurrencesMustOccurOnSeparateDays:
+ setFutureStartDateLimitedToOccurrenceCacheBounds:
+ setSupportsRecurrencesOnDetachedEvents:
+ setRecurrencesShouldPinToMonthDays:
+ setRequiresAttendeeSearchInSingleAccount:
+ setMustAcknowledgeMasterEvent:
+ setCanSetAvailability:
+ setEventAvalabilityLimited:
+ setRequiresMSFormattedUID:
+ setShouldCancelDeletedEvents:
+ setShouldDeclineDeletedInvitations:
+ setSupportsStructuredLocations:
+ setSupportsReminderActions:
+ setSupportsReminderLocations:
+ setSupportsAlarmProximity:
+ setAllowsCalendarAddDeleteModify:
+ setAllowsTasks:
+ setAllowsEvents:
+ setSupportsURLField:
+ setSupportsAllDayDueDates:
+ setSupportsSharedCalendars:
+ setIsFacebook:
+ setRecurrenceSeriesMustIncludeMoreThanFirstOccurrence:
+ setMaxAlarmsAllowed:
+ setMaxRecurrencesAllowed:
+ init
+ flags
+ setFlags:
- supportsIncomingInvitations
- supportsInvitationModifications
- supportsOutgoingInvitations
- allowsTasks
- allowsEvents
- allowsCalendarAddDeleteModify
- recurrenceSeriesMustIncludeMoreThanFirstOccurrence
- supportsStructuredLocations
- supportsReminderActions
- supportsReminderLocations
- supportsAlarmProximity
- requiresMSFormattedUID
- statusesAreAccurate
- requiresOutgoingInvitationsInDefaultCalendar
- deliverySourceOrExternalIDRequiredForResponse
- proposedStatusRequiredForResponse
- declinedStatusChangeRequiresNoPendingStatus
- eventDurationConstrainedToRecurrenceInterval
- occurrencesMustOccurOnSeparateDays
- futureStartDateLimitedToOccurrenceCacheBounds
- eventAvalabilityLimited
- canSetAvailability
- shouldCancelDeletedEvents
- shouldDeclineDeletedInvitations
- supportsURLField
- supportsAlarmTriggerDates
- supportsAlarmTriggerIntervals
- supportsAlarmsTriggeringAfterStartDate
- alarmTriggerIntervalConstrainedToRecurrenceInterval
- supportsSharedCalendars
- maxAlarmsAllowed
- maxRecurrencesAllowed
- supportsRecurrencesOnDetachedEvents
- recurrencesShouldPinToMonthDays
- mustAcknowledgeMasterEvent
- supportsResponseComments
- organizerCanSeeAttendeeStatuses
- inviteesCanSeeAttendeeStatuses
- requiresAttendeeSearchInSingleAccount
- supportsAllDayDueDates
- snoozeAlarmRequiresDetach
- isFacebook
- initWithMaxAlarms:maxRecurrences:constraintFlags:
- setSupportsAlarmTriggerIntervals:
- setSupportsAlarmTriggerDates:
- setSupportsAlarmsTriggeringAfterStartDate:
- setSnoozeAlarmRequiresDetach:
- setOrganizerCanSeeAttendeeStatuses:
- setInviteesCanSeeAttendeeStatuses:
- setStatusesAreAccurate:
- setSupportsIncomingInvitations:
- setSupportsOutgoingInvitations:
- setRequiresOutgoingInvitationsInDefaultCalendar:
- setSupportsInvitationModifications:
- setSupportsResponseComments:
- setDeliverySourceOrExternalIDRequiredForResponse:
- setProposedStatusRequiredForResponse:
- setDeclinedStatusChangeRequiresNoPendingStatus:
- setEventDurationConstrainedToRecurrenceInterval:
- setAlarmTriggerIntervalConstrainedToRecurrenceInterval:
- setOccurrencesMustOccurOnSeparateDays:
- setFutureStartDateLimitedToOccurrenceCacheBounds:
- setSupportsRecurrencesOnDetachedEvents:
- setRecurrencesShouldPinToMonthDays:
- setRequiresAttendeeSearchInSingleAccount:
- setMustAcknowledgeMasterEvent:
- setCanSetAvailability:
- setEventAvalabilityLimited:
- setRequiresMSFormattedUID:
- setShouldCancelDeletedEvents:
- setShouldDeclineDeletedInvitations:
- setSupportsStructuredLocations:
- setSupportsReminderActions:
- setSupportsReminderLocations:
- setSupportsAlarmProximity:
- setAllowsCalendarAddDeleteModify:
- setAllowsTasks:
- setAllowsEvents:
- setSupportsURLField:
- setSupportsAllDayDueDates:
- setSupportsSharedCalendars:
- setIsFacebook:
- setRecurrenceSeriesMustIncludeMoreThanFirstOccurrence:
- setMaxAlarmsAllowed:
- setMaxRecurrencesAllowed:
- init
- flags
- setFlags:
@end
