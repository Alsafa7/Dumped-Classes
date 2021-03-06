@interface GKAchievementInternal : GKInternalRepresentation
{
	id _identifier;
	id _groupIdentifier;
	id _title;
	id _achievedDescription;
	id _unachievedDescription;
	id _icons;
	id _playerID;
	union _attributes;
	id _lastReportedDate;
	double _percentComplete;
}

+ mergePropertiesFromDescription:
+ groupIdentifier
+ setGroupIdentifier:
+ serverRepresentation
+ setLastReportedDate:
+ setMaximumPoints:
+ setReplayable:
+ setAchievedDescription:
+ setUnachievedDescription:
+ setPlayerID:
+ playerID
+ maximumPoints
+ achievedDescription
+ unachievedDescription
+ isReplayable
+ lastReportedDate
+ setPercentComplete:
+ dealloc
+ isHidden
+ setHidden:
+ setTitle:
+ isEqual:
+ hash
+ percentComplete
+ title
+ identifier
+ setIdentifier:
+ setIcons:
+ icons
+ attributes
+ setAttributes:
- mergePropertiesFromDescription:
- groupIdentifier
- setGroupIdentifier:
- serverRepresentation
- setLastReportedDate:
- setMaximumPoints:
- setReplayable:
- setAchievedDescription:
- setUnachievedDescription:
- setPlayerID:
- playerID
- maximumPoints
- achievedDescription
- unachievedDescription
- isReplayable
- lastReportedDate
- setPercentComplete:
- dealloc
- isHidden
- setHidden:
- setTitle:
- isEqual:
- hash
- percentComplete
- title
- identifier
- setIdentifier:
- setIcons:
- icons
- attributes
- setAttributes:
@end
