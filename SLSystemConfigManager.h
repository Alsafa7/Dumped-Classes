@interface SLSystemConfigManager : NSObject
{
	pointer _prefs;
	BOOL _notifyForExternalChangeOnly;
	int _applySkipCount;
	id _serviceType;
}

+ initWithServiceType:
+ _keepAlive
+ _initializeSystemConfigPrefs:
+ _setCallback:withContext:
+ _refresh
+ setCachedUsername:
+ cachedUsername
+ dealloc
+ _synchronize
+ _getValueForKey:
+ _notifyTarget:
+ _setValue:forKey:
+ _tearDown
+ .cxx_destruct
- initWithServiceType:
- _keepAlive
- _initializeSystemConfigPrefs:
- _setCallback:withContext:
- _refresh
- setCachedUsername:
- cachedUsername
- dealloc
- _synchronize
- _getValueForKey:
- _notifyTarget:
- _setValue:forKey:
- _tearDown
- .cxx_destruct
@end
