@interface AVCaptureMetadataOutputInternal : NSObject
{
	id delegate;
	id clientQueue;
	id metadataObjectTypes;
	struct rectOfInterest;
}

+ dealloc
- dealloc
@end
