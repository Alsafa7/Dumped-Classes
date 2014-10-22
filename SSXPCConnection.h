@interface SSXPCConnection : NSObject
{
	id _connection;
	id _dispatchQueue;
	id _disconnectBlock;
	id _replyQueue;
	id _messageBlock;
}

+ dealloc
+ init
+ sendMessage:
+ initWithServiceName:
+ sendMessage:withReply:
+ setDisconnectBlock:
+ setMessageBlock:
+ messageBlock
+ createXPCEndpoint
+ disconnectBlock
+ sendSynchronousMessage:withReply:
+ initWithXPCConnection:
+ _initSSXPCConnection
+ _reloadEventHandler
+ copyReplyQueue
+ setReplyQueue:
- dealloc
- init
- sendMessage:
- initWithServiceName:
- sendMessage:withReply:
- setDisconnectBlock:
- setMessageBlock:
- messageBlock
- createXPCEndpoint
- disconnectBlock
- sendSynchronousMessage:withReply:
- initWithXPCConnection:
- _initSSXPCConnection
- _reloadEventHandler
- copyReplyQueue
- setReplyQueue:
@end
