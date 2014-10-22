@interface GKFriendsOfPlayerDataSource : GKBasicCollectionViewDataSource
{
	BOOL _showSharedFriends;
	BOOL _hideHiddenFriendsCount;
	id _player;
	usigned long long _hiddenFriendCount;
	id _title;
	id _alternateTitle;
}

+ setShowSharedFriends:
+ hiddenFriendCount
+ showSharedFriends
+ hideHiddenFriendsCount
+ setHideHiddenFriendsCount:
+ setHiddenFriendCount:
+ refreshContentsForDataType:userInfo:updateNotifier:
+ configureCollectionView:
+ setTitle:
+ title
+ collectionView:cellForItemAtIndexPath:
+ footerText
+ sectionTitle
+ player
+ setPlayer:
+ setAlternateTitle:
+ alternateTitle
- setShowSharedFriends:
- hiddenFriendCount
- showSharedFriends
- hideHiddenFriendsCount
- setHideHiddenFriendsCount:
- setHiddenFriendCount:
- refreshContentsForDataType:userInfo:updateNotifier:
- configureCollectionView:
- setTitle:
- title
- collectionView:cellForItemAtIndexPath:
- footerText
- sectionTitle
- player
- setPlayer:
- setAlternateTitle:
- alternateTitle
@end
