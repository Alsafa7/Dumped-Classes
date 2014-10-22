@interface DRDisplayRecorder : NSObject
{
	id messageCenter;
	BOOL useQuartz;
	double framesPerSecond;
	BOOL recordAudio;
	BOOL lockFramesPerSecond;
	long long jpegQuality;
	long long bitrate;
	int rotation;
	int orientationMode;
	BOOL grayscale;
	int showTaps;
	long long enableWebServer;
	BOOL showsRecordingCompleteInterface;
	double scale;
	int format;
}

+ currentNetworkName
+ settingsChanged
+ recordingDidStart
+ recordingDidStop
+ recorderStatus
+ setEnableWebServer:
+ setShowsRecordingCompleteInterface:
+ recordingErrorCode
+ recordingErrorText
+ currentFrameIndex
+ recordingStartTime
+ activeFilePath
+ activeFileSize
+ activeFileOffset
+ toggleRecording
+ pushIconBadge
+ popIconBadge
+ useQuartz
+ recordAudio
+ lockFramesPerSecond
+ grayscale
+ showTaps
+ enableWebServer
+ showsRecordingCompleteInterface
+ orientationMode
+ jpegQuality
+ isAvailable
+ startRecording
+ openSettings
+ init
+ scale
+ rotation
+ stopRecording
+ bitrate
+ framesPerSecond
+ recordings
- currentNetworkName
- settingsChanged
- recordingDidStart
- recordingDidStop
- recorderStatus
- setEnableWebServer:
- setShowsRecordingCompleteInterface:
- recordingErrorCode
- recordingErrorText
- currentFrameIndex
- recordingStartTime
- activeFilePath
- activeFileSize
- activeFileOffset
- toggleRecording
- pushIconBadge
- popIconBadge
- useQuartz
- recordAudio
- lockFramesPerSecond
- grayscale
- showTaps
- enableWebServer
- showsRecordingCompleteInterface
- orientationMode
- jpegQuality
- isAvailable
- startRecording
- openSettings
- init
- scale
- rotation
- stopRecording
- bitrate
- framesPerSecond
- recordings
@end
