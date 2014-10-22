@interface IMAVDaemonListener : NSObject
{
	id _handlers;
	id _protocol;
	BOOL _setupComplete;
	BOOL _postedSetupComplete;
}

+ dealloc
+ init
+ methodSignatureForSelector:
+ forwardInvocation:
+ setupComplete:info:
+ _noteDisconnected
+ addHandler:
+ removeHandler:
+ handlers
+ isSetupComplete
- dealloc
- init
- methodSignatureForSelector:
- forwardInvocation:
- setupComplete:info:
- _noteDisconnected
- addHandler:
- removeHandler:
- handlers
- isSetupComplete
@end
