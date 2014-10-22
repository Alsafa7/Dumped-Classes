@interface MBMessage : NSObject
{
	id _xpcObject;
	id _messageInfo;
	id _replyInfo;
}

+ setError:
+ dealloc
+ description
+ arguments
+ name
+ setReply:
+ reply
+ _initWithXPCObject:
+ _xpcObject
+ initWithName:arguments:
+ sendReply
+ setReplyError:
+ replyError
+ error
- setError:
- dealloc
- description
- arguments
- name
- setReply:
- reply
- _initWithXPCObject:
- _xpcObject
- initWithName:arguments:
- sendReply
- setReplyError:
- replyError
- error
@end
