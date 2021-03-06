@interface OBJCIPC : NSObject
{
	BOOL _activated;
	usigned long long _serverPort;
	id _processAssertions;
	id _pendingConnections;
	id _activeConnections;
	id _globalIncomingMessageHandlers;
	id _incomingMessageHandlers;
	id _outgoingMessageQueue;
}

+ _createSocketServer
+ _deactivateApp
+ _connectToSpringBoard
+ pendingConnections
+ setPendingConnections:
+ setActiveConnections:
+ setOutgoingMessageQueue:
+ processAssertions
+ setProcessAssertions:
+ activeConnectionWithAppWithIdentifier:
+ outgoingMessageQueue
+ queueOutgoingMessage:forAppWithIdentifier:
+ incomingMessageHandlers
+ setIncomingMessageHandlers:
+ globalIncomingMessageHandlers
+ setGlobalIncomingMessageHandlers:
+ addPendingConnection:
+ notifyConnectionBecomesActive:
+ notifyConnectionIsClosed:
+ _createPairWithAppSocket:
+ removeConnection:
+ activeConnections
+ serverPort
+ release
+ retain
+ autorelease
+ retainCount
+ copyWithZone:
+ activated
+ setActivated:
+ setServerPort:
- _createSocketServer
- _deactivateApp
- _connectToSpringBoard
- pendingConnections
- setPendingConnections:
- setActiveConnections:
- setOutgoingMessageQueue:
- processAssertions
- setProcessAssertions:
- activeConnectionWithAppWithIdentifier:
- outgoingMessageQueue
- queueOutgoingMessage:forAppWithIdentifier:
- incomingMessageHandlers
- setIncomingMessageHandlers:
- globalIncomingMessageHandlers
- setGlobalIncomingMessageHandlers:
- addPendingConnection:
- notifyConnectionBecomesActive:
- notifyConnectionIsClosed:
- _createPairWithAppSocket:
- removeConnection:
- activeConnections
- serverPort
- release
- retain
- autorelease
- retainCount
- copyWithZone:
- activated
- setActivated:
- setServerPort:
@end
