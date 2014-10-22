@interface SBLockScreenSlideUpController : NSObject
{
	BOOL _isInScreenOffMode;
	id _slidingStatusBarView;
	id _lockScreenView;
	id _bounceAnimator;
	id _dynamicAnimation;
	id _disableStatusBarAssertion;
}

+ setInScreenOffMode:
+ lockScreenView
+ setLockScreenView:
+ bounceAnimator
+ cleanupFromGesture
+ translateSlidingViewByY:
+ prepareForSlideUpAnimation
+ finalizeGesture
+ hideSlidingStatusBar
+ abortDynamicAnimationForScreenOff
+ setGrabberOnLockScreen:
+ _newBounceAnimatorWithGrabberView:
+ _newDynamicAnimationForGestureSucceeded:targetValue:withInitialVelocity:
+ gestureDidEnd:
+ setDisableStatusBarAssertion:
+ gestureWillEndWithVelocity:
+ disableStatusBarAssertion
+ dealloc
+ grabberView
- setInScreenOffMode:
- lockScreenView
- setLockScreenView:
- bounceAnimator
- cleanupFromGesture
- translateSlidingViewByY:
- prepareForSlideUpAnimation
- finalizeGesture
- hideSlidingStatusBar
- abortDynamicAnimationForScreenOff
- setGrabberOnLockScreen:
- _newBounceAnimatorWithGrabberView:
- _newDynamicAnimationForGestureSucceeded:targetValue:withInitialVelocity:
- gestureDidEnd:
- setDisableStatusBarAssertion:
- gestureWillEndWithVelocity:
- disableStatusBarAssertion
- dealloc
- grabberView
@end
