@interface MBConnection : NSObject
{
	id _conn;
	id _eventQueue;
	id _handler;
}

+ dealloc
+ suspend
+ cancel
+ resume
+ eventQueue
+ sendMessage:
+ initWithServiceName:eventQueue:
+ setMessageHandler:
+ sendMessageWithReplyAndSync:error:
+ _setEventHandlerForXPCConnection
+ _handleXPCEvent:
+ _handleXPCError:
+ initWithXPCConnection:eventQueue:
+ messageHandler
- dealloc
- suspend
- cancel
- resume
- eventQueue
- sendMessage:
- initWithServiceName:eventQueue:
- setMessageHandler:
- sendMessageWithReplyAndSync:error:
- _setEventHandlerForXPCConnection
- _handleXPCEvent:
- _handleXPCError:
- initWithXPCConnection:eventQueue:
- messageHandler
@end
