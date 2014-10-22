@interface FTNetworkSupport : NSObject
{
	Class _APSConnectionClass;
	id _apsConnection;
	id _reliabilityAttemptTimer;
	BOOL _enableCriticalReliability;
	BOOL _criticalReliabilityEnabledState;
}

+ networkReachable
+ networkActive
+ networkEnabled
+ _clearReliabilityTimeoutInterval
+ _tryToEnableReliability
+ _createAPSConnectionIfNeeded
+ _reallySetCriticalReliability:
+ _setReliabilityTimeoutInterval
+ enableCriticalReliability
+ allowAnyNetwork
+ wiFiActiveAndReachable
+ validNetworkEnabled
+ validNetworkActive
+ validNetworkReachable
+ willSearchForNetwork
+ dataActiveAndReachable
+ setEnableCriticalReliability:
- networkReachable
- networkActive
- networkEnabled
- _clearReliabilityTimeoutInterval
- _tryToEnableReliability
- _createAPSConnectionIfNeeded
- _reallySetCriticalReliability:
- _setReliabilityTimeoutInterval
- enableCriticalReliability
- allowAnyNetwork
- wiFiActiveAndReachable
- validNetworkEnabled
- validNetworkActive
- validNetworkReachable
- willSearchForNetwork
- dataActiveAndReachable
- setEnableCriticalReliability:
@end
