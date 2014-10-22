@interface NSXPCInterface : NSObject
{
	id _protocol;
	pointer _methods2;
	id _reserved1;
}

+ _verifiedMethodSignatureForReplyBlockOfSelector:
+ _interfaceForArgument:ofSelector:reply:
+ _allowedClassesForSelector:reply:
+ _verifiedMethodSignatureForSelector:
+ setProtocol:
+ classesForSelector:argumentIndex:ofReply:
+ interfaceForSelector:argumentIndex:ofReply:
+ setClass:forSelector:argumentIndex:ofReply:
+ classForSelector:argumentIndex:ofReply:
+ setReplyBlockSignature:forSelector:
+ replyBlockSignatureForSelector:
+ dealloc
+ init
+ debugDescription
+ setInterface:forSelector:argumentIndex:ofReply:
+ setClasses:forSelector:argumentIndex:ofReply:
+ protocol
+ finalize
- _verifiedMethodSignatureForReplyBlockOfSelector:
- _interfaceForArgument:ofSelector:reply:
- _allowedClassesForSelector:reply:
- _verifiedMethodSignatureForSelector:
- setProtocol:
- classesForSelector:argumentIndex:ofReply:
- interfaceForSelector:argumentIndex:ofReply:
- setClass:forSelector:argumentIndex:ofReply:
- classForSelector:argumentIndex:ofReply:
- setReplyBlockSignature:forSelector:
- replyBlockSignatureForSelector:
- dealloc
- init
- debugDescription
- setInterface:forSelector:argumentIndex:ofReply:
- setClasses:forSelector:argumentIndex:ofReply:
- protocol
- finalize
@end
