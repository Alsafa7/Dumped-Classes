@interface BBXPCConnection : NSObject
{
	id _remoteProxy;
	id _queue;
	id _target;
	id _delegate;
	BOOL _established;
	BOOL _invalidated;
	id _protocol;
}

+ dealloc
+ setDelegate:
+ init
+ description
+ delegate
+ invalidate
+ isValid
+ resume
+ connection
+ _queue
+ _invalidateConnection
+ _noteConnectionStateDidChange:
+ initWithQueue:target:remoteProtocol:
+ established
+ proxy
- dealloc
- setDelegate:
- init
- description
- delegate
- invalidate
- isValid
- resume
- connection
- _queue
- _invalidateConnection
- _noteConnectionStateDidChange:
- initWithQueue:target:remoteProtocol:
- established
- proxy
@end
