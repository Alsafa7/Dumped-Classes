@interface DayForecast : NSObject
{
	id _high;
	id _low;
	usigned long long _icon;
	usigned long long _dayOfWeek;
	usigned long long _dayNumber;
}

+ dayOfWeek
+ icon
+ dealloc
+ description
+ setIcon:
+ setDayOfWeek:
+ high
+ setHigh:
+ low
+ setLow:
+ dayNumber
+ compareDayNumberToDayForecast:
+ setDayNumber:
- dayOfWeek
- icon
- dealloc
- description
- setIcon:
- setDayOfWeek:
- high
- setHigh:
- low
- setLow:
- dayNumber
- compareDayNumberToDayForecast:
- setDayNumber:
@end
