@interface BKSXPCMessage : NSObject
{
	id _message;
	id _replyHandler;
	id _replyQueue;
}

+ dealloc
+ initWithMessagePacker:replyHandler:replyQueue:
+ sendToConnection:
+ initWithMessage:packer:replyHandler:replyQueue:
+ initWithMessage:replyHandler:replyQueue:
- dealloc
- initWithMessagePacker:replyHandler:replyQueue:
- sendToConnection:
- initWithMessage:packer:replyHandler:replyQueue:
- initWithMessage:replyHandler:replyQueue:
@end
