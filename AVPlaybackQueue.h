@interface AVPlaybackQueue : NSObject
{
	id _delegate;
	id _avItemQueue;
	id _pbItemQueue;
	pointer _figPlayer;
	int _ignoreAVQueueModifications;
	BOOL _hasBuiltPlaybackQueue;
	BOOL _waitingToAddFirstItem;
	int _avQueueTransactionCount;
	long long _repeatMode;
}

+ setRepeatMode:
+ dealloc
+ setDelegate:
+ beginAVQueueTransaction
+ endAVQueueTransaction
+ initWithDelegate:figPlayer:
+ setAVItemQueue:
+ ensurePlaybackQueue
+ ensurePlaybackQueueImmed
+ currentPlaybackItem
+ playbackItemWasRemovedFromPlayQueue:
+ updateBookmarkTimesIncludeFirst:updateFirst:
+ playbackItemInspectionComplete:
+ checkQueueConsistency
+ scheduleRemoveItemsNoLongerInPlayQueue
+ clearPBItemQueueFromIndex:
+ queueItemWasAddedNotification:
+ queueItemWillBeRemovedNotification:
+ fillInPBItemQueue
+ removeItemsNoLongerInPlayQueue
- setRepeatMode:
- dealloc
- setDelegate:
- beginAVQueueTransaction
- endAVQueueTransaction
- initWithDelegate:figPlayer:
- setAVItemQueue:
- ensurePlaybackQueue
- ensurePlaybackQueueImmed
- currentPlaybackItem
- playbackItemWasRemovedFromPlayQueue:
- updateBookmarkTimesIncludeFirst:updateFirst:
- playbackItemInspectionComplete:
- checkQueueConsistency
- scheduleRemoveItemsNoLongerInPlayQueue
- clearPBItemQueueFromIndex:
- queueItemWasAddedNotification:
- queueItemWillBeRemovedNotification:
- fillInPBItemQueue
- removeItemsNoLongerInPlayQueue
@end
