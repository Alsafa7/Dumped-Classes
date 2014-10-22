@interface SKUIItemListTableViewController : UITableViewController
{
	id _clientContext;
	id _delegate;
	BOOL _delegateWantsDidRemove;
	BOOL _delegateWantsWillDisplay;
	BOOL _didLoadMore;
	id _hiddenIconIndexSet;
	struct _imageBoundingSize;
	id _artworkContext;
	id _itemCollectionController;
	id _itemList;
	id _loadMoreOperation;
	BOOL _loadsMoreItems;
	id _operationQueue;
	double _rowHeight;
	long long _selectionStyle;
	long long _separatorStyle;
	BOOL _suspended;
	id _uber;
	BOOL _requestedLoadMore;
}

@end
