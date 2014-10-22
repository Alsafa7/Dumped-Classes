@interface SKUILockupSwooshViewController : SKUISwooshViewController
{
	id _artworkContext;
	id _collectionView;
	BOOL _delegateWantsWillDisplay;
	BOOL _didInitialReload;
	id _hiddenIconIndexSet;
	id _items;
	struct _maxCellSize;
	struct _maxImageSize;
	id _seeAllTitle;
	id _seeAllURL;
	BOOL _seeAllHidden;
	id _swooshView;
	long long _swooshType;
	usigned long long _visibleLockupFields;
}

@end
