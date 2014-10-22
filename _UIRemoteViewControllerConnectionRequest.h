@interface _UIRemoteViewControllerConnectionRequest : NSObject
{
	BOOL _useXPCObjects;
	id _handler;
	id _viewServiceBundleIdentifier;
	id _viewControllerClassName;
	id _serializedAppearanceCustomizations;
	BOOL _legacyAppearance;
	id _exportedHostingObject;
	id _serviceViewControllerDeputyInterface;
	id _cancelInvocationForCurrentOperation;
	id _connectionInfo;
	id _queue;
	BOOL _isCancelledOrComplete;
	id _error;
	id _requestCancellationInvocation;
}

+ dealloc
+ _cancelUnconditionallyThen:
+ _connectToViewService
+ _cancelWithError:
+ _connectToViewControllerOperator
+ _sendServiceViewControllerRequest
+ _connectToDeputyWithInterface:orType:fromExportedHostingObject:successHandler:
+ _connectToTextEffectsOperator
+ _sendServiceTextEffectsRequest
+ _connectToServiceViewController
+ _connectToViewControllerControlMessageDeputy
+ _didFinishEstablishingConnection
- dealloc
- _cancelUnconditionallyThen:
- _connectToViewService
- _cancelWithError:
- _connectToViewControllerOperator
- _sendServiceViewControllerRequest
- _connectToDeputyWithInterface:orType:fromExportedHostingObject:successHandler:
- _connectToTextEffectsOperator
- _sendServiceTextEffectsRequest
- _connectToServiceViewController
- _connectToViewControllerControlMessageDeputy
- _didFinishEstablishingConnection
@end
