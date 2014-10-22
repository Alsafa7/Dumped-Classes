@interface CTCallCenter : NSObject
{
	pointer _server;
	id _currentCalls;
	id _callEventHandler;
}

+ setUpServerConnection
+ cleanUpServerConnection
+ handleNotificationFromConnection:ofType:withInfo:
+ setCallEventHandler:
+ calculateCallStateChanges:
+ getCurrentCallSetFromServer:
+ callEventHandler
+ setCurrentCalls:
+ broadcastCallStateChangesIfNeededWithFailureLogMessage:
+ dealloc
+ init
+ description
+ currentCalls
- setUpServerConnection
- cleanUpServerConnection
- handleNotificationFromConnection:ofType:withInfo:
- setCallEventHandler:
- calculateCallStateChanges:
- getCurrentCallSetFromServer:
- callEventHandler
- setCurrentCalls:
- broadcastCallStateChangesIfNeededWithFailureLogMessage:
- dealloc
- init
- description
- currentCalls
@end
