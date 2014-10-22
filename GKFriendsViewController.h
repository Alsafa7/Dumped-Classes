@interface GKFriendsViewController : GKCollectionViewController
{
	BOOL _shouldUpdateContentOnlyWhenAuthenticated;
	BOOL _isDisplayingPlayerNotInList;
	id _selectedPlayer;
	id _friendRequestSynopsisDataSource;
	id _friendsDataSource;
	id _atozDataSource;
	id _recentDataSource;
	id _recsDataSource;
	id _pointsDataSource;
	id _globalPointsDataSource;
	id _friendsPointsDataSource;
	id _modalNavController;
	id _detailPopoverController;
	id _deferredPresentRequestsBlock;
}

@end
