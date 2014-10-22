@interface AVCaptureDeviceInputInternal : NSObject
{
	id _device;
	id _ports;
	BOOL _ready;
	BOOL _authorizedForCamera;
}

@end
