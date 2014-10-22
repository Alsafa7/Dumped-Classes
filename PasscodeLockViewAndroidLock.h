@interface PasscodeLockViewAndroidLock : SBUIPasscodeLockViewBase
{
	id topPaddingView;
	id bottomPaddingView;
	id leftPaddingView;
	id rightPaddingView;
	id androidLockView;
	id titleLabel;
	id emergencyCallButton;
	id cancelButton;
	double backgroundAlpha;
	id customBackgroundColor;
	id strDrawPattern;
	id strWrongPattern;
	id strEmergency;
	id strCancel;
}

+ prepareLocalizedStrings
+ emergencyCallButtonPressed
+ resetBackground
+ wrongPatterTimerFired:
+ androidLockUnlocked:
+ androidLockStartedTracking:
+ androidLockStoppedTracking:
+ androidLockTooManyWrongAttempts:
+ androidLockWrongAttempt:
+ androidLockBlocked:
+ androidLockUnblocked:
+ androidLockView
+ cancelButtonPressed
+ dealloc
+ layoutSubviews
+ initWithSettings:
+ setBackgroundAlpha:
+ setShowsEmergencyCallButton:
+ customBackgroundColor
+ backgroundAlpha
+ setCustomBackgroundColor:
+ passcode
- prepareLocalizedStrings
- emergencyCallButtonPressed
- resetBackground
- wrongPatterTimerFired:
- androidLockUnlocked:
- androidLockStartedTracking:
- androidLockStoppedTracking:
- androidLockTooManyWrongAttempts:
- androidLockWrongAttempt:
- androidLockBlocked:
- androidLockUnblocked:
- androidLockView
- cancelButtonPressed
- dealloc
- layoutSubviews
- initWithSettings:
- setBackgroundAlpha:
- setShowsEmergencyCallButton:
- customBackgroundColor
- backgroundAlpha
- setCustomBackgroundColor:
- passcode
@end
