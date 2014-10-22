@interface SSSoftwareUpdatesStore : NSObject
{
	id _calloutQueue;
	id _connection;
	id _database;
	id _delegate;
	BOOL _didMigration;
	id _dispatchQueue;
	pointer _mobileCoreServices;
	BOOL _useLocalRead;
	BOOL _useLocalWrite;
}

+ dealloc
+ setDelegate:
+ init
+ delegate
+ _copyUpdates
+ _migrateReadOnlyDatabase
+ _copyUpdatesWithSession:
+ clearExpiredUpdateHistoryWithCompletionBlock:
+ getUpdatesWithCompletionBlock:
+ hideApplicationBadgeForPendingUpdates
+ reloadFromServerWithCompletionBlock:
+ removeUpdateBulletins
+ showApplicationBadgeForPendingUpdates
+ _sendStoreDidChange
- dealloc
- setDelegate:
- init
- delegate
- _copyUpdates
- _migrateReadOnlyDatabase
- _copyUpdatesWithSession:
- clearExpiredUpdateHistoryWithCompletionBlock:
- getUpdatesWithCompletionBlock:
- hideApplicationBadgeForPendingUpdates
- reloadFromServerWithCompletionBlock:
- removeUpdateBulletins
- showApplicationBadgeForPendingUpdates
- _sendStoreDidChange
@end
