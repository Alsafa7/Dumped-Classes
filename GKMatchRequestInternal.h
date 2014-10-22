@interface GKMatchRequestInternal : GKInternalRepresentation
{
	usigned long long _matchType;
	id _playersToInvite;
	id _inviteMessage;
	id _localizableInviteMessage;
	id _sessionToken;
	id _rid;
	unsigned int _version;
	int _playerGroup;
	unsigned int _playerAttributes;
	unsigned char _minPlayers;
	unsigned char _maxPlayers;
	unsigned char _defaultNumberOfPlayers;
}

+ playerGroup
+ playerAttributes
+ sessionToken
+ setMatchType:
+ setPlayerGroup:
+ setPlayerAttributes:
+ setSessionToken:
+ localizableInviteMessage
+ setLocalizableInviteMessage:
+ inviteMessage
+ defaultNumberOfPlayers
+ minPlayers
+ setDefaultNumberOfPlayers:
+ maxPlayers
+ setMinPlayers:
+ setMaxPlayers:
+ playersToInvite
+ setPlayersToInvite:
+ setInviteMessage:
+ rid
+ setRid:
+ dealloc
+ init
+ isEqual:
+ hash
+ setVersion:
+ version
+ matchType
- playerGroup
- playerAttributes
- sessionToken
- setMatchType:
- setPlayerGroup:
- setPlayerAttributes:
- setSessionToken:
- localizableInviteMessage
- setLocalizableInviteMessage:
- inviteMessage
- defaultNumberOfPlayers
- minPlayers
- setDefaultNumberOfPlayers:
- maxPlayers
- setMinPlayers:
- setMaxPlayers:
- playersToInvite
- setPlayersToInvite:
- setInviteMessage:
- rid
- setRid:
- dealloc
- init
- isEqual:
- hash
- setVersion:
- version
- matchType
@end
