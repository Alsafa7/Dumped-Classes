@interface AppLaunchStats : NSObject
{
	id aplsState;
	id aplsAppWorkSpace;
	id aplsDelayLaunch;
	id aplsLaunchQueue;
	id aplsSaveAndRestore;
	id aplsSBMonitor;
	id aplsSBSettings;
	id aplsStateHandlerQueue;
	id aplsREventHandler;
	id pendingHandler;
	id recommendHandler;
	id aplsScheduler;
	id aplsDiag;
	id topicLimiter;
	unsigned char prefUIKitFakeSwitch;
	int messageStatusAPSD;
	int resourceStatus;
	int externaltriggerType;
	id distNotCenter;
	id lastDateOfAliveList;
	id lastExternalTrigTime;
	id timeOfLastFetch;
	id oneHourBudgetReset;
	id batteryCapacity;
	id aplsRunLoop;
	id fakeBundleID;
	BOOL isClassCLocked;
	BOOL isAppForecastUpdating;
	BOOL isDataBudgetUpdating;
	BOOL isNoprewarmUpdating;
	BOOL isInternalInstall;
	BOOL isPowerBudgetsUpdating;
	BOOL lastFetchWasTooLongAgo;
	BOOL disableAllDueToSleep;
	BOOL disableFetch;
	BOOL disableHighPriorityPush;
	BOOL disableLowPriorityPush;
	BOOL disableTrending;
	int allowedMaxCount;
	int lockStateToken;
	int whiteListAppToken;
	int externalTrigToken;
	int resourceToken;
	int trendToken;
	int pushListToken;
	int pushToken;
	int configToken;
	int aplsNotifyToken;
	int semaphoreSigToken;
	int classCLockedToken;
	int displayStateToken;
	int pluggedInToken;
	long long lowPriorityStartTime;
	id appLaunchStatDQueue;
	id appLaunchStatPushQueue;
	id delegateQueue;
	id theTimer;
	id conn;
	id delegate;
}

