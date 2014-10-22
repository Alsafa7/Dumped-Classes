@interface BBBehaviorOverrideEffectiveInterval : NSObject
{
	id _startComponents;
	id _endComponents;
	id _calendarIdentifier;
	id _calendar;
	usigned long long _repeatInterval;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ description
+ setRepeatInterval:
+ copyWithZone:
+ calendarIdentifier
+ repeatInterval
+ setCalendar:
+ calendar
+ setStartComponents:
+ setEndComponents:
+ setCalendarIdentifier:
+ _configuredCalendarWithIdentifier:
+ startComponents
+ endComponents
+ _synchronizeTimeZone
+ containsDate:
+ initWithStartComponents:endComponents:calendarIdentifier:repeatInterval:
+ nextTransitionDateAfterDate:
- dealloc
- initWithCoder:
- encodeWithCoder:
- description
- setRepeatInterval:
- copyWithZone:
- calendarIdentifier
- repeatInterval
- setCalendar:
- calendar
- setStartComponents:
- setEndComponents:
- setCalendarIdentifier:
- _configuredCalendarWithIdentifier:
- startComponents
- endComponents
- _synchronizeTimeZone
- containsDate:
- initWithStartComponents:endComponents:calendarIdentifier:repeatInterval:
- nextTransitionDateAfterDate:
@end
