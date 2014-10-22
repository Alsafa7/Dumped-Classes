@interface SBLockScreenBounceAnimator : NSObject
{
	id _tapExcludedViews;
	BOOL _isAnimating;
	BOOL _bounceEnabled;
	id _view;
	id _system;
	id _animator;
	id _item;
	id _behavior;
	id _tapRecognizer;
	id _panRecognizer;
	id _prepareBlock;
	id _translateBlock;
	id _canceledBlock;
	id _completedBlock;
	id _settings;
}

+ setBounceEnabled:
+ removeTapExcludedView:
+ addTapExcludedView:
+ initWithView:allowPan:
+ setTranslateBlock:
+ setCompletedBlock:
+ setCanceledBlock:
+ cancelAnimation
+ setPrepareBlock:
+ _createAnimator
+ _addTapRecognizer
+ _addPanRecognizer
+ _removeAnimator
+ _resetAnimator
+ _removeTapRecognizer
+ _beginAnimating
+ responder:touchesBegan:withEvent:
+ responder:touchesEnded:withEvent:
+ responder:touchesCancelled:withEvent:
+ tapExcludedViews
+ prepareBlock
+ translateBlock
+ canceledBlock
+ completedBlock
+ dealloc
+ isAnimating
+ settings:changedValueForKey:
+ setSettings:
+ settings
+ _handlePanGesture:
+ _handleTapGesture:
+ dynamicAnimatorDidPause:
+ _updateSettings
- setBounceEnabled:
- removeTapExcludedView:
- addTapExcludedView:
- initWithView:allowPan:
- setTranslateBlock:
- setCompletedBlock:
- setCanceledBlock:
- cancelAnimation
- setPrepareBlock:
- _createAnimator
- _addTapRecognizer
- _addPanRecognizer
- _removeAnimator
- _resetAnimator
- _removeTapRecognizer
- _beginAnimating
- responder:touchesBegan:withEvent:
- responder:touchesEnded:withEvent:
- responder:touchesCancelled:withEvent:
- tapExcludedViews
- prepareBlock
- translateBlock
- canceledBlock
- completedBlock
- dealloc
- isAnimating
- settings:changedValueForKey:
- setSettings:
- settings
- _handlePanGesture:
- _handleTapGesture:
- dynamicAnimatorDidPause:
- _updateSettings
@end