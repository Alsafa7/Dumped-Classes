@interface SBBluetoothController : NSObject
{
	id _devices;
	BOOL _tetheringConnected;
}

+ updateBattery
+ startWatchingForDevices
+ tetheringConnected
+ stopWatchingForDevices
+ firstBTDeviceToReportBatteryLevel
+ iapDeviceChanged:
+ connectionChanged:
+ addDeviceNotification:
+ removeDeviceNotification:
+ batteryChanged:
+ bluetoothDeviceInitiatedVoiceControl:
+ bluetoothDeviceEndedVoiceControl:
+ noteDevicesChanged
+ updateTetheringConnected
+ canReportBatteryLevel
+ deviceForAudioRoute:
+ dealloc
+ batteryLevel
- updateBattery
- startWatchingForDevices
- tetheringConnected
- stopWatchingForDevices
- firstBTDeviceToReportBatteryLevel
- iapDeviceChanged:
- connectionChanged:
- addDeviceNotification:
- removeDeviceNotification:
- batteryChanged:
- bluetoothDeviceInitiatedVoiceControl:
- bluetoothDeviceEndedVoiceControl:
- noteDevicesChanged
- updateTetheringConnected
- canReportBatteryLevel
- deviceForAudioRoute:
- dealloc
- batteryLevel
@end
