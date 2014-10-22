@interface TodayInvalidationTimerWrapper : NSObject
{
	id _tzSupportDayRolloverTimer;
}

+ todayChangedAfterInvalidation
+ _setupTimeZoneTimer
+ _killTimeZoneTimer
+ invalidateTodayAndNotifyIfChanged
+ dealloc
+ init
+ .cxx_destruct
- todayChangedAfterInvalidation
- _setupTimeZoneTimer
- _killTimeZoneTimer
- invalidateTodayAndNotifyIfChanged
- dealloc
- init
- .cxx_destruct
@end
