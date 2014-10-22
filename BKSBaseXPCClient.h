@interface BKSBaseXPCClient : NSObject
{
	id _queue;
	id _connection;
	id _invalidationSignal;
	id _serverEndpoint;
	id _serviceName;
}

+ initWithEndpoint:
+ _setEndpoint:
+ dealloc
+ invalidate
+ _connection
+ queue_invalidate
+ queue_reregister
+ queue_connectionWasInvalidated
+ queue_handleMessage:
+ initWithServiceName:endpoint:
+ _errorFromMessageIfAny:
+ _sendMessage:withReplyHandler:waitForReply:waitDuration:
+ queue_connectionWasCreated
+ _notifyTokenName
+ _getStringFromMessage:key:
+ queue_registerWithServerIfNecessary
+ reconnectIfNecessary
+ _isServerRegistered
+ initWithServiceName:
- initWithEndpoint:
- _setEndpoint:
- dealloc
- invalidate
- _connection
- queue_invalidate
- queue_reregister
- queue_connectionWasInvalidated
- queue_handleMessage:
- initWithServiceName:endpoint:
- _errorFromMessageIfAny:
- _sendMessage:withReplyHandler:waitForReply:waitDuration:
- queue_connectionWasCreated
- _notifyTokenName
- _getStringFromMessage:key:
- queue_registerWithServerIfNecessary
- reconnectIfNecessary
- _isServerRegistered
- initWithServiceName:
@end
