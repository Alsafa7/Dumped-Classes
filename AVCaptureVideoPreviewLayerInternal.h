@interface AVCaptureVideoPreviewLayerInternal : NSObject
{
	id session;
	id connection;
	id sublayer;
	struct sensorSize;
	id sensorToPreviewVTScalingMode;
	struct previewSize;
	double previewRotationDegrees;
	id gravity;
	BOOL disableActions;
	long long orientation;
	BOOL automaticallyAdjustsMirroring;
	BOOL mirrored;
	BOOL isPresentationLayer;
	BOOL visible;
	BOOL isPaused;
	BOOL chromaNoiseReductionEnabled;
	int changeSeed;
	struct captureDeviceTransform;
	double rollAdjustment;
}

@end
