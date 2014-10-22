@interface SBSAccelerometer : NSObject
{
	id _delegate;
	id _bksMirror;
}

+ dealloc
+ setDelegate:
+ init
+ delegate
+ setAccelerometerEventsEnabled:
+ accelerometerEventsEnabled
+ updateInterval
+ setUpdateInterval:
+ setXThreshold:
+ setYThreshold:
+ setZThreshold:
+ accelerometer:didAccelerateWithTimeStamp:x:y:z:eventType:
+ xThreshold
+ yThreshold
+ zThreshold
+ orientationEventsEnabled
+ setOrientationEventsEnabled:
+ currentDeviceOrientation
+ accelerometer:didChangeDeviceOrientation:
- dealloc
- setDelegate:
- init
- delegate
- setAccelerometerEventsEnabled:
- accelerometerEventsEnabled
- updateInterval
- setUpdateInterval:
- setXThreshold:
- setYThreshold:
- setZThreshold:
- accelerometer:didAccelerateWithTimeStamp:x:y:z:eventType:
- xThreshold
- yThreshold
- zThreshold
- orientationEventsEnabled
- setOrientationEventsEnabled:
- currentDeviceOrientation
- accelerometer:didChangeDeviceOrientation:
@end
