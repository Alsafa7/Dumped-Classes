@interface UIKeyboardInputModeController : NSObject
{
	id _currentInputMode;
	id _inputModesWithoutHardwareSupport;
	id currentLocale;
	id currentLanguage;
	id keyboardInputModes;
	id enabledInputModes;
	id normalizedInputModes;
	id defaultKeyboardInputModes;
	id defaultRawInputModes;
	id defaultInputModes;
	id defaultNormalizedInputModes;
	id _inputModeContextIdentifier;
	id _delegate;
}

+ normalizedEnabledInputModeIdentifiers
+ enabledInputModeIdentifiers
+ supportedInputModeIdentifiers
+ enabledInputModeIdentifiers:
+ inputModesWithoutHardwareSupport
+ enabledInputModeLanguages
+ dealloc
+ setDelegate:
+ delegate
+ currentInputMode
+ currentPublicInputMode
+ currentLocale
+ inputModeContextIdentifier
+ activeInputModes
+ setInputModeContextIdentifier:
+ setCurrentInputMode:
+ setCurrentLocale:
+ setCurrentLanguage:
+ setKeyboardInputModes:
+ setEnabledInputModes:
+ setNormalizedInputModes:
+ setDefaultKeyboardInputModes:
+ setDefaultRawInputModes:
+ setDefaultInputModes:
+ setDefaultNormalizedInputModes:
+ keyboardInputModes
+ inputModeWithIdentifier:
+ updateCurrentInputMode:
+ normalizedInputModes
+ enabledInputModes
+ suggestedInputModesForCurrentLocale:fallbackToDefaultInputModes:
+ defaultRawInputModes
+ defaultNormalizedInputModes
+ defaultInputModes
+ startDictationConnectionForFileAtURL:forInputModeIdentifier:
+ containsDictationSupportedInputMode
+ currentLocaleRequiresExtendedSetup
+ defaultEnabledInputModesForCurrentLocale:
+ suggestedInputModesForCurrentLocale
+ startConnectionForFileAtURL:forInputModeIdentifier:
+ currentLanguage
+ defaultKeyboardInputModes
- normalizedEnabledInputModeIdentifiers
- enabledInputModeIdentifiers
- supportedInputModeIdentifiers
- enabledInputModeIdentifiers:
- inputModesWithoutHardwareSupport
- enabledInputModeLanguages
- dealloc
- setDelegate:
- delegate
- currentInputMode
- currentPublicInputMode
- currentLocale
- inputModeContextIdentifier
- activeInputModes
- setInputModeContextIdentifier:
- setCurrentInputMode:
- setCurrentLocale:
- setCurrentLanguage:
- setKeyboardInputModes:
- setEnabledInputModes:
- setNormalizedInputModes:
- setDefaultKeyboardInputModes:
- setDefaultRawInputModes:
- setDefaultInputModes:
- setDefaultNormalizedInputModes:
- keyboardInputModes
- inputModeWithIdentifier:
- updateCurrentInputMode:
- normalizedInputModes
- enabledInputModes
- suggestedInputModesForCurrentLocale:fallbackToDefaultInputModes:
- defaultRawInputModes
- defaultNormalizedInputModes
- defaultInputModes
- startDictationConnectionForFileAtURL:forInputModeIdentifier:
- containsDictationSupportedInputMode
- currentLocaleRequiresExtendedSetup
- defaultEnabledInputModesForCurrentLocale:
- suggestedInputModesForCurrentLocale
- startConnectionForFileAtURL:forInputModeIdentifier:
- currentLanguage
- defaultKeyboardInputModes
@end
