@interface AVResolvedCaptureOptions : NSObject
{
	id sessionPreset;
	BOOL captureSessionPresetChanging;
	id baseCaptureOptions;
	id optionsOverrides;
	pointer outputSettingsOverrides;
	BOOL usePreviewSizedCaptureBuffers;
	BOOL useStabilizationIfAvailable;
	BOOL hasStillImageOutput;
	id faceDetectionMode;
	BOOL faceDetectionNotificationsEnabled;
	struct videoConnectionMinFrameDuration;
	struct videoConnectionMaxFrameDuration;
	id resolvedVideoDeviceFormat;
	struct resolvedVideoMinFrameDuration;
	struct resolvedVideoMaxFrameDuration;
	id resolvedVideoCompressionProperties;
	id resolvedCaptureOptions;
	BOOL resolvesFrameRatesUsingDefaultValues;
	BOOL resetsVideoZoomFactorToDefaultValue;
}

@end
