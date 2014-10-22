@interface SBIconAnimator : NSObject
{
	double _fraction;
	BOOL _startedAnimation;
	BOOL _startAnimationAfterRotationEnds;
	BOOL _windowIsRotating;
	id _animationWindow;
	id _pendedAnimationContexts;
	id _instanceIdentifier;
	BOOL _invalidated;
	id _delegate;
	id _settings;
	id _folderController;
}

+ _prepareAnimation
+ _cleanupAnimation
+ initWithFolderController:
+ folderController
+ _setAnimationFraction:
+ _numberOfSignificantAnimations
+ _animateToFraction:afterDelay:withSharedCompletion:
+ centralAnimationFactory
+ setFraction:
+ animateToFraction:afterDelay:withCompletion:
+ invalidated
+ setInvalidated:
+ _windowFinishedRotating
+ _invalidateCompletions
+ _animateToFractionFromContext:
+ _animateToFractionFromPendingContexts
+ _isDelayedForRotation
+ _centralAnimationFactory
+ animationWindow
+ prepare
+ dealloc
+ setDelegate:
+ delegate
+ setSettings:
+ settings
+ cleanup
+ referenceView
- _prepareAnimation
- _cleanupAnimation
- initWithFolderController:
- folderController
- _setAnimationFraction:
- _numberOfSignificantAnimations
- _animateToFraction:afterDelay:withSharedCompletion:
- centralAnimationFactory
- setFraction:
- animateToFraction:afterDelay:withCompletion:
- invalidated
- setInvalidated:
- _windowFinishedRotating
- _invalidateCompletions
- _animateToFractionFromContext:
- _animateToFractionFromPendingContexts
- _isDelayedForRotation
- _centralAnimationFactory
- animationWindow
- prepare
- dealloc
- setDelegate:
- delegate
- setSettings:
- settings
- cleanup
- referenceView
@end