@interface AVCaptureSessionInternal : NSObject
{
	id weakReference;
	id sessionPreset;
	BOOL adjustingDeviceActiveFormat;
	int sessionPresetChangeSeed;
	int resolvedSessionPresetChangeSeed;
	int videoDeviceChangeSeed;
	int resolvedVideoDeviceChangeSeed;
	int beginConfigRefCount;
	id captureOptions;
	id figRecorderOptions;
	id audioDevice;
	id videoDevice;
	pointer recorder;
	id inputs;
	id outputs;
	id connections;
	id liveConnections;
	id videoPreviewLayer;
	id stopError;
	BOOL running;
	BOOL interrupted;
	BOOL recording;
	BOOL usesApplicationAudioSession;
	BOOL automaticallyConfiguresApplicationAudioSession;
	id runLoopCondition;
	BOOL waitingForRecorderDidStartPreviewing;
	BOOL waitingForRecorderDidStartRecording;
	BOOL waitingForRecorderDidStopSource;
	BOOL waitingForRecorderDidStopPreviewing;
	BOOL waitingForRecorderDidStopRecording;
	pointer masterClock;
}

+ dealloc
+ init
- dealloc
- init
@end
