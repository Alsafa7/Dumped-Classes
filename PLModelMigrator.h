@interface PLModelMigrator : NSObject
{
	double startTime;
	id _fileManager;
	id _transaction;
	id _photoLibrary;
	long long _photoLibraryOnce;
	id _syncedPropertiesByUUID;
}

+ dealloc
+ init
+ photoLibrary
+ importAfterCrash:dictionariesByPhotoStreamID:completionBlock:
+ dontImportFileSystemDataIntoDatabase
+ loadFileSystemDataIntoDatabase
+ cleanupModelAfterRestoreFromiTunes
+ repairPotentialModelCorruption
+ recalculateCachedCountsWithSemaphore:
+ secondsNeededToCleanupModelAfteriTunesRestore
+ initWithImplicitTransaction:
+ setFileManager:
+ _importAllDCIMAssets
+ shouldRebuildDCIMDirectoryAtURL:directoryEnumerator:isPhotoStream:cameraRollOnly:
+ collectContentsOfDirectoryURL:forAddingToAlbum:intoAssetsArray:assetsKind:
+ _orderedAssetsToImportCameraRollOnly:
+ importFileSystemImportAssets:forceUpdate:
+ fileManager
+ collectFileURLs:forAddingToAlbum:intoAssetsArray:assetsKind:testCreationDates:
+ _syncedPropertiesForAssetUUID:
+ pausePhotoStreams
+ resumePhotoStreams
- dealloc
- init
- photoLibrary
- importAfterCrash:dictionariesByPhotoStreamID:completionBlock:
- dontImportFileSystemDataIntoDatabase
- loadFileSystemDataIntoDatabase
- cleanupModelAfterRestoreFromiTunes
- repairPotentialModelCorruption
- recalculateCachedCountsWithSemaphore:
- secondsNeededToCleanupModelAfteriTunesRestore
- initWithImplicitTransaction:
- setFileManager:
- _importAllDCIMAssets
- shouldRebuildDCIMDirectoryAtURL:directoryEnumerator:isPhotoStream:cameraRollOnly:
- collectContentsOfDirectoryURL:forAddingToAlbum:intoAssetsArray:assetsKind:
- _orderedAssetsToImportCameraRollOnly:
- importFileSystemImportAssets:forceUpdate:
- fileManager
- collectFileURLs:forAddingToAlbum:intoAssetsArray:assetsKind:testCreationDates:
- _syncedPropertiesForAssetUUID:
- pausePhotoStreams
- resumePhotoStreams
@end
