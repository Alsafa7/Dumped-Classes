@interface SBUISwitcherDismissAnimationController : SBUIMainScreenAnimationController
{
	id _sliderController;
	id _appContextHostView;
	id _animatingPageView;
	BOOL _finishedSwitcherAnimation;
	BOOL _finishedCrossfadingToHostView;
}

+ _prepareAnimation
+ initWithActivatingApp:deactivatingApp:
+ _cleanupAnimation
+ _animationProgressDependency
+ _applicationDependencyStateChanged
+ _noteSwitcherAnimationFinished
+ _crossfadeApp
+ _noteCrossfadeDidFinish
+ _reportAnimationFinishedIfNecessary
+ dealloc
+ _startAnimation
- _prepareAnimation
- initWithActivatingApp:deactivatingApp:
- _cleanupAnimation
- _animationProgressDependency
- _applicationDependencyStateChanged
- _noteSwitcherAnimationFinished
- _crossfadeApp
- _noteCrossfadeDidFinish
- _reportAnimationFinishedIfNecessary
- dealloc
- _startAnimation
@end
