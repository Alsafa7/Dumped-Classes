@interface AFSpeechRecorder : NSObject
{
	id _delegate;
	id _queue;
	id _voiceController;
	id _powerUpdateTimer;
	long long _packetCount;
	long long _mode;
	long long _speechEvent;
	id _deviceIdentifier;
	BOOL _needsAlertsSet;
	BOOL _didDetectStartpoint;
	BOOL _didDetectEndpoint;
	BOOL _serverDidEndpoint;
	BOOL _didTimeout;
	BOOL _wasCanceled;
	BOOL _suppressRecordingStoppedAlert;
	BOOL _useAutomaticEndpointing;
	id _powerDelegate;
}

+ cancelSpeechCaptureSuppressingAlert:
+ setSpeechEvent:deviceIdentifier:
+ setPowerDelegate:
+ stopUpdatingPower
+ prepareSpeechCapture
+ startSpeechCaptureForMode:useAutomaticEndpointing:
+ startUpdatingPower
+ stopSpeechCaptureForEvent:
+ _voiceController
+ _currentDeviceContext
+ _resetVoiceController
+ _voiceActivationMode
+ _prepareVoiceController
+ _setAlertsIfNeeded
+ updatePower
+ powerDelegate
+ voiceControllerRecordHardwareConfigurationDidChange:toConfiguration:
+ voiceControllerDidStartRecording:successfully:
+ voiceControllerRecordBufferAvailable:buffer:
+ voiceControllerDidStopRecording:forReason:
+ voiceControllerDidDetectStartpoint:
+ voiceControllerDidDetectEndpoint:ofType:
+ voiceControllerDidDetectEndpoint:
+ voiceControllerBeginRecordInterruption:
+ voiceControllerEndRecordInterruption:
+ releaseAudioSession
+ initWithQueue:
+ setDelegate:
+ averagePower
+ preheat
+ _setMode:
+ peakPower
+ .cxx_destruct
- cancelSpeechCaptureSuppressingAlert:
- setSpeechEvent:deviceIdentifier:
- setPowerDelegate:
- stopUpdatingPower
- prepareSpeechCapture
- startSpeechCaptureForMode:useAutomaticEndpointing:
- startUpdatingPower
- stopSpeechCaptureForEvent:
- _voiceController
- _currentDeviceContext
- _resetVoiceController
- _voiceActivationMode
- _prepareVoiceController
- _setAlertsIfNeeded
- updatePower
- powerDelegate
- voiceControllerRecordHardwareConfigurationDidChange:toConfiguration:
- voiceControllerDidStartRecording:successfully:
- voiceControllerRecordBufferAvailable:buffer:
- voiceControllerDidStopRecording:forReason:
- voiceControllerDidDetectStartpoint:
- voiceControllerDidDetectEndpoint:ofType:
- voiceControllerDidDetectEndpoint:
- voiceControllerBeginRecordInterruption:
- voiceControllerEndRecordInterruption:
- releaseAudioSession
- initWithQueue:
- setDelegate:
- averagePower
- preheat
- _setMode:
- peakPower
- .cxx_destruct
@end
