@interface RadiosPreferences : NSObject
{
	pointer _prefs;
	int _applySkipCount;
	id _delegate;
	BOOL _isCachedAirplaneModeValid;
	BOOL _cachedAirplaneMode;
	BOOL notifyForExternalChangeOnly;
}

+ getValueForKey:
+ release
+ dealloc
+ setDelegate:
+ init
+ delegate
+ setValue:forKey:
+ synchronize
+ setAirplaneMode:
+ notifyTarget:
+ initializeSCPrefs:
+ setCallback:withContext:
+ notifyForExternalChangeOnly
+ setNotifyForExternalChangeOnly:
+ refresh
+ airplaneMode
- getValueForKey:
- release
- dealloc
- setDelegate:
- init
- delegate
- setValue:forKey:
- synchronize
- setAirplaneMode:
- notifyTarget:
- initializeSCPrefs:
- setCallback:withContext:
- notifyForExternalChangeOnly
- setNotifyForExternalChangeOnly:
- refresh
- airplaneMode
@end
