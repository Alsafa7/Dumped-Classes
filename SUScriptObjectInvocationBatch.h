@interface SUScriptObjectInvocationBatch : NSObject
{
	id _invocationQueue;
	id _lock;
	pointer _proxies;
	id _rootObject;
}

+ dealloc
+ init
+ checkOutBatchTarget:
+ setRootObject:
+ copyQueuedInvocationsForObject:
+ rootObject
+ batchProxyForObject:
+ dequeueInvocations
+ _delayedDequeueInvocations
+ enqueueInvocation:
- dealloc
- init
- checkOutBatchTarget:
- setRootObject:
- copyQueuedInvocationsForObject:
- rootObject
- batchProxyForObject:
- dequeueInvocations
- _delayedDequeueInvocations
- enqueueInvocation:
@end
