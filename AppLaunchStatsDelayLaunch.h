@interface AppLaunchStatsDelayLaunch : NSObject
{
	id aplsDelayLaunchQueue;
	id saveAndRestoreContext;
	id delayLaunchList;
	id delayLaunchTimeInterval;
}

+ init
+ save:
+ logAll:withMsg:withLevel:
+ logLight:withMsg:withLevel:
+ saveContext:
+ restore:
+ delayLaunch:with:
+ resetDelayLaunch:
+ shouldDelayLaunch:forTrending:
+ .cxx_destruct
- init
- save:
- logAll:withMsg:withLevel:
- logLight:withMsg:withLevel:
- saveContext:
- restore:
- delayLaunch:with:
- resetDelayLaunch:
- shouldDelayLaunch:forTrending:
- .cxx_destruct
@end
