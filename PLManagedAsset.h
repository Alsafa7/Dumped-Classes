@interface PLManagedAsset : _PLManagedAsset
{
	BOOL _didPrepareForDeletion;
	BOOL _isRegisteredForChanges;
	BOOL _needsMomentUpdate;
	BOOL _disableDupeAnalysis;
	BOOL _disableFileSystemPersistency;
	BOOL _didPersistAvalanche;
	id cachedNonPersistedVideoPlaybackURL;
	id cachedNonPersistedVideoPlaybackURLExpiration;
	id cachedNonPersistedVideoPlaybackURLError;
	id inflightImageInMemory;
	id inflightImagePath;
	id inflightIndexSheetImage;
	id inflightMetadata;
}

@end
