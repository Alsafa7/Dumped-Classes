@interface ADDictationConnection : NSObject
{
	id _serviceDelegate;
}

+ initWithServiceDelegate:
+ adSpeechRecordingDidFail:
+ adSpeechRecognitionDidFail:
+ adSpeechRecordingDidEnd
+ adSpeechRecognized:usingSpeechModel:
+ adSpeechRecordingWillBegin
+ adSpeechRecordingDidBeginOnAVRecordRoute:
+ adSpeechRecordingDidUpdateAveragePower:peakPower:
+ adSpeechRecordingDidCancel
+ startDictationWithLanguageCode:options:speechOptions:
+ endSession
+ cancelSpeech
+ stopSpeechWithOptions:
+ preheat
+ requestStateUpdateWithReply:
+ updateSpeechOptions:
+ prepareWithOptions:
+ sendSpeechCorrectionInfo:forCorrectionContext:
+ _startDictationWithURL:isNarrowBand:language:options:
+ .cxx_destruct
- initWithServiceDelegate:
- adSpeechRecordingDidFail:
- adSpeechRecognitionDidFail:
- adSpeechRecordingDidEnd
- adSpeechRecognized:usingSpeechModel:
- adSpeechRecordingWillBegin
- adSpeechRecordingDidBeginOnAVRecordRoute:
- adSpeechRecordingDidUpdateAveragePower:peakPower:
- adSpeechRecordingDidCancel
- startDictationWithLanguageCode:options:speechOptions:
- endSession
- cancelSpeech
- stopSpeechWithOptions:
- preheat
- requestStateUpdateWithReply:
- updateSpeechOptions:
- prepareWithOptions:
- sendSpeechCorrectionInfo:forCorrectionContext:
- _startDictationWithURL:isNarrowBand:language:options:
- .cxx_destruct
@end
