@interface ML3MusicLibrary : NSObject
{
	id _libraryUID;
	id _atomicityQueue;
	BOOL _reloadForMediaServiceNeeded;
	id _accountCacheDatabase;
	id _geniusDatabase;
	id _uppService;
	id _notifyNamesToIgnore;
	id _pendingNotifyPostNames;
	id _pendingLocalNotificationsToPost;
	id _libraryChangedNotify;
	id _nonContentsNotify;
	id _invisiblePropertyNotify;
	id _displayValuesNotify;
	id _syncGenerationNotify;
	id _libraryUIDNotify;
	int _systemLanguageChangedToken;
	id _mcSettingsObserver;
	id _loggingObserver;
	int _willDeleteDatabaseNotifyToken;
	id _artworkUtility;
	pointer _sortKeyBuilder;
	BOOL _isHomeSharingLibraryLoaded;
	BOOL _isHomeSharingLibrary;
	BOOL _hasEverConnectedTo;
	BOOL _keepPresignedValidyAfterVerification;
	BOOL _currentThreadHasWriterConnectionCheckedOut;
	id _connectionPool;
	id _databasePath;
	id _libraryEntityFilterPredicates;
	id _libraryContainerFilterPredicates;
}

@end
