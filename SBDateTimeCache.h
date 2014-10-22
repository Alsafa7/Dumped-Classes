@interface SBDateTimeCache : NSObject
{
	double _yesterday;
	double _today;
	double _tomorrow;
	double _2daysFromNow;
	double _6daysAgo;
	double _prevWeek;
	double _nextWeek;
	double _lastAttemptedResetTime;
	double _lastSuccessfulResetTime;
}

+ isTomorrow:
+ isWithinNextWeek:
+ isYesterday:
+ isWithinPrevWeek:includeToday:
+ isToday:
+ _resetAndConfigure
+ _resetAndConfigureIfNecessary
+ _isToday:
+ today
+ tomorrow
+ yesterday
+ prevWeek
+ nextWeek
+ isWithinPrevWeek:
+ dealloc
+ init
+ description
- isTomorrow:
- isWithinNextWeek:
- isYesterday:
- isWithinPrevWeek:includeToday:
- isToday:
- _resetAndConfigure
- _resetAndConfigureIfNecessary
- _isToday:
- today
- tomorrow
- yesterday
- prevWeek
- nextWeek
- isWithinPrevWeek:
- dealloc
- init
- description
@end
