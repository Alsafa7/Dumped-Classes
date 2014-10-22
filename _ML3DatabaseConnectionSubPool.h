@interface _ML3DatabaseConnectionSubPool : NSObject
{
	id _checkoutQueue;
	id _checkinQueue;
	id _serialQueue;
	id _waitingSemaphore;
	id _availableConnections;
	id _busyConnections;
	int _connectionsProfilingLevel;
	int _willDeleteDatabaseNotifyToken;
	int _homeSharingCachesClearedNotifyToken;
	BOOL _useReadOnlyConnections;
	BOOL _useDistantConnections;
	id _databasePath;
	usigned long long _maxConcurrentConnections;
	usigned long long _connectionsJournalingMode;
}

+ dealloc
+ init
+ setConnectionsProfilingLevel:
+ setConnectionsJournalingMode:
+ checkInConnection:
+ initWithDatabasePath:maxConcurrentConnections:
+ setUseReadOnlyConnections:
+ setUseDistantConnections:
+ closeConnections
+ checkoutConnection:
+ connectionsProfilingLevel
+ connectionsJournalingMode
+ _handleDatabaseDeletion
+ maxConcurrentConnections
+ useReadOnlyConnections
+ useDistantConnections
+ databasePath
+ .cxx_destruct
- dealloc
- init
- setConnectionsProfilingLevel:
- setConnectionsJournalingMode:
- checkInConnection:
- initWithDatabasePath:maxConcurrentConnections:
- setUseReadOnlyConnections:
- setUseDistantConnections:
- closeConnections
- checkoutConnection:
- connectionsProfilingLevel
- connectionsJournalingMode
- _handleDatabaseDeletion
- maxConcurrentConnections
- useReadOnlyConnections
- useDistantConnections
- databasePath
- .cxx_destruct
@end
