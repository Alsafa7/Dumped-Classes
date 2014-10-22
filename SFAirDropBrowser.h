@interface SFAirDropBrowser : NSObject
{
	BOOL _didDelay;
	pointer _browser;
	id _timer;
	double _startTime;
	id _nodes;
	id _people;
	id _delegate;
}

+ people
+ dealloc
+ setDelegate:
+ init
+ delegate
+ start
+ stop
+ updateDiscoveredPeople
+ handleBrowserCallBack
+ .cxx_destruct
- people
- dealloc
- setDelegate:
- init
- delegate
- start
- stop
- updateDiscoveredPeople
- handleBrowserCallBack
- .cxx_destruct
@end
