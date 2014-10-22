@interface GKGamePointsCompareDataSource : GKGamesDataSource
{
	id _localGames;
}

+ gameRecordForLocalPlayerAtIndexPath:
+ loadGameDetailsForPlayer:fromGames:forPages:handler:
+ loadGamesListForPlayer:handler:
+ configureCell:withGameRecordAtIndex:
+ headerClass
+ setLocalGames:
+ localGames
+ _loadGamesListForPlayer:handler:
+ cellClass
+ dealloc
+ collectionView:viewForSupplementaryElementOfKind:atIndexPath:
- gameRecordForLocalPlayerAtIndexPath:
- loadGameDetailsForPlayer:fromGames:forPages:handler:
- loadGamesListForPlayer:handler:
- configureCell:withGameRecordAtIndex:
- headerClass
- setLocalGames:
- localGames
- _loadGamesListForPlayer:handler:
- cellClass
- dealloc
- collectionView:viewForSupplementaryElementOfKind:atIndexPath:
@end
