@interface GKGamesRecommendationsDataSource : GKBasicCollectionViewDataSource
{
	long long _maxItemCount;
}

+ storeFrontChanged:
+ loadGamesWithHandler:
+ refreshContentsForDataType:userInfo:updateNotifier:
+ configureCollectionView:
+ removeItemAtIndexPath:
+ setMaxItemCount:
+ maxItemCount
+ showAllAction
+ dealloc
+ init
+ collectionView:cellForItemAtIndexPath:
+ sectionTitle
- storeFrontChanged:
- loadGamesWithHandler:
- refreshContentsForDataType:userInfo:updateNotifier:
- configureCollectionView:
- removeItemAtIndexPath:
- setMaxItemCount:
- maxItemCount
- showAllAction
- dealloc
- init
- collectionView:cellForItemAtIndexPath:
- sectionTitle
@end
