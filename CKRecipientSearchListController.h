@interface CKRecipientSearchListController : UITableViewController
{
	BOOL _shouldDisplayGroupSuggestionCells;
	int _pendingSearchTypes;
	id _delegate;
	id _searchResults;
	id _enteredRecipients;
	id _searchText;
	id _searchManager;
	id _searchResultsModel;
	id _statusQueryController;
	id _currentSearchTaskID;
	id _defaultiMessageAccount;
}

@end
