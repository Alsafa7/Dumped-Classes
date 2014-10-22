@interface EKDaemonConnection : NSObject
{
	unsigned int _options;
	id _dbPath;
	unsigned int _serverPort;
	unsigned int _machPort;
	unsigned int _connectionPort;
	id _connectionLock;
	id _delegate;
	id _replyHandlers;
	unsigned int _nextID;
	id _replySource;
	id _replyHandlerLock;
	BOOL _registeredForStartNote;
}

+ initWithOptions:path:
+ addReplyHandler:
+ removeReplyHandler:
+ _connectToServer
+ _finishAllRepliesOnServerDeath
+ _processReplyWithID:data:finished:
+ _daemonRestarted
+ dealloc
+ setDelegate:
+ delegate
+ disconnect
+ port
- initWithOptions:path:
- addReplyHandler:
- removeReplyHandler:
- _connectToServer
- _finishAllRepliesOnServerDeath
- _processReplyWithID:data:finished:
- _daemonRestarted
- dealloc
- setDelegate:
- delegate
- disconnect
- port
@end
