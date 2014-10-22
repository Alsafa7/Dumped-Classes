@interface NSFetchRequest : NSPersistentStoreRequest
{
	id _groupByProperties;
	id _havingPredicate;
	usigned long long _offset;
	id _valuesToFetch;
	id _entity;
	id _predicate;
	id _sortDescriptors;
	usigned long long _batchSize;
	usigned long long _fetchLimit;
	id _relationshipKeyPathsForPrefetching;
	struct _flags;
}

@end
