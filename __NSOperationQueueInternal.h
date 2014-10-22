@interface __NSOperationQueueInternal : NSObject
{
	int __queueLock;
	id __firstOperation;
	id __lastOperation;
	id __pendingFirstOperation;
	id __pendingLastOperation;
	Array __firstPriOperation;
	Array __lastPriOperation;
	id __pending_barrier;
	long long __maxNumOps;
	int __actualMaxNumOps;
	int __numExecOps;
	unsigned int __unused2;
	unsigned char __mainQ;
	unsigned char __suspended;
	unsigned char __overcommit;
	Array __pad1;
	id __dispatchQueue;
	Array __nameBuffer;
}

+ dealloc
+ init
+ finalize
- dealloc
- init
- finalize
@end
