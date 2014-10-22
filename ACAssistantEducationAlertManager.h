@interface ACAssistantEducationAlertManager : NSObject
{
	id _unlockHandler;
	id _unlockTimer;
	BOOL _assistantSupported;
	BOOL _dictationSupported;
	BOOL _siriDidActivate;
	id _syncDidFinishLanguage;
	id _newlyAvailableLanguages;
	id _item;
}

+ _availableForCurrentLanguage
+ _assistantDidActivate:
+ currentAssistantLanguage
+ educationAlertWasDeactivated:
+ _languageActivated:
+ _clearUnlockTimer
+ _shouldAcceptNewLanguage:
+ _unlockTimerFired:
+ _showEducationAlert
+ _waitForUnlockToDisplayAlert
+ _availableForLanguage:
+ _startUnlockTimer
+ _shouldShowReadyForLanguageCode:
+ dealloc
+ init
+ _invalidate
+ .cxx_destruct
- _availableForCurrentLanguage
- _assistantDidActivate:
- currentAssistantLanguage
- educationAlertWasDeactivated:
- _languageActivated:
- _clearUnlockTimer
- _shouldAcceptNewLanguage:
- _unlockTimerFired:
- _showEducationAlert
- _waitForUnlockToDisplayAlert
- _availableForLanguage:
- _startUnlockTimer
- _shouldShowReadyForLanguageCode:
- dealloc
- init
- _invalidate
- .cxx_destruct
@end
