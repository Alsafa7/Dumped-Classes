@interface _ReachabilityRequest : NSObject
{
	id _lock;
	id _hostname;
	pointer _reachability;
	unsigned int _flags;
	pointer _observers;
	BOOL _isReachable;
	BOOL _receivedAtLeastOneCallback;
}

+ dealloc
+ description
+ removeObserver:
+ reachabilityChangedWithFlags:
+ initWithHostname:
+ addObserver:selector:
+ setHostname:
+ hostname
+ hasObservers
- dealloc
- description
- removeObserver:
- reachabilityChangedWithFlags:
- initWithHostname:
- addObserver:selector:
- setHostname:
- hostname
- hasObservers
@end
