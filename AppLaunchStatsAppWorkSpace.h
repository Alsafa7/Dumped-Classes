@interface AppLaunchStatsAppWorkSpace : NSObject
{
	id wsQueue;
	id saveAndRestoreContext;
	id callback;
	id appWorkSpace;
	id uninstalledApps;
}

+ applicationsDidInstall:
+ applicationsDidUninstall:
+ save:
+ logAll:withMsg:withLevel:
+ logLight:withMsg:withLevel:
+ saveContext:
+ restore:
+ deleteExpiredApps
+ isInUninstalledList:
+ init:
+ .cxx_destruct
- applicationsDidInstall:
- applicationsDidUninstall:
- save:
- logAll:withMsg:withLevel:
- logLight:withMsg:withLevel:
- saveContext:
- restore:
- deleteExpiredApps
- isInUninstalledList:
- init:
- .cxx_destruct
@end
