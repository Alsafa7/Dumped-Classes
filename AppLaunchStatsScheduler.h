@interface AppLaunchStatsScheduler : NSObject
{
	BOOL usefulDate;
	id theCallback;
	id aplsState;
	long long timeZoneSecondsFromGMT;
	id fireWakeupDate;
	id startDate;
	id aplsRunloop;
	id pcpTimer;
}

+ timerFired:
+ save:
+ logAll:withMsg:withLevel:
+ logLight:withMsg:withLevel:
+ restore:
+ checkTimeZone
+ programTimer
+ init:withRunLoop:withCallback:
+ generateFireDates
+ .cxx_destruct
- timerFired:
- save:
- logAll:withMsg:withLevel:
- logLight:withMsg:withLevel:
- restore:
- checkTimeZone
- programTimer
- init:withRunLoop:withCallback:
- generateFireDates
- .cxx_destruct
@end
