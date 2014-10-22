@interface GKBasicCollectionViewDataSource : GKCollectionViewDataSource
{
	id _items;
	SEL _showAllAction;
	usigned long long _pageSize;
	id _filterPredicate;
	struct _preloadedRange;
}

+ configureCollectionView:
+ itemAtIndexPath:
+ removeItemAtIndexPath:
+ preloadImagesForItems:startingAtIndex:loadBlock:
+ _gkDescriptionWithChildren:
+ collectionViewDidBecomeInactive:
+ indexPathsForItem:
+ setShowAllAction:
+ showAllAction
+ setItemsNoNotify:
+ setFilterPredicate:
+ setPageSize:
+ setPreloadedRange:
+ removeItemsAtIndexes:
+ setItems:animated:complete:
+ countOfItems
+ itemsAtIndexes:
+ getItems:range:
+ insertItems:atIndexes:
+ replaceItemsAtIndexes:withItems:
+ preloadedRange
+ dealloc
+ init
+ copyWithZone:
+ items
+ setItems:
+ collectionView:numberOfItemsInSection:
+ numberOfSectionsInCollectionView:
+ collectionView:viewForSupplementaryElementOfKind:atIndexPath:
+ pageSize
+ filterPredicate
+ sectionTitle
- configureCollectionView:
- itemAtIndexPath:
- removeItemAtIndexPath:
- preloadImagesForItems:startingAtIndex:loadBlock:
- _gkDescriptionWithChildren:
- collectionViewDidBecomeInactive:
- indexPathsForItem:
- setShowAllAction:
- showAllAction
- setItemsNoNotify:
- setFilterPredicate:
- setPageSize:
- setPreloadedRange:
- removeItemsAtIndexes:
- setItems:animated:complete:
- countOfItems
- itemsAtIndexes:
- getItems:range:
- insertItems:atIndexes:
- replaceItemsAtIndexes:withItems:
- preloadedRange
- dealloc
- init
- copyWithZone:
- items
- setItems:
- collectionView:numberOfItemsInSection:
- numberOfSectionsInCollectionView:
- collectionView:viewForSupplementaryElementOfKind:atIndexPath:
- pageSize
- filterPredicate
- sectionTitle
@end
