@interface AppLaunchStatsWhiteListManager : NSObject
{
	id aplsWLMQueue;
	id saveAndRestoreContext;
	id wlmAppWorkSpace;
	id defaultsWriteWhiteList;
	id launchServiceWhiteListFetch;
	id launchServiceWhiteListPush;
	BOOL enableWhiteListCheck;
}

+ applicationsDidInstall:
+ init
+ initSetup
+ addToMultiTaskingQueue:
+ isAppInList:withBundleID:
+ logAll:withMsg:withLevel:
+ logLight:withMsg:withLevel:
+ isWhiteListed:withFetch:
+ reloadConfiguration
+ saveContext:
+ enableWhiteListCheck
+ setEnableWhiteListCheck:
+ .cxx_destruct
- applicationsDidInstall:
- init
- initSetup
- addToMultiTaskingQueue:
- isAppInList:withBundleID:
- logAll:withMsg:withLevel:
- logLight:withMsg:withLevel:
- isWhiteListed:withFetch:
- reloadConfiguration
- saveContext:
- enableWhiteListCheck
- setEnableWhiteListCheck:
- .cxx_destruct
@end
