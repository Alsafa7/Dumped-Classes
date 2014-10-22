@interface GKGamesCompareOverviewDataSource : GKSplittingDataSource
{
	id _player;
	id _loadedPages;
}

+ configureCell:withItem:
+ pageForItemIndex:
+ loadDetailsForItemsInPages:handler:
+ itemRangeForPageRange:
+ loadedPages
+ setLoadedPages:
+ refreshContentsForDataType:userInfo:updateNotifier:
+ configureDataSource
+ configureCollectionView:
+ collectionViewWillBecomeActive:
+ initWithPlayer:
+ dealloc
+ collectionView:cellForItemAtIndexPath:
+ collectionView:viewForSupplementaryElementOfKind:atIndexPath:
+ indexForIndexPath:
+ pageSize
+ player
+ setPlayer:
- configureCell:withItem:
- pageForItemIndex:
- loadDetailsForItemsInPages:handler:
- itemRangeForPageRange:
- loadedPages
- setLoadedPages:
- refreshContentsForDataType:userInfo:updateNotifier:
- configureDataSource
- configureCollectionView:
- collectionViewWillBecomeActive:
- initWithPlayer:
- dealloc
- collectionView:cellForItemAtIndexPath:
- collectionView:viewForSupplementaryElementOfKind:atIndexPath:
- indexForIndexPath:
- pageSize
- player
- setPlayer:
@end
