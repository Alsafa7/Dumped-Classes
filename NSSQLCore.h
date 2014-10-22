@interface NSSQLCore : NSPersistentStore
{
	id _model;
	id _adapter;
	id _connection;
	id _channels;
	id _currentContext;
	id _lastEntity;
	id _rowCache;
	id _uniqueTable;
	id _toManyCache;
	pointer _deleteTable;
	id _lockedObjects;
	pointer _dbOperationsByGlobalID;
	id _currentSaveRequest;
	int _lazyFaultDebugLevel;
	id _batchFaultBuffer;
	id _batchToManyFaultBuffer;
	pointer _currentGlobalID;
	id _currentRow;
	id _observer;
	id _missingObjectGIDs;
	id _storeMetadata;
	id _externalDataReferencesToSave;
	id _externalDataReferencesToDelete;
	id _externalDataReferencesDirectory;
	id _externalDataLinksDirectory;
	int _transactionInMemorySequence;
	int _moreOtherReserved;
	struct _sqlCoreFlags;
}

@end
