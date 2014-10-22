@interface SBOrientationLockManager : NSObject
{
	id _lockOverrideReasons;
	long long _userLockedOrientation;
}

+ restoreStateFromPrefs
+ enableLockOverrideForReason:forceOrientation:
+ setLockOverrideEnabled:forReason:
+ enableLockOverrideForReason:suggestOrientation:
+ lock:
+ _effectivelyLocked
+ _updateLockStateWithOrientation:forceUpdateHID:changes:
+ _updateLockStateWithChanges:
+ lockOverrideEnabled
+ userLockOrientation
+ updateLockOverrideForCurrentDeviceOrientation
+ dealloc
+ init
+ isLocked
+ lock
+ unlock
- restoreStateFromPrefs
- enableLockOverrideForReason:forceOrientation:
- setLockOverrideEnabled:forReason:
- enableLockOverrideForReason:suggestOrientation:
- lock:
- _effectivelyLocked
- _updateLockStateWithOrientation:forceUpdateHID:changes:
- _updateLockStateWithChanges:
- lockOverrideEnabled
- userLockOrientation
- updateLockOverrideForCurrentDeviceOrientation
- dealloc
- init
- isLocked
- lock
- unlock
@end
