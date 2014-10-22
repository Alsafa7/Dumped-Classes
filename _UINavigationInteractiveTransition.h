@interface _UINavigationInteractiveTransition : _UINavigationInteractiveTransitionBase
{
	id _edgePanRecognizer;
}

+ dealloc
+ gestureRecognizerView
+ startInteractiveTransition
+ setNotInteractiveTransition
+ gestureRecognizerShouldBegin:
+ gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:
+ gestureRecognizer:shouldReceiveTouch:
+ _gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:
+ _configureNavigationGesture
+ initWithViewController:animator:
+ screenEdgePanGestureRecognizer
- dealloc
- gestureRecognizerView
- startInteractiveTransition
- setNotInteractiveTransition
- gestureRecognizerShouldBegin:
- gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:
- gestureRecognizer:shouldReceiveTouch:
- _gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:
- _configureNavigationGesture
- initWithViewController:animator:
- screenEdgePanGestureRecognizer
@end
