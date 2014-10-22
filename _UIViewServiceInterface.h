@interface _UIViewServiceInterface : NSObject
{
	int _terminationStateLock;
	id _terminationError;
	id _terminationHandler;
	BOOL _isTerminated;
	id _terminateInvocation;
	id _serviceBundleIdentifier;
	id _serviceProcessAssertion;
	id _serviceConnection;
	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;
}

+ release
+ retain
+ dealloc
+ retainCount
+ _tryRetain
+ _isDeallocating
+ disconnect
+ connectToDeputyWithInterface:fromExportedHostingObject:connectionHandler:
+ __automatic_invalidation_logic
+ _terminateWithError:
+ setTerminationHandler:
+ _terminateUnconditionallyThen:
+ servicePID
+ serviceAuditToken
+ connection:handleInvocation:isReply:
+ _initWithConnectionInfo:serviceBundleIdentifier:deputyInterfaces:
- release
- retain
- dealloc
- retainCount
- _tryRetain
- _isDeallocating
- disconnect
- connectToDeputyWithInterface:fromExportedHostingObject:connectionHandler:
- __automatic_invalidation_logic
- _terminateWithError:
- setTerminationHandler:
- _terminateUnconditionallyThen:
- servicePID
- serviceAuditToken
- connection:handleInvocation:isReply:
- _initWithConnectionInfo:serviceBundleIdentifier:deputyInterfaces:
@end
