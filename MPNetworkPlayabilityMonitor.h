@interface MPNetworkPlayabilityMonitor : NSObject
{
	long long _effectiveNetworkTypeForPlayback;
	long long _networkType;
	id _queue;
}

+ adjustEffectiveNetworkTypeUsingPreviouslyPlayedItem:
+ networkType
+ effectiveNetworkTypeForPlayback
+ _networkTypeDidChangeNotification:
+ _onQueueEffectiveNetworkTypeForAverageBitrate:
+ dealloc
+ init
+ .cxx_destruct
- adjustEffectiveNetworkTypeUsingPreviouslyPlayedItem:
- networkType
- effectiveNetworkTypeForPlayback
- _networkTypeDidChangeNotification:
- _onQueueEffectiveNetworkTypeForAverageBitrate:
- dealloc
- init
- .cxx_destruct
@end
