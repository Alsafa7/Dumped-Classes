@interface LSInstallProgressDelegate : NSObject
{
	id _observers;
	id _progresses;
	id _orderedInstalls;
	id _installIndexes;
	id _inactiveInstalls;
	id installsStartedTimer;
	id installsUpdatedTimer;
	id installsFinishedTimer;
	id appsUninstalledTimer;
	id _installControlsQueue;
	BOOL _usingNetwork;
}

+ addObserver:withUUID:
+ removeObserverWithUUID:
+ installationEndedForApplication:
+ sendUninstalledNotificationForApps:
+ placeholderInstalledForApp:
+ sendIconUpdatedNotificationForApp:
+ sendInstalledNotificationForApps:
+ sendChangeNotificationForApp:
+ createInstallProgressForApplication:withPhase:andPublishingString:
+ installationFailedForApplication:reply:
+ sendNetworkUsageChangedNotification
+ restoreInactiveInstalls
+ parentProgressForApplication:andPhase:isActive:
+ rebuildInstallIndexes
+ sendAppControlsNotificationForApp:withName:
+ handleCancelInstallationForApp:
+ dealloc
+ init
+ observeValueForKeyPath:ofObject:change:context:
+ listener:shouldAcceptNewConnection:
- addObserver:withUUID:
- removeObserverWithUUID:
- installationEndedForApplication:
- sendUninstalledNotificationForApps:
- placeholderInstalledForApp:
- sendIconUpdatedNotificationForApp:
- sendInstalledNotificationForApps:
- sendChangeNotificationForApp:
- createInstallProgressForApplication:withPhase:andPublishingString:
- installationFailedForApplication:reply:
- sendNetworkUsageChangedNotification
- restoreInactiveInstalls
- parentProgressForApplication:andPhase:isActive:
- rebuildInstallIndexes
- sendAppControlsNotificationForApp:withName:
- handleCancelInstallationForApp:
- dealloc
- init
- observeValueForKeyPath:ofObject:change:context:
- listener:shouldAcceptNewConnection:
@end
