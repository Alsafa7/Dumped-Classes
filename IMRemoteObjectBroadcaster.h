@interface IMRemoteObjectBroadcaster : NSObject
{
	id _queue;
}

+ dealloc
+ init
+ _queue
+ isSendQueueEmpty
+ broadcastProxyForTarget:messageContext:protocol:
+ broadcastProxyForTargets:messageContext:protocol:
+ flushProxy:
- dealloc
- init
- _queue
- isSendQueueEmpty
- broadcastProxyForTarget:messageContext:protocol:
- broadcastProxyForTargets:messageContext:protocol:
- flushProxy:
@end
