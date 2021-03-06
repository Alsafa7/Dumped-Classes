@interface GKLeaderboard : NSObject
{
	int _loadingCount;
	long long _timeScope;
	long long _playerScope;
	id _playerIDs;
	id _scores;
	id _localPlayerScore;
	id _weakDelegate;
	id _internal;
	struct _range;
}

+ loadImageWithCompletionHandler:
+ miniImageURL
+ imageURL
+ setInternal:
+ scoreRequestForGame:
+ loadScoresForRequest:handler:
+ loadScoresWithCompletionHandler:
+ loadingCount
+ setLoadingCount:
+ localPlayerScore
+ setLocalPlayerScore:
+ playerScope
+ timeScope
+ incrementLoadingCountAtomically
+ initWithPlayerIDs:
+ setTimeScope:
+ setPlayerScope:
+ loadScoresForGame:withCompletionHandler:
+ decrementLoadingCountAtomically
+ setScores:
+ scores
+ internal
+ initWithInternalRepresentation:
+ setPlayerIDs:
+ playerIDs
+ dealloc
+ setDelegate:
+ respondsToSelector:
+ init
+ isEqual:
+ hash
+ description
+ delegate
+ methodSignatureForSelector:
+ forwardingTargetForSelector:
+ range
+ valueForUndefinedKey:
+ isLoading
+ setRange:
+ setValue:forUndefinedKey:
- loadImageWithCompletionHandler:
- miniImageURL
- imageURL
- setInternal:
- scoreRequestForGame:
- loadScoresForRequest:handler:
- loadScoresWithCompletionHandler:
- loadingCount
- setLoadingCount:
- localPlayerScore
- setLocalPlayerScore:
- playerScope
- timeScope
- incrementLoadingCountAtomically
- initWithPlayerIDs:
- setTimeScope:
- setPlayerScope:
- loadScoresForGame:withCompletionHandler:
- decrementLoadingCountAtomically
- setScores:
- scores
- internal
- initWithInternalRepresentation:
- setPlayerIDs:
- playerIDs
- dealloc
- setDelegate:
- respondsToSelector:
- init
- isEqual:
- hash
- description
- delegate
- methodSignatureForSelector:
- forwardingTargetForSelector:
- range
- valueForUndefinedKey:
- isLoading
- setRange:
- setValue:forUndefinedKey:
@end
