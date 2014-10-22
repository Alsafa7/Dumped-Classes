@interface BBSyncService : NSObject
{
	id _service;
	id _pendingDismissalDictionaries;
	id _pendingDismissalIDs;
	id _queue;
	usigned long long _queuedFeed;
	id _queuedSectionID;
	id _deferredDismissalsBySectionID;
	id _deferredTimer;
	int _lockNotifyToken;
	id _delegate;
}

+ initWithQueue:
+ dealloc
+ setDelegate:
+ delegate
+ enqueueSyncedRemovalForBulletin:feeds:
+ sendPendingSyncedRemovals
+ _clearDeferredTimer
+ _sendSyncMessage:
+ _syncAccount
+ _addDeferredDismissalForBulletin:feeds:
+ _reallyEnqueueBulletin:feeds:
+ _dismissalDictionaryForBulletin:
+ _deferredTimerFired:
+ _sendDeferredDismissals
+ sendSyncedRemovalForBulletin:feeds:
+ service:account:incomingMessage:fromID:
+ service:activeAccountsChanged:
+ _deviceLocked
- initWithQueue:
- dealloc
- setDelegate:
- delegate
- enqueueSyncedRemovalForBulletin:feeds:
- sendPendingSyncedRemovals
- _clearDeferredTimer
- _sendSyncMessage:
- _syncAccount
- _addDeferredDismissalForBulletin:feeds:
- _reallyEnqueueBulletin:feeds:
- _dismissalDictionaryForBulletin:
- _deferredTimerFired:
- _sendDeferredDismissals
- sendSyncedRemovalForBulletin:feeds:
- service:account:incomingMessage:fromID:
- service:activeAccountsChanged:
- _deviceLocked
@end
