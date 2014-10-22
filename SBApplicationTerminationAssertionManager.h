@interface SBApplicationTerminationAssertionManager : NSObject
{
	id _assertionsByDisplayId;
}

+ terminationAssertionsForDisplayId:
+ terminationAssertionsForDisplayId:withReason:
+ acquireTerminationAssertionForDisplayId:withReason:error:
+ _canAcquireTerminationAssertionForDisplayId:reason:error:
+ _addTerminationAssertion:
+ _removeTerminationAssertion:
+ dealloc
+ init
- terminationAssertionsForDisplayId:
- terminationAssertionsForDisplayId:withReason:
- acquireTerminationAssertionForDisplayId:withReason:error:
- _canAcquireTerminationAssertionForDisplayId:reason:error:
- _addTerminationAssertion:
- _removeTerminationAssertion:
- dealloc
- init
@end
