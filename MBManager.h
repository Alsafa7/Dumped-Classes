@interface MBManager : NSObject
{
	id _delegate;
}

+ setLogLevel:
+ setDelegate:
+ init
+ delegate
+ _init
+ cancel
+ initWithDelegate:eventQueue:
+ restoreFilesForDomain:relativePath:pendingOnly:range:error:
+ setupBackupWithPasscode:error:
+ isBackupEnabled
+ setBackupEnabled:
+ syncBackupEnabled
+ backupState
+ backupList
+ getBackupListWithError:
+ getBackupListWithFiltering:error:
+ recordRestoreFailure:error:
+ restoreFailuresForDataclass:assetType:range:
+ countOfRestoreFailuresForDataclass:assetType:
+ startBackup
+ startBackupWithError:
+ restoreFileExistsWithPath:
+ restoreDataExistsForApplicationWithBundleID:size:
+ restoreFilesForDomain:error:
+ restoreFilesForDomain:relativePath:pendingOnly:error:
+ prioritizeRestoreFileWithPath:
+ dateOfLastBackup
+ dateOfNextScheduledBackup
+ startRestoreForBackupUDID:snapshotID:
+ startRestoreForBackupUDID:snapshotID:error:
+ restoreFileWithPath:error:
+ restoreFileWithPath:context:error:
+ restoreFileWithPath:
+ restoreApplicationWithBundleID:failed:error:
+ restoreApplicationWithBundleID:failed:context:error:
+ cancelApplicationRestoreWithBundleID:error:
+ finishRestore
+ insufficientFreeSpaceToRestore
+ cancelRestore
+ deleteBackupUDID:error:
+ startScanWithError:
+ nextBackupSize
+ domainInfoForName:
+ domainInfoList
+ removeDomainName:error:
+ isBackupEnabledForDomainName:
+ setBackupEnabled:forDomainName:
+ extractItemFromBackupUDID:snapshotID:domainName:relativePath:toPath:error:
+ addFileToBackupUDID:snapshotID:domainName:relativePath:fromPath:error:
+ deleteItemFromBackupUDID:snapshotID:domainName:relativePath:error:
+ getAppleIDsForBackupUDID:snapshotID:error:
+ restoreInfo
+ getLogLevel
+ setAllowiTunesBackup:
+ allowiTunesBackup
+ rebootDevice
+ initWithDelegate:
+ restoreState
- setLogLevel:
- setDelegate:
- init
- delegate
- _init
- cancel
- initWithDelegate:eventQueue:
- restoreFilesForDomain:relativePath:pendingOnly:range:error:
- setupBackupWithPasscode:error:
- isBackupEnabled
- setBackupEnabled:
- syncBackupEnabled
- backupState
- backupList
- getBackupListWithError:
- getBackupListWithFiltering:error:
- recordRestoreFailure:error:
- restoreFailuresForDataclass:assetType:range:
- countOfRestoreFailuresForDataclass:assetType:
- startBackup
- startBackupWithError:
- restoreFileExistsWithPath:
- restoreDataExistsForApplicationWithBundleID:size:
- restoreFilesForDomain:error:
- restoreFilesForDomain:relativePath:pendingOnly:error:
- prioritizeRestoreFileWithPath:
- dateOfLastBackup
- dateOfNextScheduledBackup
- startRestoreForBackupUDID:snapshotID:
- startRestoreForBackupUDID:snapshotID:error:
- restoreFileWithPath:error:
- restoreFileWithPath:context:error:
- restoreFileWithPath:
- restoreApplicationWithBundleID:failed:error:
- restoreApplicationWithBundleID:failed:context:error:
- cancelApplicationRestoreWithBundleID:error:
- finishRestore
- insufficientFreeSpaceToRestore
- cancelRestore
- deleteBackupUDID:error:
- startScanWithError:
- nextBackupSize
- domainInfoForName:
- domainInfoList
- removeDomainName:error:
- isBackupEnabledForDomainName:
- setBackupEnabled:forDomainName:
- extractItemFromBackupUDID:snapshotID:domainName:relativePath:toPath:error:
- addFileToBackupUDID:snapshotID:domainName:relativePath:fromPath:error:
- deleteItemFromBackupUDID:snapshotID:domainName:relativePath:error:
- getAppleIDsForBackupUDID:snapshotID:error:
- restoreInfo
- getLogLevel
- setAllowiTunesBackup:
- allowiTunesBackup
- rebootDevice
- initWithDelegate:
- restoreState
@end
