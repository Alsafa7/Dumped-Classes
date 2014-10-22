@interface _PFManagedObjectReferenceQueue : NSObject
{
	int _cd_rc;
	int _spinLock;
	int _flags;
	int _signalRunloop;
	id _context;
	pointer _queue;
	pointer _rlObserver;
}

+ _queueForDealloc:
+ _GC_queueForDealloc:
+ _processReferenceQueue:
+ _unregisterRunloopObservers
+ _contextDidDealloc
+ initForContext:
+ _queueCount
+ _signal
+ _queueBatchForDealloc:
+ release
+ retain
+ dealloc
+ retainCount
+ _tryRetain
+ _isDeallocating
+ finalize
- _queueForDealloc:
- _GC_queueForDealloc:
- _processReferenceQueue:
- _unregisterRunloopObservers
- _contextDidDealloc
- initForContext:
- _queueCount
- _signal
- _queueBatchForDealloc:
- release
- retain
- dealloc
- retainCount
- _tryRetain
- _isDeallocating
- finalize
@end
