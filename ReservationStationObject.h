@interface ReservationStationObject : NSObject
{
	id rsDispatchQueue;
	long long lockTime;
	long long seqNum;
	int appType;
	id forceEndHandler;
	id timeStamp;
	id bundleID;
	id theTimer;
}

+ logAll:withMsg:withLevel:
+ logLight:withMsg:withLevel:
+ onTick
+ createTimer
+ isFree
+ releaseStationWithAppID:seqNum:withReleaseState:
+ setStation:didSet:
+ setStationState:seq:type:didset:release:
+ init:
+ .cxx_destruct
- logAll:withMsg:withLevel:
- logLight:withMsg:withLevel:
- onTick
- createTimer
- isFree
- releaseStationWithAppID:seqNum:withReleaseState:
- setStation:didSet:
- setStationState:seq:type:didset:release:
- init:
- .cxx_destruct
@end
