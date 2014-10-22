@interface CUTPowerMonitor : NSObject
{
	id _iokitDelegate;
	pointer _batteryRunLoopSource;
	pointer _batteryIONotifyPort;
	unsigned int _batteryNotificationRef;
	unsigned int _pmConnection;
	pointer _pmPort;
	unsigned int _pmNotifier;
	id _delegates;
	BOOL _isExternalPowerConnected;
	double _currentLevel;
}

+ dealloc
+ init
+ _handlePowerChangedNotificationWithMessageType:notificationID:
+ batteryPercentRemaining
+ setCurrentLevel:
+ updateBatteryLevelWithBatteryEntry:
+ _updateBatteryConnectedStateWithBatteryEntry:
+ currentLevel
+ setExternalPowerConnected:
+ updateBatteryConnectedStateWithBatteryEntry:
+ isExternalPowerConnected
+ addDelegate:
+ removeDelegate:
- dealloc
- init
- _handlePowerChangedNotificationWithMessageType:notificationID:
- batteryPercentRemaining
- setCurrentLevel:
- updateBatteryLevelWithBatteryEntry:
- _updateBatteryConnectedStateWithBatteryEntry:
- currentLevel
- setExternalPowerConnected:
- updateBatteryConnectedStateWithBatteryEntry:
- isExternalPowerConnected
- addDelegate:
- removeDelegate:
@end
