@interface ASUpdatesViewController : SKUIViewController
{
	id _autoUpdatesAlertView;
	id _borderColor;
	id _expandedUpdateItems;
	BOOL _isLoading;
	BOOL _isPad;
	id _itemCollectionController;
	id _landscapeLayoutCache;
	id _portraitLayoutCache;
	BOOL _showsPurchasedPageLink;
	id _softwareUpdatesStore;
	id _tableView;
	char _updateAllEnabled;
	id _updatesPage;
}

@end
