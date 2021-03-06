@interface SBUIPasscodeLockNumberPad : UIView
{
	id _numberPad;
	id _delegate;
	id _leftPaddingView;
	id _rightPaddingView;
	id _bottomPaddingView;
	id _emergencyCallButton;
	id _backspaceButton;
	id _cancelButton;
	id _downButton;
	BOOL _showsBackspaceButton;
	BOOL _showsEmergencyCallButton;
	BOOL _showsCancelButton;
	id _customBackgroundColor;
}

+ dealloc
+ setDelegate:
+ delegate
+ initWithDefaultSize
+ setShowsCancelButton:
+ showsCancelButton
+ setBackgroundAlpha:
+ buttons
+ setShowsEmergencyCallButton:
+ setCustomBackgroundColor:
+ showsEmergencyCallButton
+ _setLuminosityBoost:
+ _fontForAncillaryButton
+ _cancelButtonHit
+ _backspaceButtonHit
+ _emergencyCallButtonHit
+ _configureAdditionalButtons
+ _numberPadTouchDown:forEvent:
+ _numberPadTouchUp:forEvent:
+ _numberPadTouchCancelled:forEvent:
+ _numberPadTouchDrag:forEvent:
+ setDownButton:
+ setShowsBackspaceButton:
+ _distanceToTopOfFirstButton
+ showsBackspaceButton
+ downButton
- dealloc
- setDelegate:
- delegate
- initWithDefaultSize
- setShowsCancelButton:
- showsCancelButton
- setBackgroundAlpha:
- buttons
- setShowsEmergencyCallButton:
- setCustomBackgroundColor:
- showsEmergencyCallButton
- _setLuminosityBoost:
- _fontForAncillaryButton
- _cancelButtonHit
- _backspaceButtonHit
- _emergencyCallButtonHit
- _configureAdditionalButtons
- _numberPadTouchDown:forEvent:
- _numberPadTouchUp:forEvent:
- _numberPadTouchCancelled:forEvent:
- _numberPadTouchDrag:forEvent:
- setDownButton:
- setShowsBackspaceButton:
- _distanceToTopOfFirstButton
- showsBackspaceButton
- downButton
@end
