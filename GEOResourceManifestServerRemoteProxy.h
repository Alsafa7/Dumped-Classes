@interface GEOResourceManifestServerRemoteProxy : NSObject
{
	id _delegate;
	id _conn;
	id _connLock;
	id _cancellingConnections;
	id _cancellingConnectionsLock;
	long long _closedCount;
	BOOL _started;
	BOOL _hiDPI;
	usigned long long _retryCount;
	BOOL _isUpdatingManifest;
	BOOL _isLoadingResources;
	id _serverQueue;
}

+ authToken
+ dealloc
+ setDelegate:
+ delegate
+ forceUpdate
+ startServer:
+ openConnection
+ closeConnection
+ serverQueue
+ setManifestToken:completionHandler:
+ getResourceManifestWithHandler:
+ setActiveTileGroupIdentifier:
+ resetActiveTileGroup
+ _handleMessage:xpcMessage:
+ initWithDelegate:
+ _setupConnection
- authToken
- dealloc
- setDelegate:
- delegate
- forceUpdate
- startServer:
- openConnection
- closeConnection
- serverQueue
- setManifestToken:completionHandler:
- getResourceManifestWithHandler:
- setActiveTileGroupIdentifier:
- resetActiveTileGroup
- _handleMessage:xpcMessage:
- initWithDelegate:
- _setupConnection
@end
