@interface GKTurnBasedExchangeInternal : GKInternalRepresentation
{
	id _exchangeID;
	id _recipientIndexes;
	id _statusString;
	id _localizableMessage;
	id _data;
	id _sendDate;
	id _timeoutDate;
	id _completionDate;
	id _replies;
	unsigned char _senderIndex;
}

+ completionDate
+ setCompletionDate:
+ timeoutDate
+ replies
+ senderIndex
+ recipientIndexes
+ setReplies:
+ localizableMessage
+ setLocalizableMessage:
+ exchangeID
+ setTimeoutDate:
+ setExchangeID:
+ setSenderIndex:
+ setRecipientIndexes:
+ dealloc
+ isEqual:
+ hash
+ data
+ setData:
+ statusString
+ setSendDate:
+ sendDate
+ setStatusString:
- completionDate
- setCompletionDate:
- timeoutDate
- replies
- senderIndex
- recipientIndexes
- setReplies:
- localizableMessage
- setLocalizableMessage:
- exchangeID
- setTimeoutDate:
- setExchangeID:
- setSenderIndex:
- setRecipientIndexes:
- dealloc
- isEqual:
- hash
- data
- setData:
- statusString
- setSendDate:
- sendDate
- setStatusString:
@end
