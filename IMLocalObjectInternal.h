@interface IMLocalObjectInternal : NSObject
{
	id _currentMessageContext;
	id _lock;
	id _target;
	id _connection;
	id _queue;
	id _deathLock;
	id _portName;
	id _protocolChecker;
	id _componentQueue;
	id _componentQueueLock;
	id _componentQueueProcessingLock;
	BOOL _pendingComponentQueueProcessing;
	BOOL _busyForwarding;
}

+ dealloc
- dealloc
@end
