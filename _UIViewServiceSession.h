@interface _UIViewServiceSession : NSObject
{
	id _queue;
	id _connection;
	id _connectionHandlers;
	id _connectionHandlersLock;
	id _invalidationInvocation;
	id _deputies;
	id _terminationHandler;
	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;
}

+ release
+ retain
+ dealloc
+ retainCount
+ methodSignatureForSelector:
+ _tryRetain
+ _isDeallocating
+ forwardInvocation:
+ __automatic_invalidation_logic
+ setTerminationHandler:
+ __requestConnectionToDeputyOfType:withReplyHandler:
+ _invalidateUnconditionallyThen:
+ _deputyClassForConnectionSelector:
+ __prototype_requestConnectionToDeputyFromHostObject:replyHandler:
+ checkDeputyForRotation:
+ __requestConnectionToDeputyOfClass:fromHostObject:replyHandler:
+ unregisterDeputyClass:
+ registerDeputyClass:withConnectionHandler:
+ deputy:didFailWithError:
+ connection:handleInvocation:isReply:
+ viewControllerOperator:didCreateServiceViewControllerOfClass:
+ terminationHandler
- release
- retain
- dealloc
- retainCount
- methodSignatureForSelector:
- _tryRetain
- _isDeallocating
- forwardInvocation:
- __automatic_invalidation_logic
- setTerminationHandler:
- __requestConnectionToDeputyOfType:withReplyHandler:
- _invalidateUnconditionallyThen:
- _deputyClassForConnectionSelector:
- __prototype_requestConnectionToDeputyFromHostObject:replyHandler:
- checkDeputyForRotation:
- __requestConnectionToDeputyOfClass:fromHostObject:replyHandler:
- unregisterDeputyClass:
- registerDeputyClass:withConnectionHandler:
- deputy:didFailWithError:
- connection:handleInvocation:isReply:
- viewControllerOperator:didCreateServiceViewControllerOfClass:
- terminationHandler
@end
