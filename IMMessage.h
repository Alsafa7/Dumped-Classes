@interface IMMessage : NSObject
{
	id _sender;
	id _subject;
	id _text;
	id _plainBody;
	id _time;
	id _timeDelivered;
	id _timeRead;
	id _guid;
	id _messageSubject;
	id _fileTransferGUIDs;
	id _error;
	id _parts;
	usigned long long _flags;
	BOOL _isInvitationMessage;
	long long _messageID;
}

+ __ck_isEqualToMessageUsingGUID:
+ _parseIMMessagePartsWithTextProcessingBlock:fileTransferProcessingBlock:
+ parts
+ _loadParts
+ dealloc
+ isEqual:
+ description
+ copyWithZone:
+ isEmpty
+ text
+ isDelayed
+ compare:
+ time
+ sender
+ subject
+ isFinished
+ isInvitationMessage
+ isRead
+ plainBody
+ isFromMe
+ fileTransferGUIDs
+ messageSubject
+ isSent
+ timeRead
+ isDelivered
+ timeDelivered
+ compare:comparisonType:
+ initWithSender:time:text:messageSubject:fileTransferGUIDs:flags:error:guid:subject:
+ _copyWithFlags:
+ _updateFileTransferGUIDs:
+ flags
+ isTypingMessage
+ _flushMessageParts
+ isSystemMessage
+ wasDataDetected
+ _updateSender:
+ _updateGUID:
+ _fzMessage
+ _updateFlags:
+ initWithSender:time:text:fileTransferGUIDs:flags:error:guid:subject:
+ _initWithSender:time:timeRead:timeDelivered:plainText:text:messageSubject:fileTransferGUIDs:flags:error:guid:messageID:subject:
+ _updateTime:
+ _updateTimeRead:
+ _updateTimeDelivered:
+ _updateMessageID:
+ isEmote
+ hasInlineAttachments
+ _compareIMMessageGUIDs:
+ _compareIMMessageIDs:
+ _compareIMMessageDates:
+ hasDataDetectorResults
+ initWithSender:fileTransfer:
+ summaryString
+ inlineAttachmentAttributesArray
+ isAutoReply
+ setIsAddressedToMe:
+ isAddressedToMe
+ isAlert
+ wasDowngraded
+ _updateText:
+ _updateError:
+ setIsInvitationMessage:
+ guid
+ messageID
+ error
+ senderName
- __ck_isEqualToMessageUsingGUID:
- _parseIMMessagePartsWithTextProcessingBlock:fileTransferProcessingBlock:
- parts
- _loadParts
- dealloc
- isEqual:
- description
- copyWithZone:
- isEmpty
- text
- isDelayed
- compare:
- time
- sender
- subject
- isFinished
- isInvitationMessage
- isRead
- plainBody
- isFromMe
- fileTransferGUIDs
- messageSubject
- isSent
- timeRead
- isDelivered
- timeDelivered
- compare:comparisonType:
- initWithSender:time:text:messageSubject:fileTransferGUIDs:flags:error:guid:subject:
- _copyWithFlags:
- _updateFileTransferGUIDs:
- flags
- isTypingMessage
- _flushMessageParts
- isSystemMessage
- wasDataDetected
- _updateSender:
- _updateGUID:
- _fzMessage
- _updateFlags:
- initWithSender:time:text:fileTransferGUIDs:flags:error:guid:subject:
- _initWithSender:time:timeRead:timeDelivered:plainText:text:messageSubject:fileTransferGUIDs:flags:error:guid:messageID:subject:
- _updateTime:
- _updateTimeRead:
- _updateTimeDelivered:
- _updateMessageID:
- isEmote
- hasInlineAttachments
- _compareIMMessageGUIDs:
- _compareIMMessageIDs:
- _compareIMMessageDates:
- hasDataDetectorResults
- initWithSender:fileTransfer:
- summaryString
- inlineAttachmentAttributesArray
- isAutoReply
- setIsAddressedToMe:
- isAddressedToMe
- isAlert
- wasDowngraded
- _updateText:
- _updateError:
- setIsInvitationMessage:
- guid
- messageID
- error
- senderName
@end
