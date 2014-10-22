@interface AVCaptureStillImageOutputInternal : NSObject
{
	id stillImageRequests;
	BOOL squareCropEnabled;
	struct previewImageSize;
	unsigned int imageDataFormatType;
	float jpegQuality;
	BOOL jpegQualitySpecified;
	long long HDRCaptureMode;
	BOOL EV0CaptureEnabled;
	BOOL chromaNoiseReductionEnabled;
	BOOL suspendsVideoProcessingDuringCapture;
	id outputSettings;
	BOOL isCapturingPhoto;
	BOOL rawCaptureEnabled;
	BOOL SISSupported;
	BOOL SISEnabled;
	BOOL SISActive;
	unsigned int shutterSoundID;
}

+ dealloc
+ init
- dealloc
- init
@end
