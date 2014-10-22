@interface NSManagedObjectModel : NSObject
{
	id _dataForOptimization;
	pointer _optimizationHints;
	id _localizationPolicy;
	id _entities;
	id _configurations;
	id _fetchRequestTemplates;
	id _versionIdentifiers;
	struct _managedObjectModelFlags;
}

@end
