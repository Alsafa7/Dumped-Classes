@interface VSSpeechRequest : NSObject
{
	BOOL _useCustomVoice;
	BOOL _maintainsInput;
	BOOL _audioSessionIDIsValid;
	unsigned int _audioSessionID;
	unsigned int _audioQueueFlags;
	id _text;
	id _attributedText;
	id _languageCode;
	id _voiceName;
	long long _footprint;
	long long _gender;
	id _outputPath;
	double _rate;
	double _pitch;
	double _volume;
	id _stopHandler;
	id _pauseHandler;
}

+ initWithCoder:
+ encodeWithCoder:
+ description
+ text
+ setAttributedText:
+ setText:
+ attributedText
+ languageCode
+ rate
+ maintainsInput
+ useCustomVoice
+ audioSessionIDIsValid
+ audioSessionID
+ audioQueueFlags
+ voiceName
+ outputPath
+ footprint
+ gender
+ setLanguageCode:
+ setVoiceName:
+ setFootprint:
+ setUseCustomVoice:
+ setGender:
+ setOutputPath:
+ setMaintainsInput:
+ setAudioSessionIDIsValid:
+ setAudioSessionID:
+ setAudioQueueFlags:
+ stopHandler
+ setStopHandler:
+ pauseHandler
+ setPauseHandler:
+ .cxx_destruct
+ pitch
+ setPitch:
+ volume
+ setVolume:
+ setRate:
- initWithCoder:
- encodeWithCoder:
- description
- text
- setAttributedText:
- setText:
- attributedText
- languageCode
- rate
- maintainsInput
- useCustomVoice
- audioSessionIDIsValid
- audioSessionID
- audioQueueFlags
- voiceName
- outputPath
- footprint
- gender
- setLanguageCode:
- setVoiceName:
- setFootprint:
- setUseCustomVoice:
- setGender:
- setOutputPath:
- setMaintainsInput:
- setAudioSessionIDIsValid:
- setAudioSessionID:
- setAudioQueueFlags:
- stopHandler
- setStopHandler:
- pauseHandler
- setPauseHandler:
- .cxx_destruct
- pitch
- setPitch:
- volume
- setVolume:
- setRate:
@end
