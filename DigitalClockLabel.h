@interface DigitalClockLabel : ShrinkableDateLabel
{
	id _calendar;
	id _baseDate;
	long long _hour;
	long long _minute;
}

+ initWithFrame:
+ dealloc
+ resetFontSizes
+ significantTimeChange:
+ refreshUI
+ forceSetHour:minute:
+ setHour:minute:
- initWithFrame:
- dealloc
- resetFontSizes
- significantTimeChange:
- refreshUI
- forceSetHour:minute:
- setHour:minute:
@end
