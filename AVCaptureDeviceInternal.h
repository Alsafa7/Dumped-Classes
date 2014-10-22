@interface AVCaptureDeviceInternal : NSObject
{
	int _openRefCount;
	int _configLockRefCount;
	int _configLockPid;
	BOOL _usingDevice;
	id _activeInput;
}

@end
