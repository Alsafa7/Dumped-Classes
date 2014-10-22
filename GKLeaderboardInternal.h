@interface GKLeaderboardInternal : GKInternalRepresentation
{
	id _identifier;
	id _groupIdentifier;
	id _title;
	id _leaderboardSetIdentifier;
	id _lastSubmittedDate;
	id _icons;
	unsigned int _overallRank;
	unsigned int _overallRankCount;
	unsigned short _friendRank;
	unsigned short _friendRankCount;
	unsigned int _maxRank;
	id _scores;
	id _playerScore;
}

+ maxRange
+ setCategory:
+ category
+ localizedTitle
+ setLocalizedTitle:
+ groupIdentifier
+ setGroupIdentifier:
+ playerScore
+ setFriendRank:
+ maxRank
+ setMaxRank:
+ leaderboardSetIdentifier
+ setLeaderboardSetIdentifier:
+ lastSubmittedDate
+ setLastSubmittedDate:
+ setPlayerScore:
+ overallRank
+ setOverallRank:
+ overallRankCount
+ setOverallRankCount:
+ friendRankCount
+ setFriendRankCount:
+ friendRank
+ setScores:
+ scores
+ dealloc
+ setTitle:
+ isEqual:
+ hash
+ title
+ identifier
+ setIdentifier:
+ setIcons:
+ icons
- maxRange
- setCategory:
- category
- localizedTitle
- setLocalizedTitle:
- groupIdentifier
- setGroupIdentifier:
- playerScore
- setFriendRank:
- maxRank
- setMaxRank:
- leaderboardSetIdentifier
- setLeaderboardSetIdentifier:
- lastSubmittedDate
- setLastSubmittedDate:
- setPlayerScore:
- overallRank
- setOverallRank:
- overallRankCount
- setOverallRankCount:
- friendRankCount
- setFriendRankCount:
- friendRank
- setScores:
- scores
- dealloc
- setTitle:
- isEqual:
- hash
- title
- identifier
- setIdentifier:
- setIcons:
- icons
@end
