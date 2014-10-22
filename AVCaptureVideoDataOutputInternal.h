@interface AVCaptureVideoDataOutputInternal : NSObject
{
	id delegate;
	id clientQueue;
	id videoSettings;
	struct deprecatedMinFrameDuration;
	BOOL alwaysDiscardsLateVideoFrames;
}

+ dealloc
+ init
- dealloc
- init
@end
