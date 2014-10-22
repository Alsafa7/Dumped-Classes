@interface GKChallengesDataSource : GKCollectionViewDataSource
{
	id _game;
	id _player;
	id _games;
	id _bundleIDsToChallenges;
}

+ initWithPlayer:game:
+ gameForSection:
+ setGames:
+ setBundleIDsToChallenges:
+ _evaluateGame:withOldOrder:newOrder:oldLookup:newLookup:
+ _evaluateChallenge:withOldChallenges:newChallenges:oldSection:newSection:
+ itemsForLookup:order:
+ games
+ bundleIDsToChallenges
+ game
+ setGame:
+ refreshContentsForDataType:userInfo:updateNotifier:
+ configureCollectionView:
+ itemAtIndexPath:
+ removeItemAtIndexPath:
+ indexPathsForItem:
+ dealloc
+ collectionView:numberOfItemsInSection:
+ collectionView:cellForItemAtIndexPath:
+ numberOfSectionsInCollectionView:
+ player
+ setPlayer:
- initWithPlayer:game:
- gameForSection:
- setGames:
- setBundleIDsToChallenges:
- _evaluateGame:withOldOrder:newOrder:oldLookup:newLookup:
- _evaluateChallenge:withOldChallenges:newChallenges:oldSection:newSection:
- itemsForLookup:order:
- games
- bundleIDsToChallenges
- game
- setGame:
- refreshContentsForDataType:userInfo:updateNotifier:
- configureCollectionView:
- itemAtIndexPath:
- removeItemAtIndexPath:
- indexPathsForItem:
- dealloc
- collectionView:numberOfItemsInSection:
- collectionView:cellForItemAtIndexPath:
- numberOfSectionsInCollectionView:
- player
- setPlayer:
@end
