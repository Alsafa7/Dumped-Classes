@interface AVCaptureOutputInternal : NSObject
{
	id session;
	id connections;
	int changeSeed;
	struct metadataTransform;
	double rollAdjustment;
	BOOL physicallyMirrorsVideo;
}

+ dealloc
+ init
- dealloc
- init
@end
