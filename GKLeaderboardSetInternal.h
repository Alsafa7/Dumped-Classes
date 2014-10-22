@interface GKLeaderboardSetInternal : GKInternalRepresentation
{
	id _identifier;
	id _groupIdentifier;
	id _title;
	id _leaderboardIdentifiers;
	id _icons;
}

+ setIdentifier
+ setSetIdentifier:
+ groupIdentifier
+ setGroupIdentifier:
+ leaderboardIdentifiers
+ setLeaderboardIdentifiers:
+ dealloc
+ setTitle:
+ isEqual:
+ hash
+ title
+ identifier
+ setIdentifier:
+ setIcons:
+ icons
- setIdentifier
- setSetIdentifier:
- groupIdentifier
- setGroupIdentifier:
- leaderboardIdentifiers
- setLeaderboardIdentifiers:
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
