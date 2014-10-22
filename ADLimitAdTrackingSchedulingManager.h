@interface ADLimitAdTrackingSchedulingManager : NSObject
{
	id _activeAccountID;
}

+ scheduleBTAJobAtTimeIntervalFromNow:forceReschedule:
+ activeAccountID
+ setActiveAccountID:
+ init
+ listener:shouldAcceptNewConnection:
- scheduleBTAJobAtTimeIntervalFromNow:forceReschedule:
- activeAccountID
- setActiveAccountID:
- init
- listener:shouldAcceptNewConnection:
@end
