@interface _UIViewServiceInterfaceConnectionRequest : NSObject
{
	id _connectionHandler;
	id _serviceBundleIdentifier;
	id _queue;
	BOOL _isCancelled;
	id _cancellationError;
	id _cancellationInvocation;
	int _sessionRequestNotifyToken;
	id _serviceProcessAssertion;
	id _serviceSessionConnection;
	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;
}

+ release
+ retain
+ dealloc
+ retainCount
+ _tryRetain
+ _isDeallocating
+ _cancelUnconditionallyThen:
+ _cancelWithError:
+ __automatic_invalidation_logic
+ _launchService
+ _createProcessAssertion
+ _establishConnection
+ _didConnectToService
- release
- retain
- dealloc
- retainCount
- _tryRetain
- _isDeallocating
- _cancelUnconditionallyThen:
- _cancelWithError:
- __automatic_invalidation_logic
- _launchService
- _createProcessAssertion
- _establishConnection
- _didConnectToService
@end
