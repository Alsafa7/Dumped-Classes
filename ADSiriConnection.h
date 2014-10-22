@interface ADSiriConnection : NSObject
{
	id _url;
	BOOL _prefersWWAN;
	id _aceHost;
	id _languageCode;
	double _timeout;
	BOOL _sendKeepAlives;
	id _thread;
	id _underlyingConnection;
}

+ cancelSynchronously:
+ setSendKeepAlives:
+ sendCommand:errorHandler:
+ prefersWWAN
+ analysisInfo
+ setPrefersWWAN:
+ _performBlockOnBackgroundThread:
+ _performSyncBlockOnBackgroundThread:
+ setTimeout:
+ timeout
+ dealloc
+ setDelegate:
+ init
+ delegate
+ start
+ url
+ setUrl:
+ languageCode
+ setAceHost:
+ aceHost
+ setLanguageCode:
+ .cxx_destruct
- cancelSynchronously:
- setSendKeepAlives:
- sendCommand:errorHandler:
- prefersWWAN
- analysisInfo
- setPrefersWWAN:
- _performBlockOnBackgroundThread:
- _performSyncBlockOnBackgroundThread:
- setTimeout:
- timeout
- dealloc
- setDelegate:
- init
- delegate
- start
- url
- setUrl:
- languageCode
- setAceHost:
- aceHost
- setLanguageCode:
- .cxx_destruct
@end
