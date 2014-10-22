@interface AVPlayerConnection : NSObject
{
	id _playerReference;
	id _playerItemReference;
	BOOL _shouldAppendItem;
	long long _status;
	id _error;
	id _previousPlayerItem;
}

+ addItemToPlayQueue
+ removeItemFromPlayQueue
+ initWithWeakReferenceToPlayer:weakReferenceToPlayerItem:shouldAppendItem:
+ serializationQueue
+ playerItem
+ dealloc
+ description
+ status
+ error
+ player
- addItemToPlayQueue
- removeItemFromPlayQueue
- initWithWeakReferenceToPlayer:weakReferenceToPlayerItem:shouldAppendItem:
- serializationQueue
- playerItem
- dealloc
- description
- status
- error
- player
@end
