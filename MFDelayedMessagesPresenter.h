@interface MFDelayedMessagesPresenter : NSObject
{
	id _fireQueue;
	id _fireSource;
	id _pendingMessages;
	double _postingDelay;
}

+ clearPendingMessages
+ _nts_scheduleNextFireEvent
+ postMessage:identifier:immediately:fireBlock:
+ removePendingMessagesWithIdentifiers:
+ postingDelay
+ setPostingDelay:
+ dealloc
+ init
+ setTargetQueue:
- clearPendingMessages
- _nts_scheduleNextFireEvent
- postMessage:identifier:immediately:fireBlock:
- removePendingMessagesWithIdentifiers:
- postingDelay
- setPostingDelay:
- dealloc
- init
- setTargetQueue:
@end
