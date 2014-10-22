@interface GKScoreInternal : GKInternalRepresentation
{
	id _player;
	id _leaderboardIdentifier;
	id _groupLeaderboardIdentifier;
	id _formattedValue;
	id _date;
	long long _value;
	usigned long long _context;
	unsigned int _rank;
	BOOL _valueSet;
}

+ setGroupCategory:
+ groupCategory
+ setPlayerID:
+ playerID
+ setCategory:
+ category
+ serverRepresentation
+ setGroupLeaderboardIdentifier:
+ valueSet
+ groupLeaderboardIdentifier
+ setValueSet:
+ setFormattedValue:
+ setLeaderboardIdentifier:
+ leaderboardIdentifier
+ formattedValue
+ dealloc
+ initWithCoder:
+ isEqual:
+ hash
+ date
+ copyWithZone:
+ setValue:
+ context
+ value
+ setContext:
+ setDate:
+ rank
+ setRank:
+ player
+ setPlayer:
- setGroupCategory:
- groupCategory
- setPlayerID:
- playerID
- setCategory:
- category
- serverRepresentation
- setGroupLeaderboardIdentifier:
- valueSet
- groupLeaderboardIdentifier
- setValueSet:
- setFormattedValue:
- setLeaderboardIdentifier:
- leaderboardIdentifier
- formattedValue
- dealloc
- initWithCoder:
- isEqual:
- hash
- date
- copyWithZone:
- setValue:
- context
- value
- setContext:
- setDate:
- rank
- setRank:
- player
- setPlayer:
@end
