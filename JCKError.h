@interface JCKError : NSObject
{
	id _chainIdentifier;
	long long _status;
	id _internalMessage;
	id _userMessage;
	long long _level;
	id _attachments;
}

+ initWithLevel:internalMessage:userMessage:
+ addToQueue
+ levelString
+ revoke
+ chainIdentifier
+ setChainIdentifier:
+ internalMessage
+ setInternalMessage:
+ setUserMessage:
+ setAttachments:
+ init
+ description
+ setLevel:
+ level
+ status
+ setStatus:
+ addAttachment:
+ attachments
+ userMessage
+ .cxx_destruct
- initWithLevel:internalMessage:userMessage:
- addToQueue
- levelString
- revoke
- chainIdentifier
- setChainIdentifier:
- internalMessage
- setInternalMessage:
- setUserMessage:
- setAttachments:
- init
- description
- setLevel:
- level
- status
- setStatus:
- addAttachment:
- attachments
- userMessage
- .cxx_destruct
@end
