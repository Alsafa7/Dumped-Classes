@interface AVCaptureInputPortInternal : NSObject
{
	id input;
	id mediaType;
	pointer formatDescription;
	pointer clock;
	BOOL enabled;
}

+ dealloc
+ init
- dealloc
- init
@end
