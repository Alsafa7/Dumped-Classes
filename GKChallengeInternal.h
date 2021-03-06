@interface GKChallengeInternal : GKInternalRepresentation
{
	id _challengeID;
	id _issuingPlayerID;
	id _receivingPlayerID;
	id _message;
	id _issueDate;
	id _completionDate;
	id _compatibleBundleIDs;
	id _game;
	id _issuingPlayer;
	id _receivingPlayer;
	long long _state;
	id _bundleID;
}

+ completionDate
+ setCompletionDate:
+ serverRepresentation
+ receivingPlayerID
+ issuingPlayerID
+ setIssuingPlayerID:
+ receivingPlayer
+ compatibleBundleIDs
+ challengeID
+ issueDate
+ issueRepresentationToPlayerID:
+ findLocalGameBundleID
+ setChallengeID:
+ setReceivingPlayerID:
+ setCompatibleBundleIDs:
+ setIssuingPlayer:
+ setReceivingPlayer:
+ setIssueDate:
+ game
+ setGame:
+ issuingPlayer
+ bundleID
+ dealloc
+ isEqual:
+ hash
+ state
+ type
+ setState:
+ message
+ setMessage:
+ setBundleID:
- completionDate
- setCompletionDate:
- serverRepresentation
- receivingPlayerID
- issuingPlayerID
- setIssuingPlayerID:
- receivingPlayer
- compatibleBundleIDs
- challengeID
- issueDate
- issueRepresentationToPlayerID:
- findLocalGameBundleID
- setChallengeID:
- setReceivingPlayerID:
- setCompatibleBundleIDs:
- setIssuingPlayer:
- setReceivingPlayer:
- setIssueDate:
- game
- setGame:
- issuingPlayer
- bundleID
- dealloc
- isEqual:
- hash
- state
- type
- setState:
- message
- setMessage:
- setBundleID:
@end
