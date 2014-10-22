@interface SKUISearchFieldController : NSObject
{
	id _baseHintsURLString;
	id _clientContext;
	id _completionList;
	id _delegate;
	id _loadOperation;
	id _operationQueue;
	id _searchDisplayController;
	long long _numberOfSearchResults;
}

+ setSearchTerm:
+ dealloc
+ setDelegate:
+ tableView:didSelectRowAtIndexPath:
+ tableView:numberOfRowsInSection:
+ tableView:cellForRowAtIndexPath:
+ delegate
+ searchBar
+ searchBar:textDidChange:
+ searchBarShouldBeginEditing:
+ searchBarSearchButtonClicked:
+ searchDisplayController:shouldReloadTableForSearchString:
+ _reloadData
+ clientContext
+ _setResponse:error:
+ setNumberOfSearchResults:
+ _recordMetricsEvent:
+ _loadResultsForSearchTerm:
+ _loadResultsForURL:
+ contentsController
+ numberOfSearchResults
+ .cxx_destruct
+ initWithContentsController:
+ setClientContext:
- setSearchTerm:
- dealloc
- setDelegate:
- tableView:didSelectRowAtIndexPath:
- tableView:numberOfRowsInSection:
- tableView:cellForRowAtIndexPath:
- delegate
- searchBar
- searchBar:textDidChange:
- searchBarShouldBeginEditing:
- searchBarSearchButtonClicked:
- searchDisplayController:shouldReloadTableForSearchString:
- _reloadData
- clientContext
- _setResponse:error:
- setNumberOfSearchResults:
- _recordMetricsEvent:
- _loadResultsForSearchTerm:
- _loadResultsForURL:
- contentsController
- numberOfSearchResults
- .cxx_destruct
- initWithContentsController:
- setClientContext:
@end
