@interface AppLaunchStatsLaunchQueue : NSObject
{
	BOOL pushHigh;
	id launchQueue;
	long long allowedAppLaunchCap;
	long long wifiChargerDuration;
	usigned long long scheduleLaunchQueue;
	id highPriorityBlock;
	id lowPriorityBlock;
	id lastRetryTrigTime;
	id whatToLaunchQueue;
	id trendingQueue;
	id highPriorityPushQueue;
	id highPriorityRetryList;
	id lowPriorityPushQueue;
	id lowPriorityRetryList;
	id wifiChargerQueue;
	id reservationStationList;
	id wifiChargerCheck;
	id ageWifiChargerQueue;
}

+ init
+ logAll:withMsg:withLevel:
+ logLight:withMsg:withLevel:
+ addToLaunchQueue:withQueueType:withItem:
+ acquireReservationStation:
+ reservationStationsFree
+ launchObject:
+ wifiChargeQueueAllowedToProceed
+ addToHighPriorityQueue:withLaunchBlock:
+ addToLowPriorityQueue:withLaunchBlock:
+ confirmReservationStation:seqNum:type:release:
+ doDispatchQueuedLaunches
+ doDispatchQueuedLPLaunches
+ releaseReservationStation:seqNum:
+ refillWifiChargerQueue
+ enableWifiChargerQueue:
+ updateWifiChargerDate
+ setLaunchCapacity:
+ .cxx_destruct
- init
- logAll:withMsg:withLevel:
- logLight:withMsg:withLevel:
- addToLaunchQueue:withQueueType:withItem:
- acquireReservationStation:
- reservationStationsFree
- launchObject:
- wifiChargeQueueAllowedToProceed
- addToHighPriorityQueue:withLaunchBlock:
- addToLowPriorityQueue:withLaunchBlock:
- confirmReservationStation:seqNum:type:release:
- doDispatchQueuedLaunches
- doDispatchQueuedLPLaunches
- releaseReservationStation:seqNum:
- refillWifiChargerQueue
- enableWifiChargerQueue:
- updateWifiChargerDate
- setLaunchCapacity:
- .cxx_destruct
@end
