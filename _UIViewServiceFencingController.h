@interface _UIViewServiceFencingController : NSObject
{
	int _lock;
	id _pendingFenceSendRights;
	id _resumeActions;
	usigned long long _expectedParticipatingFencingProxyCount;
	id _fencingControlTimeoutTimer;
}

+ dealloc
+ init
+ fencingControlProxy:didBeginFencingWithSendRight:expectedParticipatingFencingProxyCount:
+ fencingControlProxy:didEndFencingWithSendRight:
+ _fencingControlTimedOut
- dealloc
- init
- fencingControlProxy:didBeginFencingWithSendRight:expectedParticipatingFencingProxyCount:
- fencingControlProxy:didEndFencingWithSendRight:
- _fencingControlTimedOut
@end
