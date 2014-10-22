@interface NSXPCListener : NSObject
{
	pointer _xconnection;
	id _userQueue;
	pointer reserved0;
	id _delegate;
	id _serviceName;
	usigned long long _state;
	id _reserved1;
	id _reserved2;
}

+ serviceName
+ _initShared
+ dealloc
+ setDelegate:
+ delegate
+ invalidate
+ suspend
+ resume
+ initWithMachServiceName:
+ setOptions:
+ _setQueue:
+ stop
+ _queue
+ endpoint
+ initWithServiceName:
+ finalize
- serviceName
- _initShared
- dealloc
- setDelegate:
- delegate
- invalidate
- suspend
- resume
- initWithMachServiceName:
- setOptions:
- _setQueue:
- stop
- _queue
- endpoint
- initWithServiceName:
- finalize
@end
