@interface EKPersistentEvent : EKPersistentCalendarItem
{
	struct _cachedDurationUnits;
}

+ validate:
+ invitationStatus
+ setInvitationStatus:
+ eventIdentifier
+ exportToICS
+ durationUnits
+ allowsParticipationStatusModifications
+ modifiedProperties
+ setModifiedProperties:
+ setAvailability:
+ setNeedsOccurrenceCacheUpdate:
+ participationStatus
+ birthdayID
+ organizer
+ invitationChangedProperties
+ responseMustApplyToAll
+ pendingParticipationStatus
+ setParticipationStatus:
+ clearExceptionDatesAndUpdateDetachedOriginalDates
+ filterExceptionDates
+ originalStartDate
+ deleteFromOccurrenceDateOnward:
+ detachWithStartDate:newStartDate:future:
+ setOriginalStartDate:
+ needsOccurrenceCacheUpdate
+ availability
+ responseComment
+ setResponseComment:
+ primitiveValueChangedForKey:
+ _invalidateCachedDurationUnits
+ _areDurationUnitsCached
+ hasValidEventAction
+ isInvitation
+ _hasExternalIDOrDeliverySource
+ _adjustForNewCalendar
+ privacyLevel
+ setPrivacyLevel:
+ committedStartDate
+ isMeeting
+ birthdayId
+ setActions:
+ addAction:
+ removeAction:
+ entityType
+ dealloc
+ description
+ duration
+ isEditable
+ copyWithZone:
+ URL
+ setURL:
+ initCommon
+ status
+ setStatus:
+ actions
+ refresh
+ isFloating
+ endDate
+ setEndDate:
- validate:
- invitationStatus
- setInvitationStatus:
- eventIdentifier
- exportToICS
- durationUnits
- allowsParticipationStatusModifications
- modifiedProperties
- setModifiedProperties:
- setAvailability:
- setNeedsOccurrenceCacheUpdate:
- participationStatus
- birthdayID
- organizer
- invitationChangedProperties
- responseMustApplyToAll
- pendingParticipationStatus
- setParticipationStatus:
- clearExceptionDatesAndUpdateDetachedOriginalDates
- filterExceptionDates
- originalStartDate
- deleteFromOccurrenceDateOnward:
- detachWithStartDate:newStartDate:future:
- setOriginalStartDate:
- needsOccurrenceCacheUpdate
- availability
- responseComment
- setResponseComment:
- primitiveValueChangedForKey:
- _invalidateCachedDurationUnits
- _areDurationUnitsCached
- hasValidEventAction
- isInvitation
- _hasExternalIDOrDeliverySource
- _adjustForNewCalendar
- privacyLevel
- setPrivacyLevel:
- committedStartDate
- isMeeting
- birthdayId
- setActions:
- addAction:
- removeAction:
- entityType
- dealloc
- description
- duration
- isEditable
- copyWithZone:
- URL
- setURL:
- initCommon
- status
- setStatus:
- actions
- refresh
- isFloating
- endDate
- setEndDate:
@end
