@interface AVCaptureConnectionInternal : NSObject
{
	id inputPorts;
	id output;
	id videoPreviewLayer;
	BOOL active;
	BOOL enabled;
	int outputChangeSeedOnDisable;
	id audioInputPort;
	id audioChannels;
	id audioChannelLevels;
	long long lastGetAudioLevelsTime;
	id videoInputPort;
	BOOL videoMirroringSupported;
	BOOL automaticallyAdjustsVideoMirroring;
	BOOL videoMirrored;
	BOOL videoOrientationSupported;
	long long videoOrientation;
	struct videoMinFrameDuration;
	struct videoMaxFrameDuration;
	double videoMaxScaleAndCropFactor;
	double videoScaleAndCropFactor;
	int videoRetainedBufferCountHint;
	BOOL enablesVideoStabilizationWhenAvailable;
	BOOL videoStabilizationEnabled;
}

@end
