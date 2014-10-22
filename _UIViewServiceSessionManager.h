@interface _UIViewServiceSessionManager : NSObject
{
	int _lock;
	id _listener;
	id _sessions;
	int _connectionNotificationToken;
}

+ dealloc
+ init
+ _init
+ _hasActiveSessions
+ _startListener
+ _registerSessionForDefaultDeputies:
+ _startOrStopSystemsForBackgroundRunning
+ listener:shouldAcceptNewConnection:
- dealloc
- init
- _init
- _hasActiveSessions
- _startListener
- _registerSessionForDefaultDeputies:
- _startOrStopSystemsForBackgroundRunning
- listener:shouldAcceptNewConnection:
@end
