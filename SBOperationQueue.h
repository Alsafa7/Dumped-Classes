@interface SBOperationQueue : NSObject
{
	id _name;
	id _operationQueue;
	id _operationLocks;
	id _executingOperation;
}

+ _addOperationQueueLock:
+ _removeOperationQueueLock:
+ _executeOrPendOperations:
+ _processNextOperationIfNecessary
+ executingOperation
+ setExecutingOperation:
+ acquireLockForReason:
+ executeOrAppendOperation:
+ dealloc
+ description
+ isLocked
+ initWithName:
- _addOperationQueueLock:
- _removeOperationQueueLock:
- _executeOrPendOperations:
- _processNextOperationIfNecessary
- executingOperation
- setExecutingOperation:
- acquireLockForReason:
- executeOrAppendOperation:
- dealloc
- description
- isLocked
- initWithName:
@end
