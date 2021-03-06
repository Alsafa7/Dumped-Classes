@interface MBServiceCache : NSObject
{
	id _path;
	pointer _db;
	long long _openCount;
	BOOL _corrupt;
	id _configuration;
	BOOL _configurationUpToDate;
	id _domainManager;
	id _disabledDomainNames;
	id _stmtsBySQL;
	id _countAndTimeBySQL;
	id _upToDateBackpuUDIDs;
}

+ setDisabledDomainNames:restrictedDomainNames:
+ backupForUDID:lastModified:
+ restoreFailuresForDataClass:assetType:range:
+ removeAccount
+ removeBackupforUDID:
+ removeSnapshotForID:backupUDID:lastModified:
+ setLastModified:forBackupUDID:
+ filesToRestoreForDomainName:relativePath:pendingOnly:backupUDID:range:
+ restoreFileExistsWithDomainName:relativePath:backupUDID:
+ restoreFilesExistForDomainName:backupUDID:size:
+ prioritizeRestoreFileWithFileID:
+ nextBackupSizeWithUDID:
+ domainInfoForName:backupUDID:
+ domainNamesForBackupUDID:
+ removeDomainName:backupUDID:lastModified:
+ updateFileChangesAfterRemovingDomainName:
+ addDisabledDomainNames:restricted:
+ fileChangeCount:size:
+ removeDisabledDomainNames:
+ mergeSnapshotForID:backupUDID:lastModified:
+ areAllFilesCommittedForSnapshotID:backupUDID:
+ analyze
+ snapshotForSnapshotID:backupUDID:
+ refreshForBackupUDID:service:deleted:error:
+ verifyBackupUDID:service:
+ forceRefreshForBackupUDID:
+ keybagUUIDForBackupUDID:
+ removeAllFileChanges
+ removeAllFilesMissingEncryptionKey
+ areFilesMissingEncryptionKey
+ fileForID:backupUDID:
+ encryptionKeyForFileWithInodeNumber:
+ addFileMissingEncryptionKeyWithPath:
+ setFileEncryptionKey:forInodeNumber:
+ addFileChange:
+ deletedFileIDEnumeratorForBackupUDID:
+ addBackup:lastModified:
+ addSnapshot:backupUDID:
+ fileChangeEnumeratorWithOffset:limit:
+ removeFileEncryptionKeyForInodeNumber:
+ fileForID:snapshotID:backupUDID:
+ setStale:forSnapshotID:backupUDID:
+ addFile:snapshotID:backupUDID:committed:
+ setLastModified:forSnapshotID:backupUDID:
+ setCommitted:forFileID:snapshotID:backupUDID:
+ setResult:forFileChangeID:
+ fileChangeIDsWithResult:offset:limit:
+ removeFileID:forSnapshotID:backupUDID:
+ setCommitted:forSnapshotID:backupUDID:
+ setLocalCommitted:snapshotID:backupUDID:
+ updateFileChangesAfterCommittingSnapshot
+ removeAllFileEncryptionKeys
+ _remove
+ _raise:
+ _profile:time:
+ _exec:
+ _finalizeAll
+ _logProfile
+ _prepare:
+ removeAllBackups
+ removeAllDisabledDomains
+ removeAllRestores
+ snapshotsForBackupUDID:
+ _snapshotWithStmt:
+ _removeSnapshotForID:backupUDID:
+ localCommittedForSnapshotID:backupUDID:
+ _fileWithStmt:
+ _lastInsertRowID
+ _fileIDEnumeratorWithStmt:
+ _disabledDomainNames
+ _lastRefreshPropertyKeyForBackupUDID:
+ isStaleSnapshotID:backupUDID:
+ _rebuildSnapshot:backupUDID:service:error:
+ setDomainManager:
+ _fileChangeFromStmt:
+ _restoreFileWithStmt:
+ _restoreFilesWithStmt:
+ encryptedFilesExistForBackupUDID:
+ fileIDEnumeratorForSnapshotID:backupUDID:
+ activeDomainNamesForBackupUDID:
+ dateOfLastRefreshForBackupUDID:
+ isRefreshNeededForBackupUDID:
+ pathsForFilesMissingEncryptionKeyWithOffset:limit:
+ removeFileMissingEncryptionKeyWithPath:
+ restoreIDForMode:
+ removeRestoreForID:
+ restoreBackupUDID
+ setRestoreBackupUDID:
+ restoreSnapshotID
+ setRestoreSnapshotID:
+ restoreBackupLastModified
+ setRestoreBackupLastModified:
+ containsRestoreFilesForRestoreID:
+ containsFailedRestoreFilesForRestoreID:
+ restoreFilesCount:size:forRestoreID:backupUDID:
+ restoreFilesForBackupUDID:offset:limit:
+ restoreFilesForSnapshotID:backupUDID:restoreID:offset:limit:
+ restoreFileForFileID:
+ restoreFileForItemID:
+ addRestoreFile:
+ setRestoreID:forRestoreFile:
+ setRestoreID:forDomainName:relativePath:backupUDID:
+ setState:forFileID:restoreID:
+ setState:forRestoreID:
+ protectionClassesToRestoreByPathWithOffset:limit:
+ setProtectionClass:toRestoreForPath:
+ removeAllProtectionClassesToRetore
+ addRestoreFailure:
+ propertyForKey:
+ setProperty:forKey:
+ dealloc
+ begin
+ end
+ close
+ initWithPath:
+ configuration
+ setConfiguration:
+ isDomainNameEnabled:
+ relativePathsOfPlaceholderResourcesWithBundleID:lastModified:
+ setPlaceholderResourceRelativePaths:lastModfied:forBundleID:
+ countOfRestoreFailuresForDataclass:assetType:
+ repair
+ domainManager
+ rollback
+ creationDate
+ removePropertyForKey:
+ vacuum
+ open
- setDisabledDomainNames:restrictedDomainNames:
- backupForUDID:lastModified:
- restoreFailuresForDataClass:assetType:range:
- removeAccount
- removeBackupforUDID:
- removeSnapshotForID:backupUDID:lastModified:
- setLastModified:forBackupUDID:
- filesToRestoreForDomainName:relativePath:pendingOnly:backupUDID:range:
- restoreFileExistsWithDomainName:relativePath:backupUDID:
- restoreFilesExistForDomainName:backupUDID:size:
- prioritizeRestoreFileWithFileID:
- nextBackupSizeWithUDID:
- domainInfoForName:backupUDID:
- domainNamesForBackupUDID:
- removeDomainName:backupUDID:lastModified:
- updateFileChangesAfterRemovingDomainName:
- addDisabledDomainNames:restricted:
- fileChangeCount:size:
- removeDisabledDomainNames:
- mergeSnapshotForID:backupUDID:lastModified:
- areAllFilesCommittedForSnapshotID:backupUDID:
- analyze
- snapshotForSnapshotID:backupUDID:
- refreshForBackupUDID:service:deleted:error:
- verifyBackupUDID:service:
- forceRefreshForBackupUDID:
- keybagUUIDForBackupUDID:
- removeAllFileChanges
- removeAllFilesMissingEncryptionKey
- areFilesMissingEncryptionKey
- fileForID:backupUDID:
- encryptionKeyForFileWithInodeNumber:
- addFileMissingEncryptionKeyWithPath:
- setFileEncryptionKey:forInodeNumber:
- addFileChange:
- deletedFileIDEnumeratorForBackupUDID:
- addBackup:lastModified:
- addSnapshot:backupUDID:
- fileChangeEnumeratorWithOffset:limit:
- removeFileEncryptionKeyForInodeNumber:
- fileForID:snapshotID:backupUDID:
- setStale:forSnapshotID:backupUDID:
- addFile:snapshotID:backupUDID:committed:
- setLastModified:forSnapshotID:backupUDID:
- setCommitted:forFileID:snapshotID:backupUDID:
- setResult:forFileChangeID:
- fileChangeIDsWithResult:offset:limit:
- removeFileID:forSnapshotID:backupUDID:
- setCommitted:forSnapshotID:backupUDID:
- setLocalCommitted:snapshotID:backupUDID:
- updateFileChangesAfterCommittingSnapshot
- removeAllFileEncryptionKeys
- _remove
- _raise:
- _profile:time:
- _exec:
- _finalizeAll
- _logProfile
- _prepare:
- removeAllBackups
- removeAllDisabledDomains
- removeAllRestores
- snapshotsForBackupUDID:
- _snapshotWithStmt:
- _removeSnapshotForID:backupUDID:
- localCommittedForSnapshotID:backupUDID:
- _fileWithStmt:
- _lastInsertRowID
- _fileIDEnumeratorWithStmt:
- _disabledDomainNames
- _lastRefreshPropertyKeyForBackupUDID:
- isStaleSnapshotID:backupUDID:
- _rebuildSnapshot:backupUDID:service:error:
- setDomainManager:
- _fileChangeFromStmt:
- _restoreFileWithStmt:
- _restoreFilesWithStmt:
- encryptedFilesExistForBackupUDID:
- fileIDEnumeratorForSnapshotID:backupUDID:
- activeDomainNamesForBackupUDID:
- dateOfLastRefreshForBackupUDID:
- isRefreshNeededForBackupUDID:
- pathsForFilesMissingEncryptionKeyWithOffset:limit:
- removeFileMissingEncryptionKeyWithPath:
- restoreIDForMode:
- removeRestoreForID:
- restoreBackupUDID
- setRestoreBackupUDID:
- restoreSnapshotID
- setRestoreSnapshotID:
- restoreBackupLastModified
- setRestoreBackupLastModified:
- containsRestoreFilesForRestoreID:
- containsFailedRestoreFilesForRestoreID:
- restoreFilesCount:size:forRestoreID:backupUDID:
- restoreFilesForBackupUDID:offset:limit:
- restoreFilesForSnapshotID:backupUDID:restoreID:offset:limit:
- restoreFileForFileID:
- restoreFileForItemID:
- addRestoreFile:
- setRestoreID:forRestoreFile:
- setRestoreID:forDomainName:relativePath:backupUDID:
- setState:forFileID:restoreID:
- setState:forRestoreID:
- protectionClassesToRestoreByPathWithOffset:limit:
- setProtectionClass:toRestoreForPath:
- removeAllProtectionClassesToRetore
- addRestoreFailure:
- propertyForKey:
- setProperty:forKey:
- dealloc
- begin
- end
- close
- initWithPath:
- configuration
- setConfiguration:
- isDomainNameEnabled:
- relativePathsOfPlaceholderResourcesWithBundleID:lastModified:
- setPlaceholderResourceRelativePaths:lastModfied:forBundleID:
- countOfRestoreFailuresForDataclass:assetType:
- repair
- domainManager
- rollback
- creationDate
- removePropertyForKey:
- vacuum
- open
@end
