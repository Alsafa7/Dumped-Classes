@interface TIPreferencesController : NSObject
{
	id _synchronizePreferencesTimer;
	BOOL dontSynchronizePreferences;
	BOOL isInternalInstall;
}

+ dealloc
+ init
+ boolForKey:
+ setValue:forKey:
+ valueForKey:
+ preferences
+ synchronizePreferences
+ releaseDontSynchronizePreferences
+ touchSynchronizePreferencesTimer
+ domains
+ defaultForKey:
+ dontSynchronizePreferences
+ setIsInternalInstall:
+ domainForType:
+ setDontSynchronizePreferences:
+ clearSynchronizePreferencesTimer
+ preferencesChangedCallback:
+ isInternalInstall
- dealloc
- init
- boolForKey:
- setValue:forKey:
- valueForKey:
- preferences
- synchronizePreferences
- releaseDontSynchronizePreferences
- touchSynchronizePreferencesTimer
- domains
- defaultForKey:
- dontSynchronizePreferences
- setIsInternalInstall:
- domainForType:
- setDontSynchronizePreferences:
- clearSynchronizePreferencesTimer
- preferencesChangedCallback:
- isInternalInstall
@end
