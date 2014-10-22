@interface SBUIBiometricEventMonitor : NSObject
{
	id _biometricKit;
	id _delegate;
	id _observers;
	usigned long long _lastEvent;
	id _matchingDisabledRequesters;
	id _activePasscodeViews;
	BOOL _matchingEnabled;
	BOOL _screenIsOff;
	BOOL _deviceLocked;
	BOOL _lockScreenTopmost;
}

@end
