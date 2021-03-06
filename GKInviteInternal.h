@interface GKInviteInternal : GKInternalRepresentation
{
	id _inviteID;
	id _sessionToken;
	id _player;
	id _message;
	id _localizableMessage;
	id _deviceID;
	id _bundleID;
	id _peerID;
	id _peerPushToken;
	id _peerNATIP;
	id _peerBlob;
	id _rid;
	int _playerGroup;
	unsigned int _playerAttributes;
	int _peerNATType;
	usigned long long _matchType;
	unsigned char _version;
	id _participantID;
}

+ peerID
+ setPeerID:
+ playerGroup
+ playerAttributes
+ peerBlob
+ sessionToken
+ peerPushToken
+ peerNATType
+ peerNATIP
+ isNearby
+ setMatchType:
+ localizableMessage
+ setLocalizableMessage:
+ setPlayerGroup:
+ setPlayerAttributes:
+ setSessionToken:
+ setInviteID:
+ setPeerPushToken:
+ setPeerNATType:
+ setPeerNATIP:
+ setPeerBlob:
+ rid
+ setRid:
+ inviteID
+ bundleID
+ dealloc
+ init
+ isEqual:
+ hash
+ message
+ setMessage:
+ setVersion:
+ version
+ participantID
+ setParticipantID:
+ deviceID
+ setDeviceID:
+ setBundleID:
+ player
+ setPlayer:
+ matchType
- peerID
- setPeerID:
- playerGroup
- playerAttributes
- peerBlob
- sessionToken
- peerPushToken
- peerNATType
- peerNATIP
- isNearby
- setMatchType:
- localizableMessage
- setLocalizableMessage:
- setPlayerGroup:
- setPlayerAttributes:
- setSessionToken:
- setInviteID:
- setPeerPushToken:
- setPeerNATType:
- setPeerNATIP:
- setPeerBlob:
- rid
- setRid:
- inviteID
- bundleID
- dealloc
- init
- isEqual:
- hash
- message
- setMessage:
- setVersion:
- version
- participantID
- setParticipantID:
- deviceID
- setDeviceID:
- setBundleID:
- player
- setPlayer:
- matchType
@end
