@interface SBFLockScreenSimpleDateFormatter : NSObject
{
	id _timeZone;
}

+ dealloc
+ setTimeZone:
+ timeZone
+ formatDateAsTimeNoAMPM:
+ formatDateAsDayOfWeekMonthDayStyle:
+ resetFormattersIfNecessary
- dealloc
- setTimeZone:
- timeZone
- formatDateAsTimeNoAMPM:
- formatDateAsDayOfWeekMonthDayStyle:
- resetFormattersIfNecessary
@end
