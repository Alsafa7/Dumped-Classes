@interface SBDaemonContext : NSObject
{
	id _dispatchSource;
	id _daemonRequests;
	int _pid;
}

+ initWithPid:queue:
+ addRequest:forKey:
+ removeRequestForKey:
+ _newDispatchSourceForPid:queue:
+ _handleCancelation
+ dealloc
+ description
+ pid
- initWithPid:queue:
- addRequest:forKey:
- removeRequestForKey:
- _newDispatchSourceForPid:queue:
- _handleCancelation
- dealloc
- description
- pid
@end
