@interface SSDownloadHandler : NSObject
{
	id _controlConnection;
	id _delegate;
	id _delegateQueue;
	id _dispatchQueue;
	id _downloadPhasesToIgnore;
	long long _handlerID;
	id _observerConnection;
	BOOL _sessionsNeedPowerAssertion;
	BOOL _sessionsShouldBlockOtherDownloads;
}

+ setDownloadPhasesToIgnore:
+ setSessionsNeedPowerAssertion:
+ setSessionsShouldBlockOtherDownloads:
+ dealloc
+ setDelegate:
+ init
+ description
+ delegate
+ _setValue:forProperty:
+ _connectToDaemon
+ handlerIdentifier
+ _handleMessage:fromServerConnection:
+ _sendDisconnectMessage
+ _sendAuthenticationSessionWithMessage:
+ _sendSessionHandleWithMessage:
+ _sendSessionCancelWithMessage:
+ _sendSessionPauseWithMessage:
+ _controlConnection
+ _newSessionWithMessage:
+ downloadPhasesToIgnore
+ resetDisavowedSessions
+ sessionsNeedPowerAssertion
+ sessionsShouldBlockOtherDownloads
- setDownloadPhasesToIgnore:
- setSessionsNeedPowerAssertion:
- setSessionsShouldBlockOtherDownloads:
- dealloc
- setDelegate:
- init
- description
- delegate
- _setValue:forProperty:
- _connectToDaemon
- handlerIdentifier
- _handleMessage:fromServerConnection:
- _sendDisconnectMessage
- _sendAuthenticationSessionWithMessage:
- _sendSessionHandleWithMessage:
- _sendSessionCancelWithMessage:
- _sendSessionPauseWithMessage:
- _controlConnection
- _newSessionWithMessage:
- downloadPhasesToIgnore
- resetDisavowedSessions
- sessionsNeedPowerAssertion
- sessionsShouldBlockOtherDownloads
@end
