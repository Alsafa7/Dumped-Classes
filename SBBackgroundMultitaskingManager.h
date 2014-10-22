@interface SBBackgroundMultitaskingManager : NSObject
{
	id _appToBackgroundTasks;
	id _backgroundFetchTaskValueToWatchdoggableCompletion;
	id _queue;
	id _pendingWorkStore;
	id _appLaunchStats;
	double _watchdogTimeout;
}

+ nextSequenceNumber
+ application:didSetMinimumFetchInterval:
+ _appStateDidChange:
+ handlePushNotificationFromApplication:userInfo:priority:completion:
+ workDidChange:
+ _opportunisticallyUpdateApplications:trigger:
+ _performPendingWorkForBundleID:
+ _appFinishedBackgroundUpdating:
+ _startBackgroundFetchForNotification:
+ queue_appFinishedBackgroundUpdating:userInfo:
+ queue_startBackgroundFetchTaskForApplication:trigger:sequenceNumber:withWatchdoggableCompletion:
+ _invalidateBackgroundTasksForApplication:
+ queue_bearTrap_AppWasSuspended:
+ _watchdogCompletionForBackgroundFetchTaskValue:
+ queue_fireWatchdoggableCompletionForBackgroundFetchTaskValue:
+ queue_invalidateBackgroundTasksForApplication:
+ queue_backgroundTaskFinished:forApplication:
+ _backgroundTaskFinished:forApplication:
+ watchdogTimeout
+ _startBackgroundFetchTaskForApplication:trigger:sequenceNumber:withWatchdoggableCompletion:
+ _launchAppForUpdating:trigger:pushNotificationUserInfo:withWatchdoggableCompletion:
+ init
- nextSequenceNumber
- application:didSetMinimumFetchInterval:
- _appStateDidChange:
- handlePushNotificationFromApplication:userInfo:priority:completion:
- workDidChange:
- _opportunisticallyUpdateApplications:trigger:
- _performPendingWorkForBundleID:
- _appFinishedBackgroundUpdating:
- _startBackgroundFetchForNotification:
- queue_appFinishedBackgroundUpdating:userInfo:
- queue_startBackgroundFetchTaskForApplication:trigger:sequenceNumber:withWatchdoggableCompletion:
- _invalidateBackgroundTasksForApplication:
- queue_bearTrap_AppWasSuspended:
- _watchdogCompletionForBackgroundFetchTaskValue:
- queue_fireWatchdoggableCompletionForBackgroundFetchTaskValue:
- queue_invalidateBackgroundTasksForApplication:
- queue_backgroundTaskFinished:forApplication:
- _backgroundTaskFinished:forApplication:
- watchdogTimeout
- _startBackgroundFetchTaskForApplication:trigger:sequenceNumber:withWatchdoggableCompletion:
- _launchAppForUpdating:trigger:pushNotificationUserInfo:withWatchdoggableCompletion:
- init
@end
