@interface TimerManager : NSObject
{
	int _state;
	id _notification;
	double _remainingTime;
}

+ fireTime
+ setDefaultDuration:
+ state
+ cancel
+ resume
+ pause
+ defaultSound
+ setDefaultSound:
+ defaultDuration
+ remainingTime
+ reloadState
+ scheduleAt:withSound:
+ changeSound:
- fireTime
- setDefaultDuration:
- state
- cancel
- resume
- pause
- defaultSound
- setDefaultSound:
- defaultDuration
- remainingTime
- reloadState
- scheduleAt:withSound:
- changeSound:
@end
