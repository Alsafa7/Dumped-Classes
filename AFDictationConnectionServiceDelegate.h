@interface AFDictationConnectionServiceDelegate : NSObject
{
	id _dictationConnection;
}

+ speechRecordingWillBegin
+ speechRecordingDidUpdateAveragePower:peakPower:
+ speechRecordingDidEnd
+ speechRecordingDidCancel
+ speechRecordingDidFail:
+ speechRecognitionDidFail:
+ initWithDictationConnection:
+ speechRecordingDidBegin
+ speechDidRecognizePhrases:usingSpeechModel:correctionContext:
+ .cxx_destruct
- speechRecordingWillBegin
- speechRecordingDidUpdateAveragePower:peakPower:
- speechRecordingDidEnd
- speechRecordingDidCancel
- speechRecordingDidFail:
- speechRecognitionDidFail:
- initWithDictationConnection:
- speechRecordingDidBegin
- speechDidRecognizePhrases:usingSpeechModel:correctionContext:
- .cxx_destruct
@end
