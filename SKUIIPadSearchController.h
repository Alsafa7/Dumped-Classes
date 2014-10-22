@interface SKUIIPadSearchController : NSObject
{
	id _clientContext;
	id _parentViewController;
	id _searchFieldController;
}

+ dealloc
+ parentViewController
+ clientContext
+ setNumberOfSearchResults:
+ _searchFieldController
+ initWithParentViewController:
+ newSearchFieldBarItem
+ _termDidChangeNotification:
+ _searchFieldController:requestSearchWithURL:orSearchTerm:
+ _existingSharedResultsViewController
+ _sharedResultsViewController
+ searchFieldController:requestSearchWithURL:
+ searchFieldController:requestSearchWithSearchTerm:
+ searchFieldControllerShouldBeginEditing:
+ setSearchFieldPlaceholderText:
+ setSearchFieldText:
+ .cxx_destruct
+ searchFieldController
+ setClientContext:
- dealloc
- parentViewController
- clientContext
- setNumberOfSearchResults:
- _searchFieldController
- initWithParentViewController:
- newSearchFieldBarItem
- _termDidChangeNotification:
- _searchFieldController:requestSearchWithURL:orSearchTerm:
- _existingSharedResultsViewController
- _sharedResultsViewController
- searchFieldController:requestSearchWithURL:
- searchFieldController:requestSearchWithSearchTerm:
- searchFieldControllerShouldBeginEditing:
- setSearchFieldPlaceholderText:
- setSearchFieldText:
- .cxx_destruct
- searchFieldController
- setClientContext:
@end
