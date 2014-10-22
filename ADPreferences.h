@interface ADPreferences : NSObject
{
	BOOL _needToPostLanguageNotification;
	BOOL _needToPostOutputLanguageNotification;
}

+ accountInfoForIdentifier:
+ setAccountInfo:forIdentifier:
+ activeAccountIdentifier
+ statisticsRecordingEnabled
+ lastVoiceUsedWasBuiltIn
+ setLastVoiceUsedWasBuiltIn:
+ authenticationDisabled
+ serverOverride
+ productTypePrefix
+ redirectForServerURLString:
+ setRedirect:forServerURLString:
+ setActiveAccountIdentifier:
+ synchronize
+ languageCode
+ serverTimeoutInterval
+ outputVoice
+ setOutputVoice:
+ setCountryCode:
+ countryCode
+ accountIdentifiers
+ setLanguageCode:
- accountInfoForIdentifier:
- setAccountInfo:forIdentifier:
- activeAccountIdentifier
- statisticsRecordingEnabled
- lastVoiceUsedWasBuiltIn
- setLastVoiceUsedWasBuiltIn:
- authenticationDisabled
- serverOverride
- productTypePrefix
- redirectForServerURLString:
- setRedirect:forServerURLString:
- setActiveAccountIdentifier:
- synchronize
- languageCode
- serverTimeoutInterval
- outputVoice
- setOutputVoice:
- setCountryCode:
- countryCode
- accountIdentifiers
- setLanguageCode:
@end
