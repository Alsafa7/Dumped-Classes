@interface WebInspectorServer : NSObject
{
	BOOL _isEnabled;
	BOOL _hasActiveDebugSession;
	int _notifyToken;
	id _xpcConnection;
	id _connectionController;
}

+ dealloc
+ init
+ isEnabled
+ start
+ stop
+ xpcConnection
+ pushListing
+ didRegisterClient:
+ didUnregisterClient:
+ setupXPCConnectionIfNeeded
+ xpcConnection:receivedMessage:userInfo:
+ xpcConnectionFailed:
+ hasActiveDebugSession
+ setHasActiveDebugSession:
- dealloc
- init
- isEnabled
- start
- stop
- xpcConnection
- pushListing
- didRegisterClient:
- didUnregisterClient:
- setupXPCConnectionIfNeeded
- xpcConnection:receivedMessage:userInfo:
- xpcConnectionFailed:
- hasActiveDebugSession
- setHasActiveDebugSession:
@end
