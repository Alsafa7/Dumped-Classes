@interface SUPreferences : NSObject
{
	int _logLevel;
	BOOL _disableUserWiFiOnlyPeriod;
	BOOL _disableBuildNumberComparison;
	BOOL _allowSameBuildUpdates;
}

+ logLevel
+ dealloc
+ init
+ disableBuildNumberComparison
+ allowSameBuildUpdates
+ disableUserWiFiOnlyPeriod
+ _loadPreferences
+ _defaultLogLevel
+ _copyPreferenceForKey:ofType:
+ _getBooleanPreferenceForKey:withDefaultValue:
- logLevel
- dealloc
- init
- disableBuildNumberComparison
- allowSameBuildUpdates
- disableUserWiFiOnlyPeriod
- _loadPreferences
- _defaultLogLevel
- _copyPreferenceForKey:ofType:
- _getBooleanPreferenceForKey:withDefaultValue:
@end
