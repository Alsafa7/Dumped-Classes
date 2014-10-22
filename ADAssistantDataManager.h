@interface ADAssistantDataManager : NSObject
{
	id _observers;
	id _cachedMeCards;
	id _cachedABSources;
	id _cachedRestrictions;
	id _cachedCountryCode;
	BOOL _receivedGeoCountryConfigurationResponse;
	BOOL _voiceOverIsActive;
	id _cachedVoice;
	id _queue;
	id _addressBookManager;
}

+ requestAssistantDataUpdate
+ addressBookManagerDidUpdateData:meCards:sources:
+ _updateVoice:
+ _onMainThreadUpdateCountryCodeWithCountryConfiguration:completion:
+ _generateAssistantData
+ _locationRestrictionDidChange:
+ _systemTimeZoneDidChange:
+ _storeFrontDidChange:
+ _providersDidChange:
+ _clearRestrictionsCache
+ _restrictions
+ _storeFrontIdentifier
+ _addressBookManager
+ profileConnectionDidReceiveEffectiveSettingsChangedNotification:userInfo:
+ dealloc
+ init
+ removeObserver:
+ _queue
+ addObserver:
+ setVoiceOverIsActive:
+ _outputVoiceDidChange:
+ _currentLocaleDidChange:
+ .cxx_destruct
- requestAssistantDataUpdate
- addressBookManagerDidUpdateData:meCards:sources:
- _updateVoice:
- _onMainThreadUpdateCountryCodeWithCountryConfiguration:completion:
- _generateAssistantData
- _locationRestrictionDidChange:
- _systemTimeZoneDidChange:
- _storeFrontDidChange:
- _providersDidChange:
- _clearRestrictionsCache
- _restrictions
- _storeFrontIdentifier
- _addressBookManager
- profileConnectionDidReceiveEffectiveSettingsChangedNotification:userInfo:
- dealloc
- init
- removeObserver:
- _queue
- addObserver:
- setVoiceOverIsActive:
- _outputVoiceDidChange:
- _currentLocaleDidChange:
- .cxx_destruct
@end
