@interface GKGamesDataSource : GKCollectionViewDataSource
{
	Array _platformItemCounts;
	id _games;
	id _daemonSeed;
	id _loadedPages;
	id _player;
}

+ pageForItemIndex:
+ loadedPages
+ setLoadedPages:
+ setGames:
+ games
+ daemonSeed
+ shouldRefreshForSeed:
+ setDaemonSeed:
+ loadGameDetailsForPlayer:fromGames:forPages:handler:
+ loadGamesListForPlayer:handler:
+ itemIndexSetForPageRange:items:
+ platformForSection:
+ numberOfItemsForPlatform:
+ sectionForPlatform:
+ configureCell:withGameRecordAtIndex:
+ headerClass
+ sectionTitleForPlatform:
+ cellClass
+ refreshContentsForDataType:userInfo:updateNotifier:
+ configureCollectionView:
+ itemAtIndexPath:
+ removeItemAtIndexPath:
+ indexPathsForItem:
+ dealloc
+ init
+ collectionView:numberOfItemsInSection:
+ collectionView:cellForItemAtIndexPath:
+ numberOfSectionsInCollectionView:
+ collectionView:viewForSupplementaryElementOfKind:atIndexPath:
+ indexForIndexPath:
+ pageSize
+ player
+ setPlayer:
- pageForItemIndex:
- loadedPages
- setLoadedPages:
- setGames:
- games
- daemonSeed
- shouldRefreshForSeed:
- setDaemonSeed:
- loadGameDetailsForPlayer:fromGames:forPages:handler:
- loadGamesListForPlayer:handler:
- itemIndexSetForPageRange:items:
- platformForSection:
- numberOfItemsForPlatform:
- sectionForPlatform:
- configureCell:withGameRecordAtIndex:
- headerClass
- sectionTitleForPlatform:
- cellClass
- refreshContentsForDataType:userInfo:updateNotifier:
- configureCollectionView:
- itemAtIndexPath:
- removeItemAtIndexPath:
- indexPathsForItem:
- dealloc
- init
- collectionView:numberOfItemsInSection:
- collectionView:cellForItemAtIndexPath:
- numberOfSectionsInCollectionView:
- collectionView:viewForSupplementaryElementOfKind:atIndexPath:
- indexForIndexPath:
- pageSize
- player
- setPlayer:
@end
