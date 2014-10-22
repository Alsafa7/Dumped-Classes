@interface CPNetworkObserver : NSObject
{
	id _lock;
	id _reachabilityRequests;
	unsigned int _networkReachability;
	pointer _networkReach;
	pointer _networkObservers;
	pointer _wifiPreferences;
	pointer _wifiObservers;
	BOOL _networkNotified;
	BOOL _networkReachable;
	BOOL _wifiNotified;
	BOOL _wifiEnabled;
}

+ dealloc
+ init
+ removeObserver:
+ isNetworkReachable
+ addNetworkReachableObserver:selector:
+ removeNetworkReachableObserver:
+ _wifiFirstCallBack:
+ _wifiCallBack:
+ _wifiObserversInitialize
+ isWiFiEnabled
+ _networkReachableFirstCallBack:
+ _networkReachableCallBack:
+ _networkObserversInitialize
+ addWiFiObserver:selector:
+ removeWiFiObserver:
+ addObserver:selector:forHostname:
+ removeObserver:forHostname:
- dealloc
- init
- removeObserver:
- isNetworkReachable
- addNetworkReachableObserver:selector:
- removeNetworkReachableObserver:
- _wifiFirstCallBack:
- _wifiCallBack:
- _wifiObserversInitialize
- isWiFiEnabled
- _networkReachableFirstCallBack:
- _networkReachableCallBack:
- _networkObserversInitialize
- addWiFiObserver:selector:
- removeWiFiObserver:
- addObserver:selector:forHostname:
- removeObserver:forHostname:
@end
