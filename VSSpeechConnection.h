@interface VSSpeechConnection : NSObject
{
	id _connection;
	id _delegateWrapper;
	id _request;
}

+ dealloc
+ setDelegate:
+ delegate
+ request
+ _connection
+ _remoteObject
+ setAutoDownloadedVoiceAssets:
+ getAutoDownloadedVoiceAssets:
+ startSpeechRequest:
+ availableVoicesForLanguageCode:
+ availableFootprintsForVoice:languageCode:
+ isSystemSpeaking
+ continueCurrentSpeechRequest
+ isSystemSpeakingOnBehalfOfCurrentConnection
+ _setRequest:
+ stopCurrentSpeechRequestAtMark:
+ pauseCurrentSpeechRequestAtMark:
+ getAllVoiceAssets:
+ getLocalVoiceAssets:
+ downloadVoiceAsset:progress:completion:
+ getVoiceInfoForLanguageCode:footprint:gender:custom:reply:
+ _connectionInvalidated
+ _remoteObjectWithErrorHandler:
+ .cxx_destruct
- dealloc
- setDelegate:
- delegate
- request
- _connection
- _remoteObject
- setAutoDownloadedVoiceAssets:
- getAutoDownloadedVoiceAssets:
- startSpeechRequest:
- availableVoicesForLanguageCode:
- availableFootprintsForVoice:languageCode:
- isSystemSpeaking
- continueCurrentSpeechRequest
- isSystemSpeakingOnBehalfOfCurrentConnection
- _setRequest:
- stopCurrentSpeechRequestAtMark:
- pauseCurrentSpeechRequestAtMark:
- getAllVoiceAssets:
- getLocalVoiceAssets:
- downloadVoiceAsset:progress:completion:
- getVoiceInfoForLanguageCode:footprint:gender:custom:reply:
- _connectionInvalidated
- _remoteObjectWithErrorHandler:
- .cxx_destruct
@end
