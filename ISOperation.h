@interface ISOperation : NSOperation
{
	id _delegate;
	id _error;
	id _lock;
	id _operationRunLoop;
	id _parentOperation;
	id _progress;
	BOOL _shouldMessageMainThread;
	id _powerAssertionIdentifier;
	id _serializationLockIdentifiers;
	id _subOperations;
	BOOL _shouldRunWithBackgroundPriority;
	BOOL _stopped;
	BOOL _success;
	id _threadSafeDelegate;
}

+ setScriptOptions:
+ sendCompletionCallback:
+ copyAccountID:byAuthenticatingWithContext:returningError:
+ authenticatedAccountDSID
+ loadSoftwareMapReturningError:
+ loadedURLBagWithContext:returningError:
+ loadURLBagWithContext:returningError:
+ success
+ setError:
+ uniqueKey
+ dealloc
+ setDelegate:
+ init
+ delegate
+ lock
+ unlock
+ cancel
+ run
+ main
+ progress
+ error
+ _keepAliveTimer:
+ setParentOperation:
+ _addSubOperation:
+ dispatchCompletionBlock
+ _removeSubOperation:
+ stopRunLoop
+ operationRunLoop
+ shouldFailAfterUniquePredecessorError:
+ powerAssertionIdentifier
+ shouldRunWithBackgroundPriority
+ _main:
+ _failAfterException
+ parentOperation
+ copyActivePowerAssertionIdentifiers
+ serializationLockIdentifiers
+ _sendErrorToDelegate:
+ setOperationRunLoop:
+ sendProgressToDelegate
+ _sendWillStartToDelegate
+ run:
+ _sendSuccessToDelegate
+ progressWeight
+ runRunLoopUntilStopped
+ runSubOperation:onQueue:error:
+ shouldMessageMainThread
+ copySerializationLocks
+ releasePowerAssertionsDuringBlock:
+ sendDidTakeSerializationLocks
+ setSerializationLockIdentifiers:
+ setPowerAssertionIdentifier:
+ setShouldRunWithBackgroundPriority:
+ setShouldMessageMainThread:
+ threadSafeDelegate
+ setSuccess:
+ runSubOperation:returningError:
- setScriptOptions:
- sendCompletionCallback:
- copyAccountID:byAuthenticatingWithContext:returningError:
- authenticatedAccountDSID
- loadSoftwareMapReturningError:
- loadedURLBagWithContext:returningError:
- loadURLBagWithContext:returningError:
- success
- setError:
- uniqueKey
- dealloc
- setDelegate:
- init
- delegate
- lock
- unlock
- cancel
- run
- main
- progress
- error
- _keepAliveTimer:
- setParentOperation:
- _addSubOperation:
- dispatchCompletionBlock
- _removeSubOperation:
- stopRunLoop
- operationRunLoop
- shouldFailAfterUniquePredecessorError:
- powerAssertionIdentifier
- shouldRunWithBackgroundPriority
- _main:
- _failAfterException
- parentOperation
- copyActivePowerAssertionIdentifiers
- serializationLockIdentifiers
- _sendErrorToDelegate:
- setOperationRunLoop:
- sendProgressToDelegate
- _sendWillStartToDelegate
- run:
- _sendSuccessToDelegate
- progressWeight
- runRunLoopUntilStopped
- runSubOperation:onQueue:error:
- shouldMessageMainThread
- copySerializationLocks
- releasePowerAssertionsDuringBlock:
- sendDidTakeSerializationLocks
- setSerializationLockIdentifiers:
- setPowerAssertionIdentifier:
- setShouldRunWithBackgroundPriority:
- setShouldMessageMainThread:
- threadSafeDelegate
- setSuccess:
- runSubOperation:returningError:
@end
