@interface GKTurnBasedExchangeReplyInternal : GKInternalRepresentation
{
	id _localizableMessage;
	id _data;
	id _replyDate;
	unsigned char _recipientIndex;
}

+ recipientIndex
+ localizableMessage
+ setLocalizableMessage:
+ setRecipientIndex:
+ replyDate
+ setReplyDate:
+ dealloc
+ data
+ setData:
- recipientIndex
- localizableMessage
- setLocalizableMessage:
- setRecipientIndex:
- replyDate
- setReplyDate:
- dealloc
- data
- setData:
@end
