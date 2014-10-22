@interface GKGameInternal : GKInternalRepresentation
{
	id _bundleIdentifier;
	id _bundleVersion;
	id _adamID;
	id _externalVersion;
	id _name;
	id _icons;
	id _defaultLeaderboardIdentifier;
	id _storeItem;
	union _flags;
	unsigned short _numberOfLeaderboards;
	unsigned short _numberOfLeaderboardSets;
	unsigned short _numberOfAchievements;
	unsigned short _maxAchievementPoints;
}

+ defaultCategory
+ numberOfCategories
+ serverRepresentation
+ supportsLeaderboardSets
+ supportsMultiplayer
+ hasAggregateLeaderboard
+ numberOfLeaderboardSets
+ numberOfAchievements
+ supportsTurnBasedMultiplayer
+ setValid:
+ setPlatform:
+ setPrerendered:
+ setSupportsLeaderboards:
+ setSupportsLeaderboardSets:
+ setHasAggregateLeaderboard:
+ setSupportsAchievements:
+ setSupportsMultiplayer:
+ setSupportsTurnBasedMultiplayer:
+ setExternalVersion:
+ defaultLeaderboardIdentifier
+ setDefaultLeaderboardIdentifier:
+ numberOfLeaderboards
+ setNumberOfLeaderboards:
+ setNumberOfLeaderboardSets:
+ setNumberOfAchievements:
+ setMaxAchievementPoints:
+ storeItem
+ maxAchievementPoints
+ supportsLeaderboards
+ supportsAchievements
+ setStoreItem:
+ platform
+ adamID
+ externalVersion
+ bundleVersion
+ dealloc
+ isEqual:
+ hash
+ description
+ bundleIdentifier
+ isValid
+ setName:
+ name
+ setIcons:
+ icons
+ flags
+ setFlags:
+ setAdamID:
+ isPrerendered
+ setBundleIdentifier:
+ setBundleVersion:
- defaultCategory
- numberOfCategories
- serverRepresentation
- supportsLeaderboardSets
- supportsMultiplayer
- hasAggregateLeaderboard
- numberOfLeaderboardSets
- numberOfAchievements
- supportsTurnBasedMultiplayer
- setValid:
- setPlatform:
- setPrerendered:
- setSupportsLeaderboards:
- setSupportsLeaderboardSets:
- setHasAggregateLeaderboard:
- setSupportsAchievements:
- setSupportsMultiplayer:
- setSupportsTurnBasedMultiplayer:
- setExternalVersion:
- defaultLeaderboardIdentifier
- setDefaultLeaderboardIdentifier:
- numberOfLeaderboards
- setNumberOfLeaderboards:
- setNumberOfLeaderboardSets:
- setNumberOfAchievements:
- setMaxAchievementPoints:
- storeItem
- maxAchievementPoints
- supportsLeaderboards
- supportsAchievements
- setStoreItem:
- platform
- adamID
- externalVersion
- bundleVersion
- dealloc
- isEqual:
- hash
- description
- bundleIdentifier
- isValid
- setName:
- name
- setIcons:
- icons
- flags
- setFlags:
- setAdamID:
- isPrerendered
- setBundleIdentifier:
- setBundleVersion:
@end
