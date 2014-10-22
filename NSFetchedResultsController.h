@interface NSFetchedResultsController : NSObject
{
	id _fetchRequest;
	id _managedObjectContext;
	id _sectionNameKeyPath;
	id _sectionNameKey;
	id _cacheName;
	pointer _cache;
	struct _flags;
	id _delegate;
	id _sortKeys;
	id _fetchedObjects;
	id _sections;
	id _sectionsByName;
	id _sectionIndexTitles;
	id _sectionIndexTitlesSections;
}

@end
