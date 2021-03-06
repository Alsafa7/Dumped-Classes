@interface _UIViewControllerTransitionCoordinator : NSObject
{
	id __mainContext;
	id __alongsideAnimations;
	id __alongsideAnimationViews;
	id __alongsideCompletions;
	id __interactiveChangeHandlers;
}

+ dealloc
+ containerView
+ viewControllerForKey:
+ isInteractive
+ percentComplete
+ _setAlongsideAnimations:
+ _alongsideAnimations
+ animateAlongsideTransition:completion:
+ isCancelled
+ animateAlongsideTransitionInView:animation:completion:
+ completionCurve
+ transitionDuration
+ _alongsideAnimationViews
+ notifyWhenInteractionEndsUsingBlock:
+ _mainContext
+ initiallyInteractive
+ presentationStyle
+ isAnimated
+ initWithMainContext:
+ _alongsideCompletions
+ _setAlongsideCompletions:
+ _applyBlocks:releaseBlocks:
+ _interactiveChangeHandlers
+ _setInteractiveChangeHandlers:
+ _setMainContext:
+ _setAlongsideAnimationViews:
+ _alongsideAnimations:
+ _alongsideCompletions:
+ _interactiveChangeHandlers:
+ completionVelocity
+ isCompleting
+ handlerToInvokeOnInteractivityChanges:
- dealloc
- containerView
- viewControllerForKey:
- isInteractive
- percentComplete
- _setAlongsideAnimations:
- _alongsideAnimations
- animateAlongsideTransition:completion:
- isCancelled
- animateAlongsideTransitionInView:animation:completion:
- completionCurve
- transitionDuration
- _alongsideAnimationViews
- notifyWhenInteractionEndsUsingBlock:
- _mainContext
- initiallyInteractive
- presentationStyle
- isAnimated
- initWithMainContext:
- _alongsideCompletions
- _setAlongsideCompletions:
- _applyBlocks:releaseBlocks:
- _interactiveChangeHandlers
- _setInteractiveChangeHandlers:
- _setMainContext:
- _setAlongsideAnimationViews:
- _alongsideAnimations:
- _alongsideCompletions:
- _interactiveChangeHandlers:
- completionVelocity
- isCompleting
- handlerToInvokeOnInteractivityChanges:
@end
