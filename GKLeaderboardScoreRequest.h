@interface GKLeaderboardScoreRequest : NSObject
{
	id _playerID;
	id _gameBundleID;
	id _identifier;
	id _groupIdentifier;
	BOOL _friendsOnly;
	long long _timeScope;
	BOOL _prefetch;
}

+ groupIdentifier
+ setGroupIdentifier:
+ setGameBundleID:
+ setFriendsOnly:
+ gameBundleID
+ friendsOnly
+ isPrefetch
+ setPrefetch:
+ setPlayerID:
+ playerID
+ timeScope
+ setTimeScope:
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ hash
+ identifier
+ setIdentifier:
- groupIdentifier
- setGroupIdentifier:
- setGameBundleID:
- setFriendsOnly:
- gameBundleID
- friendsOnly
- isPrefetch
- setPrefetch:
- setPlayerID:
- playerID
- timeScope
- setTimeScope:
- dealloc
- initWithCoder:
- encodeWithCoder:
- isEqual:
- hash
- identifier
- setIdentifier:
@end
