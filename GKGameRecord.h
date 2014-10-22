@interface GKGameRecord : GKGame
{
	id _player;
	id _latestAchievement;
	usigned long long _numberOfChallenges;
	id _latestChallenge;
	usigned long long _numberOfActiveMatches;
	usigned long long _numberOfLocalPlayerTurns;
}

+ setInternal:
+ initWithInternalRepresentation:player:
+ played
+ latestAchievement
+ setLatestAchievement:
+ numberOfChallenges
+ setNumberOfChallenges:
+ latestChallenge
+ setLatestChallenge:
+ numberOfActiveMatches
+ numberOfLocalPlayerTurns
+ setNumberOfActiveMatches:
+ setNumberOfLocalPlayerTurns:
+ initWithInternalRepresentation:
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ hash
+ description
+ player
+ setPlayer:
- setInternal:
- initWithInternalRepresentation:player:
- played
- latestAchievement
- setLatestAchievement:
- numberOfChallenges
- setNumberOfChallenges:
- latestChallenge
- setLatestChallenge:
- numberOfActiveMatches
- numberOfLocalPlayerTurns
- setNumberOfActiveMatches:
- setNumberOfLocalPlayerTurns:
- initWithInternalRepresentation:
- dealloc
- initWithCoder:
- encodeWithCoder:
- isEqual:
- hash
- description
- player
- setPlayer:
@end
