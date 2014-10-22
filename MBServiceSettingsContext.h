@interface MBServiceSettingsContext : MBSettingsContext
{
	id _account;
	id _lockManager;
	id _backupUDID;
	long long _snapshotID;
	id _cacheDir;
	id _systemDir;
	id _restoreMode;
	id _watchdog;
	id _powerAssertion;
}

+ chunkStorePath
+ setBackupUDID:
+ setSnapshotID:
+ restoreMode
+ setLockManager:
+ setSystemDir:
+ setCacheDir:
+ setWatchdog:
+ setPowerAssertion:
+ setRestoreMode:
+ cachePath
+ lockManager
+ cacheDir
+ systemDir
+ watchdog
+ powerAssertion
+ dealloc
+ account
+ setAccount:
+ backupUDID
+ snapshotID
- chunkStorePath
- setBackupUDID:
- setSnapshotID:
- restoreMode
- setLockManager:
- setSystemDir:
- setCacheDir:
- setWatchdog:
- setPowerAssertion:
- setRestoreMode:
- cachePath
- lockManager
- cacheDir
- systemDir
- watchdog
- powerAssertion
- dealloc
- account
- setAccount:
- backupUDID
- snapshotID
@end
