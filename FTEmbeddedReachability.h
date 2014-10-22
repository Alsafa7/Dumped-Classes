@interface FTEmbeddedReachability : NSObject
{
	BOOL localWiFiRef;
	pointer reachabilityRef;
}

+ dealloc
+ connectionRequired
+ localWiFiStatusForFlags:
+ networkStatusForFlags:
+ currentReachabilityStatus
- dealloc
- connectionRequired
- localWiFiStatusForFlags:
- networkStatusForFlags:
- currentReachabilityStatus
@end
