@interface CTMessageCenter : NSObject
{

}

+ sendSMSWithText:serviceCenter:toAddress:withID:
+ encodeMessage:
+ sendMessageAsSmsToShortCodeRecipients:andReplaceData:
+ sendMMSFromData:messageId:
+ send:withMoreToFollow:
+ sendSMS:withMoreToFollow:
+ sendMMS:
+ incomingMessageWithId:isDeferred:
+ addMessageOfType:toArray:withIdsFromArray:
+ isMmsConfigured
+ sendSMSWithText:serviceCenter:toAddress:withMoreToFollow:withID:
+ send:
+ incomingMessageCount
+ allIncomingMessages
+ acknowledgeIncomingMessageWithId:
+ acknowledgeOutgoingMessageWithId:
+ incomingMessageWithId:
+ deferredMessageWithId:
+ statusOfOutgoingMessages
+ decodeMessage:
+ isDeliveryReportsEnabled:
+ setDeliveryReportsEnabled:
+ isMmsEnabled
+ sendSMSWithText:serviceCenter:toAddress:
+ sendSMSWithText:serviceCenter:toAddress:withMoreToFollow:
+ getCharacterCount:andMessageSplitThreshold:forSmsText:
+ dealloc
+ init
- sendSMSWithText:serviceCenter:toAddress:withID:
- encodeMessage:
- sendMessageAsSmsToShortCodeRecipients:andReplaceData:
- sendMMSFromData:messageId:
- send:withMoreToFollow:
- sendSMS:withMoreToFollow:
- sendMMS:
- incomingMessageWithId:isDeferred:
- addMessageOfType:toArray:withIdsFromArray:
- isMmsConfigured
- sendSMSWithText:serviceCenter:toAddress:withMoreToFollow:withID:
- send:
- incomingMessageCount
- allIncomingMessages
- acknowledgeIncomingMessageWithId:
- acknowledgeOutgoingMessageWithId:
- incomingMessageWithId:
- deferredMessageWithId:
- statusOfOutgoingMessages
- decodeMessage:
- isDeliveryReportsEnabled:
- setDeliveryReportsEnabled:
- isMmsEnabled
- sendSMSWithText:serviceCenter:toAddress:
- sendSMSWithText:serviceCenter:toAddress:withMoreToFollow:
- getCharacterCount:andMessageSplitThreshold:forSmsText:
- dealloc
- init
@end
