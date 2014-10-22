@interface MPUSearchDataSource : MPUQueryDataSource
{
	id _operationQueue;
	id _searchOperation;
	id _searchResults;
	id _dataSource;
	id _searchString;
}

+ dealloc
+ count
+ dataSource
+ searchString
+ _searchPropertiesForGroupingType:
+ _searchOperation:didFinishWithResults:
+ initWithDataSource:operationQueue:
+ filterResultsUsingSearchString:
+ initWithDataSource:
+ .cxx_destruct
+ entities
- dealloc
- count
- dataSource
- searchString
- _searchPropertiesForGroupingType:
- _searchOperation:didFinishWithResults:
- initWithDataSource:operationQueue:
- filterResultsUsingSearchString:
- initWithDataSource:
- .cxx_destruct
- entities
@end
