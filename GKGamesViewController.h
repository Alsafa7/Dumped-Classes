@interface GKGamesViewController : GKCollectionViewController
{
	BOOL _shouldShowPlaceholder;
	BOOL _shouldSupportSearch;
	usigned long long _controllerMode;
	id _recommendationsDataSource;
	id _player;
	id _gamesDataSource;
	long long _dataSourceType;
}

@end
