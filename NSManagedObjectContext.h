@interface NSManagedObjectContext : NSObject
{
	int _spinLock;
	id _parentObjectStore;
	id _undoManager;
	pointer _dispatchQueue;
	struct _flags;
	id _unprocessedChanges;
	id _unprocessedDeletes;
	id _unprocessedInserts;
	id _insertedObjects;
	id _deletedObjects;
	id _changedObjects;
	id _lockedObjects;
	id _refreshedObjects;
	id _infoByGID;
	pointer _cachedObsInfoByEntity;
	short _undoTransactionID;
	id _lock;
	long long _lockCount;
	long long _objectStoreLockCount;
	double _fetchTimestamp;
	id _delegate;
	id _referenceQueue;
	id _userinfo;
	id _mergePolicy;
	int _cd_rc;
	int _ignoreChangeNotification;
	id _editors;
	pointer _debuggingRecords;
	id _tombstonedIDs;
	id _childIDMappings;
}

@end
