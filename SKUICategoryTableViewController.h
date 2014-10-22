@interface SKUICategoryTableViewController : UITableViewController
{
	id _artworkLoader;
	id _category;
	id _clientContext;
	id _delegate;
	id _metricsLocations;
	long long _numberOfHiddenRows;
	id _selectedURL;
	id _defaultURL;
	BOOL _isRoot;
	BOOL _childrenHaveArtwork;
}

@end
