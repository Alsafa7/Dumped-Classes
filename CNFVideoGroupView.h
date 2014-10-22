@interface CNFVideoGroupView : UIControl
{
	id _displayLink;
	struct _velocity;
	struct _target;
	struct _cornerLocationsRect;
	BOOL _startedThrowAnimation;
	long long _corner;
}

+ initWithFrame:
+ dealloc
+ gestureRecognizerShouldBegin:
+ gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:
+ gestureRecognizer:shouldReceiveTouch:
+ addPanningGestureRecognizer
+ setCornerLocationsRect:
+ centerPointForCurrentVideoGroupCorner
+ refreshPositionInCorner
+ cancelThrowAnimation
+ cornerLocationsRect
+ handlePanDetected:
+ setCorner:
+ startThrowAnimation
+ finishedThrowAnimation
+ transformedCenter
+ handlePanGestureFinished:
+ updateThrowAnimation:
+ setTransformForNewCenter:
+ _gridViewRubberBandValueForValue:target:timeInterval:velocity:
- initWithFrame:
- dealloc
- gestureRecognizerShouldBegin:
- gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:
- gestureRecognizer:shouldReceiveTouch:
- addPanningGestureRecognizer
- setCornerLocationsRect:
- centerPointForCurrentVideoGroupCorner
- refreshPositionInCorner
- cancelThrowAnimation
- cornerLocationsRect
- handlePanDetected:
- setCorner:
- startThrowAnimation
- finishedThrowAnimation
- transformedCenter
- handlePanGestureFinished:
- updateThrowAnimation:
- setTransformForNewCenter:
- _gridViewRubberBandValueForValue:target:timeInterval:velocity:
@end
