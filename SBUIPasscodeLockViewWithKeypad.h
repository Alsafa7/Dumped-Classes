@interface SBUIPasscodeLockViewWithKeypad : SBUIPasscodeLockViewBase
{
	id _statusTitleView;
	id _statusBackgroundView;
	id _numberPad;
	id _topToStatusFieldOrEntryFieldFiller;
	id _entryFieldToNumberPadFiller;
	id _leftToNumberPadFiller;
	id _rightToNumberPadFiller;
	id _bottomToNumberPadFiller;
	id _lastCharacterBeforeBackspace;
	BOOL _undoInputOnTouchCancellation;
}

+ dealloc
+ init
+ layoutSubviews
+ reset
+ setBackgroundAlpha:
+ setShowsEmergencyCallButton:
+ resetForFailedPasscode
+ backgroundAlpha
+ setCustomBackgroundColor:
+ setShowsStatusField:
+ _luminanceBoostDidChange
+ _updateStatusText:animated:
+ _toggleForStatusField
+ _notifyDelegatePasscodeEntered
+ _notifyDelegatePasscodeCancelled
+ _statusTitleWidth
+ passcodeEntryFieldDidAcceptEntry:
+ passcodeEntryFieldDidCancelEntry:
+ passcodeEntryField:shouldInsertText:
+ passcodeEntryFieldTextDidChange:
+ passcodeLockNumberPad:keyDown:
+ passcodeLockNumberPad:keyUp:
+ passcodeLockNumberPad:keyCancelled:
+ passcodeLockNumberPadCancelButtonHit:
+ passcodeLockNumberPadBackspaceButtonHit:
+ passcodeLockNumberPadEmergencyCallButtonHit:
+ _numberPad
+ _includesStatusView
+ _newStatusTitleView
+ setStatusTitleView:
+ statusTitleView
+ _newEntryField
+ _setHasInput:
+ _numberPadOffsetFromTopOfScreen
+ _entryFieldBottomYDistanceFromNumberPadTopButton
+ _layoutStatusView
+ setLastCharacterBeforeBackspace:
+ _layoutStatusView:
+ _statusTitleViewTitleFont
+ _statusTitleViewHeight
+ _numericEntryFieldIfExists
+ _noteBackspaceHit
+ _noteStringEntered:eligibleForPlayingSounds:
+ _noteKeyUp:
+ _statusTitleView
+ _statusBackgroundView
+ _undoInputOnTouchCancellation
+ _setUndoInputOnTouchCancellation:
+ lastCharacterBeforeBackspace
+ passcode
- dealloc
- init
- layoutSubviews
- reset
- setBackgroundAlpha:
- setShowsEmergencyCallButton:
- resetForFailedPasscode
- backgroundAlpha
- setCustomBackgroundColor:
- setShowsStatusField:
- _luminanceBoostDidChange
- _updateStatusText:animated:
- _toggleForStatusField
- _notifyDelegatePasscodeEntered
- _notifyDelegatePasscodeCancelled
- _statusTitleWidth
- passcodeEntryFieldDidAcceptEntry:
- passcodeEntryFieldDidCancelEntry:
- passcodeEntryField:shouldInsertText:
- passcodeEntryFieldTextDidChange:
- passcodeLockNumberPad:keyDown:
- passcodeLockNumberPad:keyUp:
- passcodeLockNumberPad:keyCancelled:
- passcodeLockNumberPadCancelButtonHit:
- passcodeLockNumberPadBackspaceButtonHit:
- passcodeLockNumberPadEmergencyCallButtonHit:
- _numberPad
- _includesStatusView
- _newStatusTitleView
- setStatusTitleView:
- statusTitleView
- _newEntryField
- _setHasInput:
- _numberPadOffsetFromTopOfScreen
- _entryFieldBottomYDistanceFromNumberPadTopButton
- _layoutStatusView
- setLastCharacterBeforeBackspace:
- _layoutStatusView:
- _statusTitleViewTitleFont
- _statusTitleViewHeight
- _numericEntryFieldIfExists
- _noteBackspaceHit
- _noteStringEntered:eligibleForPlayingSounds:
- _noteKeyUp:
- _statusTitleView
- _statusBackgroundView
- _undoInputOnTouchCancellation
- _setUndoInputOnTouchCancellation:
- lastCharacterBeforeBackspace
- passcode
@end
