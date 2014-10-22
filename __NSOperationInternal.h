@interface __NSOperationInternal : NSObject
{
	Array __pad1;
	id __outerOp;
	id __prevOp;
	id __nextOp;
	id __nextPriOp;
	id __queue;
	id __dependencies;
	id __down_dependencies;
	long long __unfinished_deps;
	id __completion;
	pointer __obsInfo;
	pointer __implicitObsInfo;
	long long __seqno;
	double __thread_prio;
	int __RC;
	int __state;
	char __prio;
	unsigned char __cached_isReady;
	unsigned char __isCancelled;
	unsigned char __isBarrier;
	Array __pad2;
	struct __wait_mutex;
	struct __wait_cond;
	Array __pad3;
}

+ _isCancelled
+ _cancel:
+ _isExecuting
+ _isFinished
+ _isReady
+ _queuePriority
+ _setQueuePriority:outer:
+ _threadPriority
+ _setThreadPriority:
+ _setCompletionBlock:
+ _waitUntilFinished:
+ _waitUntilFinishedOrTimeout:outer:
+ _addDependency:outer:
+ _removeDependency:outer:
+ _dependencies
+ _start:
+ __
+ dealloc
+ init
+ _completionBlock
+ _invalidate
+ finalize
- _isCancelled
- _cancel:
- _isExecuting
- _isFinished
- _isReady
- _queuePriority
- _setQueuePriority:outer:
- _threadPriority
- _setThreadPriority:
- _setCompletionBlock:
- _waitUntilFinished:
- _waitUntilFinishedOrTimeout:outer:
- _addDependency:outer:
- _removeDependency:outer:
- _dependencies
- _start:
- __
- dealloc
- init
- _completionBlock
- _invalidate
- finalize
@end
