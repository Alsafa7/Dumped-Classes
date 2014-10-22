@interface CKDraftManager : NSObject
{
	id _cachedDrafts;
	id _dirtyDraftIDs;
	id _pendingRecipients;
}

+ dealloc
+ save:
+ setDraftForPendingConversation:withRecipients:
+ clearDraftForPendingConversation
+ draftForPendingConversationWithRecipients:
+ _setDraft:forKey:
+ _draftForKey:
+ _clearDraftForConversation:
+ _pendingRecipients
+ _setPendingRecipients:
+ _pendingRecipientsURL
+ draftForConversation:
+ setDraft:forConversation:
- dealloc
- save:
- setDraftForPendingConversation:withRecipients:
- clearDraftForPendingConversation
- draftForPendingConversationWithRecipients:
- _setDraft:forKey:
- _draftForKey:
- _clearDraftForConversation:
- _pendingRecipients
- _setPendingRecipients:
- _pendingRecipientsURL
- draftForConversation:
- setDraft:forConversation:
@end
