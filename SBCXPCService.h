@interface SBCXPCService : NSObject
{
	BOOL _isConnecting;
	id _serviceProxy;
	id _queue;
	id _xpcConnection;
	id _clientConfiguration;
	id _pendingServiceCompletionHandlers;
	Class _serviceInterfaceClass;
}

+ isConnecting
+ dealloc
+ queue
+ xpcConnection
+ closeServiceConnection
+ _onQueueCloseServiceConnection
+ serviceProxy
+ initWithServiceInterfaceClass:clientConfiguration:
+ didConnectToService
+ sendMessage:withClientCompletionHandler:messageBlock:
+ setClientConfiguration:
+ _openServiceConnection
+ clientConfiguration
+ _onQueueInvalidateOutstandingRequests:
+ _enqueueMessage:withClientCompletionHandler:
+ _dequeueRequestWithEnqueuedToken:
+ _invalidateOutstandingRequests:
+ pendingServiceCompletionHandlers
+ serviceInterfaceClass
+ .cxx_destruct
- isConnecting
- dealloc
- queue
- xpcConnection
- closeServiceConnection
- _onQueueCloseServiceConnection
- serviceProxy
- initWithServiceInterfaceClass:clientConfiguration:
- didConnectToService
- sendMessage:withClientCompletionHandler:messageBlock:
- setClientConfiguration:
- _openServiceConnection
- clientConfiguration
- _onQueueInvalidateOutstandingRequests:
- _enqueueMessage:withClientCompletionHandler:
- _dequeueRequestWithEnqueuedToken:
- _invalidateOutstandingRequests:
- pendingServiceCompletionHandlers
- serviceInterfaceClass
- .cxx_destruct
@end
