@interface EKAlarm : EKObject
{
	id _locationRelation;
	id _owner;
}

+ localizedAllDayDescription
+ longLocalizedAllDayDescription
+ longLocalizedDescription
+ _localizedDescription:forEvent:isAllDay:
+ localizedDescriptionForReminder
+ localizedDescription
+ validate:
+ lazyLoadRelationForKey:
+ setAcknowledgedDate:
+ setRelativeOffset:
+ setOriginalAlarm:
+ isAbsolute
+ relativeOffset
+ structuredLocation
+ rebase
+ initWithAbsoluteDate:
+ initWithRelativeOffset:
+ setAbsoluteDate:
+ absoluteDate
+ proximity
+ _locationRelation
+ _originalAlarmRelation
+ _snoozedAlarmsRelation
+ originalAlarm
+ setStructuredLocation:
+ setProximity:
+ acknowledgedDate
+ ownerUUID
+ isDefaultAlarm
+ setDefaultAlarm:
+ snoozedAlarms
+ setSnoozedAlarms:
+ addSnoozedAlarm:
+ removeSnoozedAlarm:
+ isSnoozedAlarm
+ locationRelation
+ setLocationRelation:
+ dealloc
+ init
+ description
+ copyWithZone:
+ UUID
+ externalID
+ owner
+ setOwner:
- localizedAllDayDescription
- longLocalizedAllDayDescription
- longLocalizedDescription
- _localizedDescription:forEvent:isAllDay:
- localizedDescriptionForReminder
- localizedDescription
- validate:
- lazyLoadRelationForKey:
- setAcknowledgedDate:
- setRelativeOffset:
- setOriginalAlarm:
- isAbsolute
- relativeOffset
- structuredLocation
- rebase
- initWithAbsoluteDate:
- initWithRelativeOffset:
- setAbsoluteDate:
- absoluteDate
- proximity
- _locationRelation
- _originalAlarmRelation
- _snoozedAlarmsRelation
- originalAlarm
- setStructuredLocation:
- setProximity:
- acknowledgedDate
- ownerUUID
- isDefaultAlarm
- setDefaultAlarm:
- snoozedAlarms
- setSnoozedAlarms:
- addSnoozedAlarm:
- removeSnoozedAlarm:
- isSnoozedAlarm
- locationRelation
- setLocationRelation:
- dealloc
- init
- description
- copyWithZone:
- UUID
- externalID
- owner
- setOwner:
@end
