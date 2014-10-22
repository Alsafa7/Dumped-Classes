@interface UIPercentDrivenInteractiveTransition : NSObject
{
	double _duration;
	BOOL _didCommitAnimations;
	BOOL __transitionInterrupted;
	double _completionSpeed;
	long long _completionCurve;
	id __originalFillMode;
	id __uuid;
}

+ dealloc
+ init
+ _resetInteractionController
+ cancelInteractiveTransition
+ finishInteractiveTransition
+ _stopInteractiveTransition
+ percentComplete
+ startInteractiveTransition:
+ updateInteractiveTransition:
+ duration
+ setCompletionSpeed:
+ _uuid
+ _setDuration:
+ completionCurve
+ completionSpeed
+ _setOriginalFillMode:
+ _setUuid:
+ _isTransitionInterrupted
+ _setTransitionInterrupted:
+ _stopInteractiveTransition:
+ _updateInteractiveTransition:percent:isFinished:didComplete:
+ startInteractiveTransition:containerViews:animation:
+ setCompletionCurve:
+ _originalFillMode
- dealloc
- init
- _resetInteractionController
- cancelInteractiveTransition
- finishInteractiveTransition
- _stopInteractiveTransition
- percentComplete
- startInteractiveTransition:
- updateInteractiveTransition:
- duration
- setCompletionSpeed:
- _uuid
- _setDuration:
- completionCurve
- completionSpeed
- _setOriginalFillMode:
- _setUuid:
- _isTransitionInterrupted
- _setTransitionInterrupted:
- _stopInteractiveTransition:
- _updateInteractiveTransition:percent:isFinished:didComplete:
- startInteractiveTransition:containerViews:animation:
- setCompletionCurve:
- _originalFillMode
@end
