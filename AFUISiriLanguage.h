@interface AFUISiriLanguage : NSObject
{
	id _spokenLanguageCode;
	id _delegate;
}

+ dealloc
+ init
+ _delegate
+ _computeSpokenLanguageCode
+ _spokenLanguageDidChange:
+ _currentLocaleDidChange:
+ _updateSpokenLanguageCode
+ _setSpokenLanguageCode:
+ spokenLanguageCode
+ initWithDelegate:
+ .cxx_destruct
- dealloc
- init
- _delegate
- _computeSpokenLanguageCode
- _spokenLanguageDidChange:
- _currentLocaleDidChange:
- _updateSpokenLanguageCode
- _setSpokenLanguageCode:
- spokenLanguageCode
- initWithDelegate:
- .cxx_destruct
@end
