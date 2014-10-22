@interface GKTurnBasedParticipantInternal : GKInternalRepresentation
{
	id _sessionID;
	id _player;
	id _invitedBy;
	id _inviteMessage;
	id _status;
	id _lastTurnDate;
	id _timeoutDate;
	unsigned int _matchOutcome;
	unsigned char _slot;
}

+ playerID
+ slot
+ serverRepresentation
+ matchOutcome
+ timeoutDate
+ setMatchOutcome:
+ setTimeoutDate:
+ setInvitedBy:
+ setSlot:
+ lastTurnDate
+ setLastTurnDate:
+ inviteMessage
+ setInviteMessage:
+ invitedBy
+ dealloc
+ isEqual:
+ hash
+ status
+ setStatus:
+ sessionID
+ setSessionID:
+ player
+ setPlayer:
- playerID
- slot
- serverRepresentation
- matchOutcome
- timeoutDate
- setMatchOutcome:
- setTimeoutDate:
- setInvitedBy:
- setSlot:
- lastTurnDate
- setLastTurnDate:
- inviteMessage
- setInviteMessage:
- invitedBy
- dealloc
- isEqual:
- hash
- status
- setStatus:
- sessionID
- setSessionID:
- player
- setPlayer:
@end
