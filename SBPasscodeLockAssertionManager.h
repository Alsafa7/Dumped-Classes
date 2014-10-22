@interface SBPasscodeLockAssertionManager : NSObject
{
	id _preventLockTracker;
	id _lockScreenCameraTracker;
	id _siriTracker;
	id _transientTracker;
}

+ removeAssertion:
+ hasActiveAssertions
+ dealloc
+ init
+ description
+ addAssertion:
- removeAssertion:
- hasActiveAssertions
- dealloc
- init
- description
- addAssertion:
@end
