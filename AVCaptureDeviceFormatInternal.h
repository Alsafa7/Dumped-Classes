@interface AVCaptureDeviceFormatInternal : NSObject
{
	id mediaType;
	id formatDictionary;
	id deviceProperties;
	pointer formatDescription;
	id videoSupportedFrameRateRanges;
	struct defaultActiveMinFrameDuration;
	struct defaultActiveMaxFrameDuration;
}

@end
