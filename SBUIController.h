@interface SBUIController : NSObject
{
	id _window;
	id _iconsView;
	id _contentView;
	id _fakeSpringBoardStatusBar;
	id _switcherController;
	id _sliderWindowController;
	id _toggleSwitcherAfterLaunchApp;
	id _bundleIDOfResignedApp;
	bit[1] _ignoringEvents;
	bit[1] _lastVolumeDownToControl;
	bit[1] _isBatteryCharging;
	bit[1] _isOnAC;
	bit[1] _isConnectedToUnsupportedChargingAccessory;
	bit[1] _isConnectedToChargeIncapablePowerSource;
	bit[1] _allowAlertWindowRotation;
	id _volumeHandler;
	float _batteryCapacity;
	float _curvedBatteryCapacity;
	BOOL _supportsDetailedBatteryCapacity;
	int _batteryLoggingStartCapacity;
	id _unsupportedChargerAlert;
	id _installedSystemGestureViews;
	id _suspendAnimationStepper;
	id _statusBarAnimationStepper;
	id _suspendGestureCompleteForwardToEndHandler;
	id _suspendGestureCompleteBackwardToStartHandler;
	BOOL _switcherVisibleWhenSuspendGestureStarted;
	id _suspendGestureWorkspaceLock;
	BOOL _switcherAnimationRevealing;
	BOOL _switcherAnimationInProgress;
	BOOL _switcherGestureRevealedOrDismissedSwitcher;
	id _switchAppGestureView;
	double _switchAppGesturePreviousPercentage;
	double _switchAppGestureEffectivePercentage;
	double _switchAppGestureInitialPercentage;
	usigned long long _switchAppGestureChangedFrames;
	id _systemGestureBackdrop;
	id _pendingGestureLaunchView;
	id _pendingAppActivatedByGesture;
	id _appCurrentlyActivatingByGesture;
	id _switchAppFullyOrderedList;
	id _switchAppFilteredList;
	BOOL _toggleSwitcherAfterLaunchAppUsesSystemGestureOrientation;
	double _ambiguousCCActivationMargin;
	id _rotationPreventionReasons;
}

@end
