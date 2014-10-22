@interface _NSXPCInterfaceMethodInfo : NSObject
{
	char *_replySignature;
	int _replyPosition;
	id _replyArguments;
	id _arguments;
}

+ setArguments:
+ setReplySignature:
+ replySignature
+ replyArguments
+ setReplyArguments:
+ replyPosition
+ setReplyPosition:
+ dealloc
+ init
+ arguments
+ finalize
- setArguments:
- setReplySignature:
- replySignature
- replyArguments
- setReplyArguments:
- replyPosition
- setReplyPosition:
- dealloc
- init
- arguments
- finalize
@end
