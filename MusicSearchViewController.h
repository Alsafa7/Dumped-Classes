@interface MusicSearchViewController : UIViewController
{
	id _activityIndicatorView;
	BOOL _canShowContinueSearch;
	id _continueSearchButton;
	id _loadingLabel;
	id _nonEmptySearchDataSources;
	id _noResultsLabel;
	id _searchDataSources;
	id _searchOperationQueue;
	id _tableViewBackgroundView;
	id _tableViewDimmingView;
	id _tapGestureRecognizer;
	id _delegate;
	id _searchTerm;
	id _tableView;
}

@end
