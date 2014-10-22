@interface NSPersistentStoreCoordinator : NSObject
{
	struct _flags;
	unsigned int _reserved32;
	long long _miniLock;
	id _extendedStoreURLs;
	id _externalRecordsHelper;
	id _managedObjectModel;
	id _coreLock;
	id _persistentStores;
}

@end
