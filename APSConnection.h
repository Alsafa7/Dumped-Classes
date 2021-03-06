@interface APSConnection : NSObject
{
	id _delegateReference;
	id _ivarQueue;
	id _environmentName;
	id _publicToken;
	usigned long long _messageSize;
	id _connectionPortName;
	unsigned int _connectionPort;
	unsigned int _connectionServerPort;
	pointer _connectionSeverCFMachPort;
	id _enabledTopics;
	id _ignoredTopics;
	id _opportunisticTopics;
	BOOL _enableCriticalReliability;
	BOOL _enableStatusNotifications;
	BOOL _isConnected;
	BOOL _usesAppLaunchStats;
	id _idsToOutgoingMessages;
	usigned long long _nextOutgoingMessageID;
	id _machQueue;
	id _mach_source;
	id _connection;
	id _delegateQueue;
	BOOL _everHadDelegate;
	id _queuedDelegateBlocks;
}

+ isConnected
+ scheduleInRunLoop:
+ delegateQueue
+ dealloc
+ setDelegate:
+ delegate
+ _connectIfNecessary
+ initWithEnvironmentName:namedDelegatePort:queue:
+ _connectIfNecessaryOnIvarQueue
+ _disconnectOnIvarQueue
+ _shutdownOnIvarQueue
+ _disconnectFromDealloc
+ _shutdownFromDealloc
+ setEnableStatusNotifications:
+ _noteDisconnectedFromDaemonOnIvarQueue
+ _deliverOutgoingMessageResultWithID:error:
+ _addEnableCriticalReliabilityToXPCMessage:
+ _addEnableStatusNotificationsToXPCMessage:
+ _addUsesAppLaunchStatsToXPCMessage:
+ _setEnabledTopics:ignoredTopics:opportunisticTopics:sendToDaemon:
+ _setEnableCriticalReliability:sendToDaemon:
+ _setUsesAppLaunchStats:sendToDaemon:
+ _setEnableStatusNotifications:sendToDaemon:
+ _deliverPublicTokenOnIvarQueue:
+ _deliverConnectionStatusChange:
+ _cancelConnectionOnIvarQueue
+ _handleEvent:withHandler:
+ _onIvarQueue_setEnabledTopics:ignoredTopics:opportunisticTopics:sendToDaemon:
+ _listForIdentifierOnIvarQueue:
+ _sendOutgoingMessage:fake:
+ moveTopic:fromList:toList:
+ setUsesAppLaunchStats:
+ usesAppLaunchStats
+ _deliverMessage:
+ _deliverPublicToken:
+ _deliverToken:forTopic:identifier:
+ hasIdentity
+ sendFakeMessage:
+ requestTokenForTopic:identifier:
+ invalidateTokenForTopic:identifier:
+ ivarQueue
+ initWithEnvironmentName:queue:
+ publicToken
+ removeFromRunLoop
+ initWithEnvironmentName:
+ setEnabledTopics:
+ cancelOutgoingMessage:
+ setEnabledTopics:ignoredTopics:opportunisticTopics:
+ sendOutgoingMessage:
+ _cancelConnection
+ setEnableCriticalReliability:
+ setEnabledTopics:ignoredTopics:
+ messageSize
+ setMessageSize:
+ shutdown
+ _callDelegateOnIvarQueueWithBlock:
+ initWithEnvironmentName:namedDelegatePort:
+ _disconnect
- isConnected
- scheduleInRunLoop:
- delegateQueue
- dealloc
- setDelegate:
- delegate
- _connectIfNecessary
- initWithEnvironmentName:namedDelegatePort:queue:
- _connectIfNecessaryOnIvarQueue
- _disconnectOnIvarQueue
- _shutdownOnIvarQueue
- _disconnectFromDealloc
- _shutdownFromDealloc
- setEnableStatusNotifications:
- _noteDisconnectedFromDaemonOnIvarQueue
- _deliverOutgoingMessageResultWithID:error:
- _addEnableCriticalReliabilityToXPCMessage:
- _addEnableStatusNotificationsToXPCMessage:
- _addUsesAppLaunchStatsToXPCMessage:
- _setEnabledTopics:ignoredTopics:opportunisticTopics:sendToDaemon:
- _setEnableCriticalReliability:sendToDaemon:
- _setUsesAppLaunchStats:sendToDaemon:
- _setEnableStatusNotifications:sendToDaemon:
- _deliverPublicTokenOnIvarQueue:
- _deliverConnectionStatusChange:
- _cancelConnectionOnIvarQueue
- _handleEvent:withHandler:
- _onIvarQueue_setEnabledTopics:ignoredTopics:opportunisticTopics:sendToDaemon:
- _listForIdentifierOnIvarQueue:
- _sendOutgoingMessage:fake:
- moveTopic:fromList:toList:
- setUsesAppLaunchStats:
- usesAppLaunchStats
- _deliverMessage:
- _deliverPublicToken:
- _deliverToken:forTopic:identifier:
- hasIdentity
- sendFakeMessage:
- requestTokenForTopic:identifier:
- invalidateTokenForTopic:identifier:
- ivarQueue
- initWithEnvironmentName:queue:
- publicToken
- removeFromRunLoop
- initWithEnvironmentName:
- setEnabledTopics:
- cancelOutgoingMessage:
- setEnabledTopics:ignoredTopics:opportunisticTopics:
- sendOutgoingMessage:
- _cancelConnection
- setEnableCriticalReliability:
- setEnabledTopics:ignoredTopics:
- messageSize
- setMessageSize:
- shutdown
- _callDelegateOnIvarQueueWithBlock:
- initWithEnvironmentName:namedDelegatePort:
- _disconnect
@end
