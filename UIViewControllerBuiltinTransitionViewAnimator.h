@interface UIViewControllerBuiltinTransitionViewAnimator : NSObject
{
	int _transition;
	id _transitionContext;
	BOOL _removeFromView;
	id _delegate;
	id _toView;
	id _fromView;
}

+ setDelegate:
+ delegate
+ transitionDuration:
+ animateTransition:
+ durationForTransition:
+ transitionViewDidStart:
+ transitionViewShouldUseViewControllerCallbacks
+ transitionViewDidComplete:fromView:toView:removeFromView:
+ transitionView:endOriginForToView:forTransition:defaultOrigin:
+ transitionView:beginOriginForToView:forTransition:defaultOrigin:
+ transitionView:endOriginForFromView:forTransition:defaultOrigin:
+ transitionView:startCustomTransitionWithDuration:
+ fromView
+ toView
+ initWithTransition:
+ setToView:
+ setFromView:
+ setRemoveFromView:
+ removeFromView
- setDelegate:
- delegate
- transitionDuration:
- animateTransition:
- durationForTransition:
- transitionViewDidStart:
- transitionViewShouldUseViewControllerCallbacks
- transitionViewDidComplete:fromView:toView:removeFromView:
- transitionView:endOriginForToView:forTransition:defaultOrigin:
- transitionView:beginOriginForToView:forTransition:defaultOrigin:
- transitionView:endOriginForFromView:forTransition:defaultOrigin:
- transitionView:startCustomTransitionWithDuration:
- fromView
- toView
- initWithTransition:
- setToView:
- setFromView:
- setRemoveFromView:
- removeFromView
@end
