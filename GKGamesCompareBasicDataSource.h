@interface GKGamesCompareBasicDataSource : GKBasicCollectionViewDataSource
{
	id _player;
	id _localPlayerSeed;
	id _playerSeed;
}

+ seedForLocalPlayerSeed:playerSeed:
+ overallSeed
+ listNeedsUpdateForLocalPlayerSeed:playerSeed:
+ setLocalPlayerSeed:
+ setPlayerSeed:
+ localPlayerSeed
+ playerSeed
+ refreshContentsForDataType:userInfo:updateNotifier:
+ initWithPlayer:
+ dealloc
+ player
+ setPlayer:
- seedForLocalPlayerSeed:playerSeed:
- overallSeed
- listNeedsUpdateForLocalPlayerSeed:playerSeed:
- setLocalPlayerSeed:
- setPlayerSeed:
- localPlayerSeed
- playerSeed
- refreshContentsForDataType:userInfo:updateNotifier:
- initWithPlayer:
- dealloc
- player
- setPlayer:
@end
