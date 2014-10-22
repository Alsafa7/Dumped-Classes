@interface SBLockScreenViewController : SBLockScreenViewControllerBase
{
	BOOL _isInScreenOffMode;
	id _blockedController;
	id _dateViewController;
	id _legalViewController;
	id _timerViewController;
	id _notificationController;
	id _cameraController;
	id _mediaControlsViewController;
	BOOL _ignoreFirstMediaToggle;
	id _modalAlertController;
	id _fullscreenSystemAlertController;
	id _pendingFullscreenSystemAlerts;
	id _chargingViewController;
	BOOL _attemptingPasscodeUnlock;
	BOOL _chargingViewControllerVisible;
	BOOL _wasAutoUnlocked;
	BOOL _forcePasscodeWhileInCall;
	BOOL _isHidingPasscodeWhileInCall;
	id _pluginController;
	id _nowPlayingController;
	id _buddyController;
	id _buddyOverlayContext;
	id _prioritizedOverlays;
	id _fullScreenOverlayContext;
	id _blockedOverlayContext;
	id _fullscreenBulletinController;
	id _fullScreenBulletinOverlayContext;
	id _infoOverlayController;
	id _infoOverlayContext;
	id _thermalWarningController;
	id _thermalWarningContext;
	id _resetRestoreViewController;
	id _resetRestoreOverlayContext;
	id _emergencyCallController;
	BOOL _suppressWallpaperAlphaChangeOnScroll;
}

@end
