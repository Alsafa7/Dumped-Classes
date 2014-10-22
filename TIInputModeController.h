@interface TIInputModeController : NSObject
{
	id _supportedInputModeIdentifiers;
	id currentLocale;
	id currentLanguage;
	id enabledInputModes;
	id defaultInputModes;
}

+ dealloc
+ currentLocale
+ enabledInputModeIdentifiers
+ setCurrentLocale:
+ setCurrentLanguage:
+ setEnabledInputModes:
+ setDefaultInputModes:
+ enabledInputModes
+ defaultEnabledInputModesForCurrentLocale
+ defaultInputModes
+ currentLanguage
+ supportedInputModeIdentifiers
- dealloc
- currentLocale
- enabledInputModeIdentifiers
- setCurrentLocale:
- setCurrentLanguage:
- setEnabledInputModes:
- setDefaultInputModes:
- enabledInputModes
- defaultEnabledInputModesForCurrentLocale
- defaultInputModes
- currentLanguage
- supportedInputModeIdentifiers
@end
