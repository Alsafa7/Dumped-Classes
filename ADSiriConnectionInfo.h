@interface ADSiriConnectionInfo : NSObject
{
	BOOL _prefersWWAN;
	id _url;
	id _aceHost;
	id _languageCode;
	double _timeout;
}

+ prefersWWAN
+ setPrefersWWAN:
+ setTimeout:
+ timeout
+ url
+ setUrl:
+ languageCode
+ setAceHost:
+ aceHost
+ setLanguageCode:
+ .cxx_destruct
- prefersWWAN
- setPrefersWWAN:
- setTimeout:
- timeout
- url
- setUrl:
- languageCode
- setAceHost:
- aceHost
- setLanguageCode:
- .cxx_destruct
@end
