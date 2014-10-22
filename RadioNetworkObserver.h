@interface RadioNetworkObserver : NSObject
{
	long long _networkUsageCount;
	id _networkUsageQueue;
}

+ isCellularNetworkingAllowed
+ dealloc
+ init
+ _init
+ _cellularNetworkAllowedDidChangeNotification:
+ .cxx_destruct
+ isUsingNetwork
+ beginUsingNetwork
+ endUsingNetwork
- isCellularNetworkingAllowed
- dealloc
- init
- _init
- _cellularNetworkAllowedDidChangeNotification:
- .cxx_destruct
- isUsingNetwork
- beginUsingNetwork
- endUsingNetwork
@end
