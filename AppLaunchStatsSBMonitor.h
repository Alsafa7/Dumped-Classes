@interface AppLaunchStatsSBMonitor : NSObject
{
	id sbMonitorQueue;
	id saveAndRestoreContext;
	id callback;
	id aplsState;
	id appStateMonitor;
	id blackListed;
	id recentList;
	id trendList;
	id foreGroundApp;
	BOOL _enableAppSwitcherCheck;
	BOOL _enableWasRecentlyLaunched;
}

+ save:
+ logAll:withMsg:withLevel:
+ logLight:withMsg:withLevel:
+ reloadConfiguration
+ saveContext:
+ restore:
+ init:withCallback:
+ foreGroundApp
+ isForeGroundApp:
+ enableAppSwitcherCheck
+ isRemovedFromAppSwitcher:
+ wasRecentlyLaunched:
+ enableWasRecentlyLaunched
+ clearTrendingCache
+ initListenerForAppStateChange
+ appSwitchedObserver:
+ addToBlackList:
+ updateFGAppID:
+ removeFromBlackList:
+ appSuspendedTriggerExternalEvent:
+ .cxx_destruct
- save:
- logAll:withMsg:withLevel:
- logLight:withMsg:withLevel:
- reloadConfiguration
- saveContext:
- restore:
- init:withCallback:
- foreGroundApp
- isForeGroundApp:
- enableAppSwitcherCheck
- isRemovedFromAppSwitcher:
- wasRecentlyLaunched:
- enableWasRecentlyLaunched
- clearTrendingCache
- initListenerForAppStateChange
- appSwitchedObserver:
- addToBlackList:
- updateFGAppID:
- removeFromBlackList:
- appSuspendedTriggerExternalEvent:
- .cxx_destruct
@end
