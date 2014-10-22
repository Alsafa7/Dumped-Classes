@interface PLKeepDaemonAliveAssertion : NSObject
{
	id _keepaliveConnection;
}

+ dealloc
+ init
+ _applicationDidBecomeActive:
+ _applicationWillResignActive:
+ _registerForAppActiveNotifications
+ _setupConnection
+ _unregisterForAppActiveNotifications
+ _tearDownConnection
+ _setupHeartBeatForConnection:
- dealloc
- init
- _applicationDidBecomeActive:
- _applicationWillResignActive:
- _registerForAppActiveNotifications
- _setupConnection
- _unregisterForAppActiveNotifications
- _tearDownConnection
- _setupHeartBeatForConnection:
@end
