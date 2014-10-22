@interface GEONetworkObserver : NSObject
{
	id _lock;
	unsigned int _networkReachability;
	pointer _networkReach;
	pointer _networkObservers;
	BOOL _networkNotified;
	BOOL _networkReachable;
}

+ dealloc
+ init
+ isNetworkReachable
+ addNetworkReachableObserver:selector:
+ removeNetworkReachableObserver:
+ _networkReachableFirstCallBack:
+ _networkReachableCallBack:
+ _networkObserversInitialize
+ isCellConnection
- dealloc
- init
- isNetworkReachable
- addNetworkReachableObserver:selector:
- removeNetworkReachableObserver:
- _networkReachableFirstCallBack:
- _networkReachableCallBack:
- _networkObserversInitialize
- isCellConnection
@end
