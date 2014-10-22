@interface GKEventEmitter : NSObject
{
	id _listeners;
	id _supportedProtocols;
	id _queuedEvents;
}

+ registerListener:
+ unregisterListener:
+ unregisterAllListeners
+ methodSignatureForProtocol:selector:
+ initWithSupportedProtocols:
+ setSupportedProtocols:
+ setQueuedEvents:
+ dispatchQueuedEventsToListener:
+ invocationForProtocol:selector:
+ supportedProtocols
+ queuedEvents
+ listeners
+ setListeners:
+ listenerRegisteredForSelector:
+ dealloc
+ methodSignatureForSelector:
+ forwardInvocation:
- registerListener:
- unregisterListener:
- unregisterAllListeners
- methodSignatureForProtocol:selector:
- initWithSupportedProtocols:
- setSupportedProtocols:
- setQueuedEvents:
- dispatchQueuedEventsToListener:
- invocationForProtocol:selector:
- supportedProtocols
- queuedEvents
- listeners
- setListeners:
- listenerRegisteredForSelector:
- dealloc
- methodSignatureForSelector:
- forwardInvocation:
@end
