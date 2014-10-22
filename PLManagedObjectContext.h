@interface PLManagedObjectContext : NSManagedObjectContext
{
	BOOL _hasMetadataChanges;
	BOOL _isConnectedToChangeHub;
	BOOL _mergingChanges;
	BOOL _savingDuringMerge;
	BOOL _isInitializingSingletons;
	BOOL _isBackingALAssetsLibrary;
	BOOL _suspendClientServerTransactions;
	id _mergePolicy;
	id _delayedDeletions;
	id _delayedMomentAssetUpdates;
	id _delayedMomentAssetDeletions;
	id _delayedCloudFeedDeletionEntries;
	id _delayedCloudFeedAlbumUpdates;
	id _delayedCloudFeedAssetInserts;
	id _delayedCloudFeedAssetUpdates;
	id _delayedCloudFeedCommentInserts;
	id _delayedCloudFeedInvitationRecordUpdates;
	id _delayedDupeAnalysisNormalInserts;
	id _delayedDupeAnalysisCloudInserts;
	id _delayedAssetsForFileSystemPersistency;
	id _avalancheUUIDsForUpdate;
	id _photoLibrary;
	id _ptpNotificationDelegate;
	BOOL _regenerateVideoThumbnails;
	id changeHubConnection;
}

@end
