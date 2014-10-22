@interface CKDispatchQueue : NSObject
{
	usigned long long _fifo;
	BOOL _suspended;
	BOOL _cancelled;
	id _dispatchQueue;
	id _lockQueue;
	pointer _heap;
	id _dispatchQueueBlocks;
}

+ dispatchQueue
+ dealloc
+ init
+ isSuspended
+ setCancelled:
+ isCancelled
+ setSuspended:
+ containsOutstandingBlockForKey:
+ addBlock:withQueuePriority:forKey:
+ allKeysOfOutstandingBlocks
+ setQueuePriority:ofOutstandingBlockForKey:
+ removeOutstandingBlockForKey:
+ cancelOustandingBlocks
+ lockQueue
+ setLockQueue:
+ addBlock:withQueuePriority:
+ setDispatchQueue:
+ _initWithDispatchAttr:dispatchPriority:
+ setHeap:
+ setDispatchQueueBlocks:
+ heap
+ dispatchQueueBlocks
+ queuePriorityOfOutstandingBlockForKey:
+ addBlock:
- dispatchQueue
- dealloc
- init
- isSuspended
- setCancelled:
- isCancelled
- setSuspended:
- containsOutstandingBlockForKey:
- addBlock:withQueuePriority:forKey:
- allKeysOfOutstandingBlocks
- setQueuePriority:ofOutstandingBlockForKey:
- removeOutstandingBlockForKey:
- cancelOustandingBlocks
- lockQueue
- setLockQueue:
- addBlock:withQueuePriority:
- setDispatchQueue:
- _initWithDispatchAttr:dispatchPriority:
- setHeap:
- setDispatchQueueBlocks:
- heap
- dispatchQueueBlocks
- queuePriorityOfOutstandingBlockForKey:
- addBlock:
@end
