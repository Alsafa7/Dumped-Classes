@interface GKScoreLeaderboard : GKLeaderboard
{
	id _game;
	id _player;
	struct _totalRange;
	struct _displayedRange;
	id _showcasedScores;
	usigned long long _maxLoaded;
	struct _currentRange;
	id _comparePlayerScore;
	id _error;
	id _loadQueue;
	id _allScores;
}

+ setError:
+ game
+ setGame:
+ placeholderLeaderboardItemsForRankRange:
+ comparePlayerScore
+ displayedRange
+ loadQueue
+ loadScoresForGame:withCompletionHandler:
+ setComparePlayerScore:
+ initWithGame:
+ totalRange
+ setDisplayedRange:
+ initWithInternalRepresentation:
+ initRangeAndQueue
+ allScores
+ insertLeaderboardScores:
+ scoreAtIndex:
+ scoresInRange:
+ maxLoadedScores
+ setAllScores:
+ dealloc
+ error
+ player
+ setPlayer:
- setError:
- game
- setGame:
- placeholderLeaderboardItemsForRankRange:
- comparePlayerScore
- displayedRange
- loadQueue
- loadScoresForGame:withCompletionHandler:
- setComparePlayerScore:
- initWithGame:
- totalRange
- setDisplayedRange:
- initWithInternalRepresentation:
- initRangeAndQueue
- allScores
- insertLeaderboardScores:
- scoreAtIndex:
- scoresInRange:
- maxLoadedScores
- setAllScores:
- dealloc
- error
- player
- setPlayer:
@end
