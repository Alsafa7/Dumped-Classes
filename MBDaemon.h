@interface MBDaemon : NSObject
{
	unsigned int _assertions;
	id _assertionsQueue;
	id _idleTimer;
	id _dispatchThreadLimitTimer;
	unsigned int _powerAssertionID;
	unsigned int _powerAssertions;
}

+ _incrementWorkAssertions
+ releaseWorkAssertion
+ reboot
+ holdWorkAssertion
+ setupSignalHandlers
+ _checkDispatchThreadLimit
+ _handleSignal:
+ _decrementWorkAssertions
+ resetIdleTimer
+ dealloc
+ init
+ run
+ eventQueue
+ shutdown
+ _scheduleIdleTimer
- _incrementWorkAssertions
- releaseWorkAssertion
- reboot
- holdWorkAssertion
- setupSignalHandlers
- _checkDispatchThreadLimit
- _handleSignal:
- _decrementWorkAssertions
- resetIdleTimer
- dealloc
- init
- run
- eventQueue
- shutdown
- _scheduleIdleTimer
@end
