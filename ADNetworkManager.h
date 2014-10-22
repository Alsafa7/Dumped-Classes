@interface ADNetworkManager : NSObject
{
	id _delegate;
	pointer _scReachability;
	unsigned int _flags;
	pointer _wifiManager;
}

+ startMonitoringNetworkForHost:onQueue:
+ disableWiFiTimeout
+ stopMonitoringNetwork
+ forceFastDormancy
+ _wifiManager
+ _setFlags:
+ isNonWWANReachable
+ dealloc
+ setDelegate:
+ delegate
+ .cxx_destruct
- startMonitoringNetworkForHost:onQueue:
- disableWiFiTimeout
- stopMonitoringNetwork
- forceFastDormancy
- _wifiManager
- _setFlags:
- isNonWWANReachable
- dealloc
- setDelegate:
- delegate
- .cxx_destruct
@end
