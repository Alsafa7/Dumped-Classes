@interface SBUIAnimationDosidoTransitionController : SBUIMainScreenAnimationController
{
	id _transitionWindow;
	id _transformContainerParent;
	id _transformContainer;
	id _fromAppContextHostView;
	id _fromView;
	id _toView;
	long long _fromOrientation;
	BOOL _fromNC;
	BOOL _fromCC;
	BOOL _fromAssistant;
	BOOL _requiresHostView;
}

+ _prepareAnimation
+ initWithActivatingApp:deactivatingApp:
+ _getTransitionWindow
+ _cleanupAnimation
+ _animationShouldStart
+ _animationProgressDependency
+ hideRealFromView
+ captureFlagsForActivatingDisplay:
+ orientationAtLaunch
+ _kickOffAnimation
+ _setFromView:
+ _rotateViewIfNecessary:inverted:
+ dealloc
+ setToView:
+ _startAnimation
+ _setHidden:
- _prepareAnimation
- initWithActivatingApp:deactivatingApp:
- _getTransitionWindow
- _cleanupAnimation
- _animationShouldStart
- _animationProgressDependency
- hideRealFromView
- captureFlagsForActivatingDisplay:
- orientationAtLaunch
- _kickOffAnimation
- _setFromView:
- _rotateViewIfNecessary:inverted:
- dealloc
- setToView:
- _startAnimation
- _setHidden:
@end
