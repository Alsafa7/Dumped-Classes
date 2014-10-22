@interface CKConversationSearcher : NSObject
{
	id _delegate;
	id _sortedSearchResults;
	id _searchController;
	id _searchBar;
	id _currentQuery;
	BOOL _shouldDisplayNoResults;
	BOOL _active;
	BOOL _showingSearchResults;
}

+ dealloc
+ setDelegate:
+ tableView:didSelectRowAtIndexPath:
+ tableView:shouldIndentWhileEditingRowAtIndexPath:
+ tableView:numberOfRowsInSection:
+ tableView:cellForRowAtIndexPath:
+ tableView:commitEditingStyle:forRowAtIndexPath:
+ isActive
+ searchBar
+ searchBar:textDidChange:
+ searchBarShouldBeginEditing:
+ searchBarCancelButtonClicked:
+ searchDisplayController:willShowSearchResultsTableView:
+ searchDisplayController:didShowSearchResultsTableView:
+ searchDisplayController:willHideSearchResultsTableView:
+ searchDisplayController:didHideSearchResultsTableView:
+ searchDisplayControllerDidBeginSearch:
+ searchDisplayControllerDidEndSearch:
+ searchDisplayControllerWillBeginSearch:
+ searchDisplayControllerWillEndSearch:
+ searchDisplayController:shouldReloadTableForSearchString:
+ _cancel
+ isShowingSearchResults
+ searchController
+ initWithDelegate:
- dealloc
- setDelegate:
- tableView:didSelectRowAtIndexPath:
- tableView:shouldIndentWhileEditingRowAtIndexPath:
- tableView:numberOfRowsInSection:
- tableView:cellForRowAtIndexPath:
- tableView:commitEditingStyle:forRowAtIndexPath:
- isActive
- searchBar
- searchBar:textDidChange:
- searchBarShouldBeginEditing:
- searchBarCancelButtonClicked:
- searchDisplayController:willShowSearchResultsTableView:
- searchDisplayController:didShowSearchResultsTableView:
- searchDisplayController:willHideSearchResultsTableView:
- searchDisplayController:didHideSearchResultsTableView:
- searchDisplayControllerDidBeginSearch:
- searchDisplayControllerDidEndSearch:
- searchDisplayControllerWillBeginSearch:
- searchDisplayControllerWillEndSearch:
- searchDisplayController:shouldReloadTableForSearchString:
- _cancel
- isShowingSearchResults
- searchController
- initWithDelegate:
@end
