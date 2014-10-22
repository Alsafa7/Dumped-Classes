@interface SBLockScreenSettings : _UISettings
{
	BOOL _alwaysPutPluginsBelowScrollView;
	id _verticalBounceSettings;
	id _horizontalBounceSettings;
	id _passcodeSettings;
	id _slideToUnlockFailureRecognizerSettings;
	id _unlockToPhoneWallpaperOutSettings;
	id _unlockToPhoneWallpaperInSettings;
	id _unlockWallpaperOutSettings;
	id _unlockWallpaperInSettings;
	double _lockToUnlockSlideCompletionPercentage;
	double _lockToUnlockSlideCompletionPercentageIPad;
	double _unlockSlideForIdleTimerDisabledPercentage;
	double _unlockSlideForIdleTimerDisabledPercentageIPad;
	double _notificationScrollForIdleTimerDisabledOffset;
	double _notificationScrollForIdleTimerDisabledOffsetIPad;
	double _unlockSwipeWallpaperAlpha;
}

+ verticalBounceSettings
+ setVerticalBounceSettings:
+ horizontalBounceSettings
+ setHorizontalBounceSettings:
+ passcodeSettings
+ setPasscodeSettings:
+ slideToUnlockFailureRecognizerSettings
+ setSlideToUnlockFailureRecognizerSettings:
+ unlockToPhoneWallpaperOutSettings
+ setUnlockToPhoneWallpaperOutSettings:
+ unlockToPhoneWallpaperInSettings
+ setUnlockToPhoneWallpaperInSettings:
+ unlockWallpaperOutSettings
+ setUnlockWallpaperOutSettings:
+ unlockWallpaperInSettings
+ setUnlockWallpaperInSettings:
+ lockToUnlockSlideCompletionPercentage
+ setLockToUnlockSlideCompletionPercentage:
+ lockToUnlockSlideCompletionPercentageIPad
+ setLockToUnlockSlideCompletionPercentageIPad:
+ unlockSlideForIdleTimerDisabledPercentage
+ setUnlockSlideForIdleTimerDisabledPercentage:
+ unlockSlideForIdleTimerDisabledPercentageIPad
+ setUnlockSlideForIdleTimerDisabledPercentageIPad:
+ notificationScrollForIdleTimerDisabledOffset
+ setNotificationScrollForIdleTimerDisabledOffset:
+ notificationScrollForIdleTimerDisabledOffsetIPad
+ setNotificationScrollForIdleTimerDisabledOffsetIPad:
+ unlockSwipeWallpaperAlpha
+ setUnlockSwipeWallpaperAlpha:
+ alwaysPutPluginsBelowScrollView
+ setAlwaysPutPluginsBelowScrollView:
+ setDefaultValues
- verticalBounceSettings
- setVerticalBounceSettings:
- horizontalBounceSettings
- setHorizontalBounceSettings:
- passcodeSettings
- setPasscodeSettings:
- slideToUnlockFailureRecognizerSettings
- setSlideToUnlockFailureRecognizerSettings:
- unlockToPhoneWallpaperOutSettings
- setUnlockToPhoneWallpaperOutSettings:
- unlockToPhoneWallpaperInSettings
- setUnlockToPhoneWallpaperInSettings:
- unlockWallpaperOutSettings
- setUnlockWallpaperOutSettings:
- unlockWallpaperInSettings
- setUnlockWallpaperInSettings:
- lockToUnlockSlideCompletionPercentage
- setLockToUnlockSlideCompletionPercentage:
- lockToUnlockSlideCompletionPercentageIPad
- setLockToUnlockSlideCompletionPercentageIPad:
- unlockSlideForIdleTimerDisabledPercentage
- setUnlockSlideForIdleTimerDisabledPercentage:
- unlockSlideForIdleTimerDisabledPercentageIPad
- setUnlockSlideForIdleTimerDisabledPercentageIPad:
- notificationScrollForIdleTimerDisabledOffset
- setNotificationScrollForIdleTimerDisabledOffset:
- notificationScrollForIdleTimerDisabledOffsetIPad
- setNotificationScrollForIdleTimerDisabledOffsetIPad:
- unlockSwipeWallpaperAlpha
- setUnlockSwipeWallpaperAlpha:
- alwaysPutPluginsBelowScrollView
- setAlwaysPutPluginsBelowScrollView:
- setDefaultValues
@end