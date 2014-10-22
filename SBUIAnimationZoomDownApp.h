@interface SBUIAnimationZoomDownApp : SBUIMainScreenAnimationController
{
	id _viewToAnimate;
	id _appStatusBarTransitionInfo;
}

+ _prepareAnimation
+ _cleanupAnimation
+ animationDelay
+ animateFakeStatusBarWithParameters:
+ prepareZoom
+ animateZoomWithCompletion:
+ cleanupZoom
+ initWithDeactivatingApp:
+ appContext
+ appStatusBarTransitionInfoWithStartEffectivelyHidden:endStyleRequest:endOrientation:
+ prefersLayerHostSnapshot
+ dealloc
+ animationDuration
+ _startAnimation
- _prepareAnimation
- _cleanupAnimation
- animationDelay
- animateFakeStatusBarWithParameters:
- prepareZoom
- animateZoomWithCompletion:
- cleanupZoom
- initWithDeactivatingApp:
- appContext
- appStatusBarTransitionInfoWithStartEffectivelyHidden:endStyleRequest:endOrientation:
- prefersLayerHostSnapshot
- dealloc
- animationDuration
- _startAnimation
@end
