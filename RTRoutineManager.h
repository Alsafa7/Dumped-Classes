@interface RTRoutineManager : NSObject
{
	id _queue;
	id _routineManagerProxy;
	id _xpcConnection;
}

+ dealloc
+ init
+ createConnection
+ setRoutineManagerProxy:
+ routineManagerProxy
+ setRoutineEnabled:
+ clearRoutine
+ synchronizeDefaults
+ fetchNextPredictedLocationsOfInterestFromLocation:startDate:timeInterval:withHandler:
+ handleDaemonStart
+ fetchPredictedLocationsOfInterestWithinDistance:ofLocation:withHandler:
+ fetchPredictedLocationsOfInterestOfType:withHandler:
+ fetchAllPredictedLocationsOfInterestWithHandler:
+ fetchNextPredictedLocationsOfInterestWithHandler:
+ fetchRoutineEnabledWithHandler:
+ fetchBBPluginSupportedWithHandler:
+ queue
+ setQueue:
+ xpcConnection
+ setXpcConnection:
+ .cxx_destruct
- dealloc
- init
- createConnection
- setRoutineManagerProxy:
- routineManagerProxy
- setRoutineEnabled:
- clearRoutine
- synchronizeDefaults
- fetchNextPredictedLocationsOfInterestFromLocation:startDate:timeInterval:withHandler:
- handleDaemonStart
- fetchPredictedLocationsOfInterestWithinDistance:ofLocation:withHandler:
- fetchPredictedLocationsOfInterestOfType:withHandler:
- fetchAllPredictedLocationsOfInterestWithHandler:
- fetchNextPredictedLocationsOfInterestWithHandler:
- fetchRoutineEnabledWithHandler:
- fetchBBPluginSupportedWithHandler:
- queue
- setQueue:
- xpcConnection
- setXpcConnection:
- .cxx_destruct
@end