+ dealloc
+ init
+ save:
+ logAll:withMsg:withLevel:
+ logLight:withMsg:withLevel:
+ reloadConfiguration
+ restore:
+ onTick
+ aplsState
+ removeAppFromLST:
+ aplsSBMonitorEvent:
+ deleteAllEntriesInDB
+ runPCtimerHeartBeat:
+ updateStateFromExternalNotification:
+ isSpringBoardInstance
+ initAfterClassCUnlocked
+ initAfterClassCUnlockedForClient
+ launchExternalTriggers:
+ updateTrendingBehavior:withBundleID:
+ receiveIncomingLowPriorityPushList:
+ initSharedNotification
+ receiveIncomingLowPriorityPushRequestForReservationStation:
+ updateResourceAvailabilityNow:
+ receiveConnectedStateNotification:
+ hasOpportunisticFetchFeatureWithType:withFetch:
+ appLaunchStatDQueue
+ whatToLaunch:
+ setup_lstconnection
+ checkWifiChargerConnected
+ testAndReleaseBlueList
+ registerAppForTrending:
+ testOneHourBudgetExpirytime
+ updateDailyAppForecast
+ resetBudgetPool
+ resetBudgetPoolClient
+ updateResourceAvailability
+ updateAliveList
+ replaceTimeSlot:
+ retrieveAppScoresWithHandler:
+ updateDailyDataBudget
+ updateDailyPowerBudgets
+ stopDataTransferWithBudgetHandler:seqnum:handler:
+ updatePowerBudgetPool
+ updateDailyOutOfBandForecast
+ updateAppAlivelist
+ testDatabaseAge:
+ initRegisterNotifications
+ setPendingWorkQueue:
+ appActivityForecastStartingOnDate:duration:granularity:appFilter:completionHandler:
+ dataForecastStartingOnDate:duration:granularity:completionHandler:
+ carryDailyBudget:completionHandler:
+ modifyPoolValue:number:
+ bundlePredictionZone:launchzone:
+ convertTopicIDtoBundleID:
+ triggerLaunchQueue:
+ sendLSTxtqueriesWithMask:
+ defaultsDomainReadString:
+ okToLaunchMessageFor:forReasons:withHandler:
+ trendQueryLaunchApp:
+ okToPassPushMessageForTopic:onQueue:withHandler:
+ preWarmHasStarted:withResult:withTriggerType:withSequence:
+ preWarmHasEnded:withResult:withTriggerType:withSequence:
+ setAppLaunchRecommendationHandler:
+ setAppLaunchStatsPendingDelegate:queue:
+ setAppLaunchStatsDelegate:queue:
+ setAppLaunchStatsPendingHandler:queue:
+ retrieveAppScoresWithQueryHandler:
+ energyForecastStartingOnDate:duration:granularity:completionHandler:
+ hasOpportunisticFetchFeature:
+ doConvertTopicString:withRange:withSubStringIndex:
+ setDelayLaunchFor:with:
+ pendingHandler
+ conn
+ .cxx_destruct
- dealloc
- init
- save:
- logAll:withMsg:withLevel:
- logLight:withMsg:withLevel:
- reloadConfiguration
- restore:
- onTick
- aplsState
- removeAppFromLST:
- aplsSBMonitorEvent:
- deleteAllEntriesInDB
- runPCtimerHeartBeat:
- updateStateFromExternalNotification:
- isSpringBoardInstance
- initAfterClassCUnlocked
- initAfterClassCUnlockedForClient
- launchExternalTriggers:
- updateTrendingBehavior:withBundleID:
- receiveIncomingLowPriorityPushList:
- initSharedNotification
- receiveIncomingLowPriorityPushRequestForReservationStation:
- updateResourceAvailabilityNow:
- receiveConnectedStateNotification:
- hasOpportunisticFetchFeatureWithType:withFetch:
- appLaunchStatDQueue
- whatToLaunch:
- setup_lstconnection
- checkWifiChargerConnected
- testAndReleaseBlueList
- registerAppForTrending:
- testOneHourBudgetExpirytime
- updateDailyAppForecast
- resetBudgetPool
- resetBudgetPoolClient
- updateResourceAvailability
- updateAliveList
- replaceTimeSlot:
- retrieveAppScoresWithHandler:
- updateDailyDataBudget
- updateDailyPowerBudgets
- stopDataTransferWithBudgetHandler:seqnum:handler:
- updatePowerBudgetPool
- updateDailyOutOfBandForecast
- updateAppAlivelist
- testDatabaseAge:
- initRegisterNotifications
- setPendingWorkQueue:
- appActivityForecastStartingOnDate:duration:granularity:appFilter:completionHandler:
- dataForecastStartingOnDate:duration:granularity:completionHandler:
- carryDailyBudget:completionHandler:
- modifyPoolValue:number:
- bundlePredictionZone:launchzone:
- convertTopicIDtoBundleID:
- triggerLaunchQueue:
- sendLSTxtqueriesWithMask:
- defaultsDomainReadString:
- okToLaunchMessageFor:forReasons:withHandler:
- trendQueryLaunchApp:
- okToPassPushMessageForTopic:onQueue:withHandler:
- preWarmHasStarted:withResult:withTriggerType:withSequence:
- preWarmHasEnded:withResult:withTriggerType:withSequence:
- setAppLaunchRecommendationHandler:
- setAppLaunchStatsPendingDelegate:queue:
- setAppLaunchStatsDelegate:queue:
- setAppLaunchStatsPendingHandler:queue:
- retrieveAppScoresWithQueryHandler:
- energyForecastStartingOnDate:duration:granularity:completionHandler:
- hasOpportunisticFetchFeature:
- doConvertTopicString:withRange:withSubStringIndex:
- setDelayLaunchFor:with:
- pendingHandler
- conn
- .cxx_destruct
@end
