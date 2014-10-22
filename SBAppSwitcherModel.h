@interface SBAppSwitcherModel : NSObject
{
	id _recentDisplayIdentifiers;
	id _saveTimer;
}

+ addToFront:
+ _recentsFromPrefs
+ _invalidateSaveTimer
+ _saveRecents
+ _saveRecentsDelayed
+ appsRemoved:added:
+ dealloc
+ init
+ snapshot
+ identifiers
+ remove:
- addToFront:
- _recentsFromPrefs
- _invalidateSaveTimer
- _saveRecents
- _saveRecentsDelayed
- appsRemoved:added:
- dealloc
- init
- snapshot
- identifiers
- remove:
@end
