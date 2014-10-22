@interface SBUIPasscodeLockViewBase : UIView
{
	id _delegate;
	int _style;
	id _passcode;
	BOOL _playsKeypadSounds;
	BOOL _showsEmergencyCallButton;
	BOOL _showsStatusField;
	BOOL _becameVisible;
	double _backgroundAlpha;
	id _customBackgroundColor;
	id _entryField;
	id _backgroundLegibilitySettingsProvider;
	double _luminanceBoost;
	double _currentBacklightLevel;
	id _legibilitySettings;
	BOOL _allowsStatusTextUpdatingOnResignFirstResponder;
	BOOL _mesaLockedOut;
	usigned long long _biometricMatchMode;
	BOOL _shouldResetForFailedPasscodeAttempt;
}

+ _orientation
+ initWithFrame:
+ dealloc
+ setDelegate:
+ didMoveToWindow
+ delegate
+ setStyle:
+ resignFirstResponder
+ becomeFirstResponder
+ style
+ canBecomeFirstResponder
+ isFirstResponder
+ canResignFirstResponder
+ _setLegibilitySettings:
+ reset
+ setBackgroundAlpha:
+ setShowsEmergencyCallButton:
+ setBackgroundLegibilitySettingsProvider:
+ resetForFailedPasscode
+ customBackgroundColor
+ providerLegibilitySettingsChanged:
+ backgroundAlpha
+ setCustomBackgroundColor:
+ showsEmergencyCallButton
+ _entryField
+ setPlaysKeypadSounds:
+ setShowsStatusField:
+ _wantsBiometricAuthentication
+ _noteScreenBrightnessDidChange
+ _clearBrightnessChangeTimer
+ _resetForFailedPasscode:
+ _resetStatusText
+ _evaluateLuminance
+ _luminanceBoostDidChange
+ _luminosityBoost
+ _setLuminosityBoost:
+ biometricMatchMode
+ _screenBrightnessReallyDidChange
+ _luminanceBoostFromLegibility
+ _luminanceBoostFromDisplayBrightness
+ _updateStatusText:animated:
+ _updateStatusTextForBioEvent:animated:
+ _notifyDelegatePasscodeEnteredViaMesa
+ _resetForFailedMesaAttemptWithEvent:
+ _handleBiometricEvent:
+ biometricEventMonitor:handleBiometricEvent:
+ setAllowsStatusTextUpdatingOnResignFirstResponder:
+ playsKeypadSounds
+ showsStatusField
+ backgroundLegibilitySettingsProvider
+ setBiometricMatchMode:
+ _isBoundsPortraitOriented
+ _sendDelegateKeypadKeyDown
+ _sendDelegateKeypadKeyUp
+ _setEntryField:
+ shouldResetForFailedPasscodeAttempt
+ setShouldResetForFailedPasscodeAttempt:
+ passcode
- _orientation
- initWithFrame:
- dealloc
- setDelegate:
- didMoveToWindow
- delegate
- setStyle:
- resignFirstResponder
- becomeFirstResponder
- style
- canBecomeFirstResponder
- isFirstResponder
- canResignFirstResponder
- _setLegibilitySettings:
- reset
- setBackgroundAlpha:
- setShowsEmergencyCallButton:
- setBackgroundLegibilitySettingsProvider:
- resetForFailedPasscode
- customBackgroundColor
- providerLegibilitySettingsChanged:
- backgroundAlpha
- setCustomBackgroundColor:
- showsEmergencyCallButton
- _entryField
- setPlaysKeypadSounds:
- setShowsStatusField:
- _wantsBiometricAuthentication
- _noteScreenBrightnessDidChange
- _clearBrightnessChangeTimer
- _resetForFailedPasscode:
- _resetStatusText
- _evaluateLuminance
- _luminanceBoostDidChange
- _luminosityBoost
- _setLuminosityBoost:
- biometricMatchMode
- _screenBrightnessReallyDidChange
- _luminanceBoostFromLegibility
- _luminanceBoostFromDisplayBrightness
- _updateStatusText:animated:
- _updateStatusTextForBioEvent:animated:
- _notifyDelegatePasscodeEnteredViaMesa
- _resetForFailedMesaAttemptWithEvent:
- _handleBiometricEvent:
- biometricEventMonitor:handleBiometricEvent:
- setAllowsStatusTextUpdatingOnResignFirstResponder:
- playsKeypadSounds
- showsStatusField
- backgroundLegibilitySettingsProvider
- setBiometricMatchMode:
- _isBoundsPortraitOriented
- _sendDelegateKeypadKeyDown
- _sendDelegateKeypadKeyUp
- _setEntryField:
- shouldResetForFailedPasscodeAttempt
- setShouldResetForFailedPasscodeAttempt:
- passcode
@end
