@interface GKFriendsDataSource : GKBasicCollectionViewDataSource
{
	long long _kind;
}

+ refreshContentsForDataType:userInfo:updateNotifier:
+ configureCollectionView:
+ removeItemAtIndexPath:
+ copyWithZone:
+ collectionView:cellForItemAtIndexPath:
+ kind
+ setKind:
+ sectionTitle
- refreshContentsForDataType:userInfo:updateNotifier:
- configureCollectionView:
- removeItemAtIndexPath:
- copyWithZone:
- collectionView:cellForItemAtIndexPath:
- kind
- setKind:
- sectionTitle
@end
