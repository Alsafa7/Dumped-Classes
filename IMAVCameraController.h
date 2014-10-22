@interface IMAVCameraController : NSObject
{
	id _cameras;
	id _queue;
}

+ dealloc
+ init
+ cameras
+ setCurrentCamera:
+ cameraWithDeviceID:
+ _rebuildCameraList
+ _loadSavedCamera
+ currentCamera
- dealloc
- init
- cameras
- setCurrentCamera:
- cameraWithDeviceID:
- _rebuildCameraList
- _loadSavedCamera
- currentCamera
@end
