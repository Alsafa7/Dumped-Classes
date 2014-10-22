@interface _UIGestureRecognizerFailureMap : NSObject
{
	id _gestureRecognizers;
	char *_failureMap;
	int _unmetFailureRequirementCount;
	int _unmetFailureDependentCount;
}

+ dealloc
+ description
+ gestureRecognizerDeallocated:
+ reloadFailureMap
+ gestureRecognizerFinished:withEvent:
+ isGestureRecognizerWaitingForGestureRecognizersToFail:
+ hasUnmetFailureRequirementsOrDependents
+ gestureRecognizerBecameDirty:
+ rebuildFailureMap
+ _gestureRecognizerFinished:withEvent:
+ _queueRecognizersForResetIfFinished
+ initWithRelatedGestures:
- dealloc
- description
- gestureRecognizerDeallocated:
- reloadFailureMap
- gestureRecognizerFinished:withEvent:
- isGestureRecognizerWaitingForGestureRecognizersToFail:
- hasUnmetFailureRequirementsOrDependents
- gestureRecognizerBecameDirty:
- rebuildFailureMap
- _gestureRecognizerFinished:withEvent:
- _queueRecognizersForResetIfFinished
- initWithRelatedGestures:
@end
