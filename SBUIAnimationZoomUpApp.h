@interface SBUIAnimationZoomUpApp : SBUIMainScreenAnimationController
{
	id _contextHostView;
	BOOL _zoomHostView;
	id _appStatusBarTransitionInfo;
	long long _animationTransition;
	BOOL _finishedZooming;
	BOOL _finishedActivating;
	BOOL _finishedCrossfadingToHostView;
	BOOL _animationFinished;
	BOOL _fromSwitcher;
	BOOL _fromNC;
	BOOL _fromCC;
	BOOL _fromAssistant;
	id _viewToAnimate;
}

+ _prepareAnimation
+ _cleanupAnimation
+ initWithActivatingApp:
+ animationDelay
+ animateFakeStatusBarWithParameters:
+ prepareZoom
+ animateZoomWithCompletion:
+ cleanupZoom
+ _maybeStartCrossfade
+ _noteContextHostCrossfadeDidFinish
+ _maybeReportAnimationFinished
+ _animationShouldStart
+ _animationProgressDependency
+ isReasonableMomentToInterrupt
+ _applicationDependencyStateChanged
+ appStatusBarTransitionInfoWithStartStyleRequest:startOrientation:
+ _noteZoomDidFinish
+ noteDependencyDidInvalidate
+ _shouldWaitForSiriDismissBeforeZooming
+ animationTransition
+ setAnimationTransition:
+ dealloc
+ animationDuration
+ _startAnimation
- _prepareAnimation
- _cleanupAnimation
- initWithActivatingApp:
- animationDelay
- animateFakeStatusBarWithParameters:
- prepareZoom
- animateZoomWithCompletion:
- cleanupZoom
- _maybeStartCrossfade
- _noteContextHostCrossfadeDidFinish
- _maybeReportAnimationFinished
- _animationShouldStart
- _animationProgressDependency
- isReasonableMomentToInterrupt
- _applicationDependencyStateChanged
- appStatusBarTransitionInfoWithStartStyleRequest:startOrientation:
- _noteZoomDidFinish
- noteDependencyDidInvalidate
- _shouldWaitForSiriDismissBeforeZooming
- animationTransition
- setAnimationTransition:
- dealloc
- animationDuration
- _startAnimation
@end
