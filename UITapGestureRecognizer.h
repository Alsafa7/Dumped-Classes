@interface UITapGestureRecognizer : UIGestureRecognizer
{
	struct _locationInView;
	id _imp;
	unsigned int _delaysRecognitionForGreaterTapCounts;
	long long _buttonType;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ initWithTarget:action:
+ locationInView:
+ _physicalButtonsBegan:withEvent:
+ touchesCancelled:withEvent:
+ _buttonType
+ _physicalButtonsEnded:withEvent:
+ _physicalButtonsCancelled:withEvent:
+ _touchSloppinessFactor
+ touchesBegan:withEvent:
+ touchesMoved:withEvent:
+ touchesEnded:withEvent:
+ numberOfTouches
+ locationOfTouch:inView:
+ canPreventGestureRecognizer:
+ _setButtonType:
+ numberOfTouchesRequired
+ numberOfTapsRequired
+ setNumberOfTapsRequired:
+ setNumberOfTouchesRequired:
+ location
+ _resetGestureRecognizer
+ setAllowableMovement:
+ _appendSubclassDescription:
+ _shouldRequireFailureOfGestureRecognizer:
+ centroid
+ touches
+ maximumIntervalBetweenSuccessiveTaps
+ tapIsPossibleForTapRecognizer:
+ tapRecognizerRecognizedTap:
+ tapRecognizerFailedToRecognizeTap:
+ allowableMovement
+ maximumSingleTapDuration
+ setMaximumSingleTapDuration:
+ setMaximumIntervalBetweenSuccessiveTaps:
+ _delaysRecognitionForGreaterTapCounts
+ _setDelaysRecognitionForGreaterTapCounts:
- dealloc
- initWithCoder:
- encodeWithCoder:
- initWithTarget:action:
- locationInView:
- _physicalButtonsBegan:withEvent:
- touchesCancelled:withEvent:
- _buttonType
- _physicalButtonsEnded:withEvent:
- _physicalButtonsCancelled:withEvent:
- _touchSloppinessFactor
- touchesBegan:withEvent:
- touchesMoved:withEvent:
- touchesEnded:withEvent:
- numberOfTouches
- locationOfTouch:inView:
- canPreventGestureRecognizer:
- _setButtonType:
- numberOfTouchesRequired
- numberOfTapsRequired
- setNumberOfTapsRequired:
- setNumberOfTouchesRequired:
- location
- _resetGestureRecognizer
- setAllowableMovement:
- _appendSubclassDescription:
- _shouldRequireFailureOfGestureRecognizer:
- centroid
- touches
- maximumIntervalBetweenSuccessiveTaps
- tapIsPossibleForTapRecognizer:
- tapRecognizerRecognizedTap:
- tapRecognizerFailedToRecognizeTap:
- allowableMovement
- maximumSingleTapDuration
- setMaximumSingleTapDuration:
- setMaximumIntervalBetweenSuccessiveTaps:
- _delaysRecognitionForGreaterTapCounts
- _setDelaysRecognitionForGreaterTapCounts:
@end
