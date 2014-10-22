@interface GKMatchResponse : GKInternalRepresentation
{
	int _sequence;
	id _rid;
	id _matches;
	id _sessionToken;
	id _relayPushes;
	id _cdxTicket;
	id _matchingGroup;
	id _matchRequest;
	id _serverRequest;
	long long _state;
}

+ sequence
+ sessionToken
+ matches
+ cdxTicket
+ relayPushes
+ _incrementSequence
+ setMatches:
+ setSessionToken:
+ setRelayPushes:
+ setCdxTicket:
+ matchingGroup
+ setMatchingGroup:
+ serverRequest
+ setServerRequest:
+ matchRequest
+ setMatchRequest:
+ rid
+ setRid:
+ dealloc
+ state
+ setState:
+ isCancelled
+ isFinished
+ transitionToState:
- sequence
- sessionToken
- matches
- cdxTicket
- relayPushes
- _incrementSequence
- setMatches:
- setSessionToken:
- setRelayPushes:
- setCdxTicket:
- matchingGroup
- setMatchingGroup:
- serverRequest
- setServerRequest:
- matchRequest
- setMatchRequest:
- rid
- setRid:
- dealloc
- state
- setState:
- isCancelled
- isFinished
- transitionToState:
@end
