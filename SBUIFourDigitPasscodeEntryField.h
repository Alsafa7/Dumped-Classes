@interface SBUIFourDigitPasscodeEntryField : SBUINumericPasscodeEntryFieldBase
{
	id _leftPaddingView;
	id _rightPaddingView;
	id _characterIndicatorsContainerView;
	id _characterIndicators;
	double _backgroundAlpha;
	id _springView;
	id _springViewParent;
}

+ dealloc
+ layoutSubviews
+ initWithDefaultSize
+ reset
+ setBackgroundAlpha:
+ setCustomBackgroundColor:
+ _setLuminosityBoost:
+ _resetForFailedPasscode:playUnlockFailedSound:
+ _autofillForMesaWithCompletion:
+ _entryFieldBoundsWithXOffset:
+ _entryFieldPaddingOutsideRing
+ _appendString:
+ _deleteLastCharacter
+ _entryFieldIndicatorDiameter
+ _entryFieldIndicatorWidthPadding
+ _hasAnyCharacters
+ _viewSize
- dealloc
- layoutSubviews
- initWithDefaultSize
- reset
- setBackgroundAlpha:
- setCustomBackgroundColor:
- _setLuminosityBoost:
- _resetForFailedPasscode:playUnlockFailedSound:
- _autofillForMesaWithCompletion:
- _entryFieldBoundsWithXOffset:
- _entryFieldPaddingOutsideRing
- _appendString:
- _deleteLastCharacter
- _entryFieldIndicatorDiameter
- _entryFieldIndicatorWidthPadding
- _hasAnyCharacters
- _viewSize
@end
