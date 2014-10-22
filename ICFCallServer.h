@interface ICFCallServer : NSObject
{
	id _connection;
	id _clients;
	BOOL _hasRegistered;
}

+ dealloc
+ init
+ _cleanup
+ _cleanupClient:
+ _configureWithClient:
+ shouldAllowIncomingCallForNumber:forService:response:
+ _requestCallGrantForIdentifier:forService:waitForResponse:completionBlock:
+ _clientConnected
- dealloc
- init
- _cleanup
- _cleanupClient:
- _configureWithClient:
- shouldAllowIncomingCallForNumber:forService:response:
- _requestCallGrantForIdentifier:forService:waitForResponse:completionBlock:
- _clientConnected
@end
