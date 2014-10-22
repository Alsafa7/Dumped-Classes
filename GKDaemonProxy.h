@interface GKDaemonProxy : NSObject
{
	id _connection;
	id _serviceSemaphore;
	id _serviceLookup;
	id _interfaceLookup;
	id _invocationQueue;
	id _concurrentRequestSemaphore;
	id _pendingRequests;
	id _dataUpdateDelegate;
	id _networkActivityIndicatorDelegate;
}

+ setLocalPlayer:authenticated:reply:
+ addInterface:toLookup:
+ buildServiceLookup
+ addService:forProtocol:toLookup:
+ resetServiceLookup
+ buildInterfaceLookup
+ getAuthenticatedPlayerIDWithHandler:
+ getAccountNameWithHandler:
+ beginNetworkActivity
+ endNetworkActivity
+ resetNetworkActivity
+ receivedChallengeSelected:
+ completedChallengeSelected:
+ dispatchCompletedChallenge:
+ challengeReceived:
+ challengeCompleted:
+ setBadgeCount:forType:
+ refreshContentsForDataType:userInfo:
+ methodSignatureForProtocol:selector:
+ buildServiceLookupIfNeccessary
+ replyQueueForRequestSelector:
+ _replyToDuplicatesForRequest:withInvocation:queue:
+ setPreferencesValues:
+ setCurrentGame:sandboxed:reply:
+ respondedToNearbyInvite:
+ scoreSelected:
+ achievementSelected:
+ setLogBits:
+ dataUpdateDelegate
+ setDataUpdateDelegate:
+ networkActivityIndicatorDelegate
+ setNetworkActivityIndicatorDelegate:
+ authenticatedPlayerID
+ hasAuthenticatedAccount
+ dealloc
+ init
+ methodSignatureForSelector:
+ forwardInvocation:
+ connection
+ connection:handleInvocation:isReply:
+ setConnection:
+ accountName
- setLocalPlayer:authenticated:reply:
- addInterface:toLookup:
- buildServiceLookup
- addService:forProtocol:toLookup:
- resetServiceLookup
- buildInterfaceLookup
- getAuthenticatedPlayerIDWithHandler:
- getAccountNameWithHandler:
- beginNetworkActivity
- endNetworkActivity
- resetNetworkActivity
- receivedChallengeSelected:
- completedChallengeSelected:
- dispatchCompletedChallenge:
- challengeReceived:
- challengeCompleted:
- setBadgeCount:forType:
- refreshContentsForDataType:userInfo:
- methodSignatureForProtocol:selector:
- buildServiceLookupIfNeccessary
- replyQueueForRequestSelector:
- _replyToDuplicatesForRequest:withInvocation:queue:
- setPreferencesValues:
- setCurrentGame:sandboxed:reply:
- respondedToNearbyInvite:
- scoreSelected:
- achievementSelected:
- setLogBits:
- dataUpdateDelegate
- setDataUpdateDelegate:
- networkActivityIndicatorDelegate
- setNetworkActivityIndicatorDelegate:
- authenticatedPlayerID
- hasAuthenticatedAccount
- dealloc
- init
- methodSignatureForSelector:
- forwardInvocation:
- connection
- connection:handleInvocation:isReply:
- setConnection:
- accountName
@end
