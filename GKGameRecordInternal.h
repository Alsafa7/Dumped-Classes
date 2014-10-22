@interface GKGameRecordInternal : GKGameInternal
{
	id _score;
	id _lastPlayedDate;
	id _purchaseDate;
	unsigned short _achievements;
	short _achievementPoints;
	unsigned short _friendRank;
	unsigned short _maxFriendRank;
	unsigned int _rank;
	unsigned int _maxRank;
}

+ score
+ updateWithGame:
+ achievements
+ setAchievements:
+ setAchievementPoints:
+ setFriendRank:
+ setMaxFriendRank:
+ maxRank
+ setMaxRank:
+ setScore:
+ friendRank
+ achievementPoints
+ maxFriendRank
+ lastPlayedDate
+ setLastPlayedDate:
+ dealloc
+ rank
+ setRank:
+ purchaseDate
+ setPurchaseDate:
- score
- updateWithGame:
- achievements
- setAchievements:
- setAchievementPoints:
- setFriendRank:
- setMaxFriendRank:
- maxRank
- setMaxRank:
- setScore:
- friendRank
- achievementPoints
- maxFriendRank
- lastPlayedDate
- setLastPlayedDate:
- dealloc
- rank
- setRank:
- purchaseDate
- setPurchaseDate:
@end
