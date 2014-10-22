@interface ML3DatabaseConnectionPool : NSObject
{
	id _readersSubPool;
	id _writersSubPool;
	id _identifiersConnectionsMap;
	id _serialQueue;
	id _poolStorageKey;
	int _connectionsProfilingLevel;
	BOOL _useDistantWriterConnections;
	id _databasePath;
	id _delegate;
	usigned long long _maxReaders;
	usigned long long _maxWriters;
	usigned long long _connectionsJournalingMode;
}

+ dealloc
+ setDelegate:
+ init
+ delegate
+ setConnectionsProfilingLevel:
+ setUseDistantWriterConnections:
+ _connectionForWriting:useThreadConnection:
+ initWithDatabasePath:maxReaders:maxWriters:
+ setConnectionsJournalingMode:
+ closeAllConnections
+ readerConnection
+ writerConnection
+ checkInConnection:
+ isCurrentThreadConnectionInTransaction
+ _localConnectionForThread:
+ _setLocalConnection:forThread:
+ _setConnection:forIdentifier:
+ _connectionForIdentifier:
+ initWithDatabasePath:maxReaders:
+ connectionsProfilingLevel
+ useDistantWriterConnections
+ maxReaders
+ maxWriters
+ connectionsJournalingMode
+ databasePath
+ .cxx_destruct
- dealloc
- setDelegate:
- init
- delegate
- setConnectionsProfilingLevel:
- setUseDistantWriterConnections:
- _connectionForWriting:useThreadConnection:
- initWithDatabasePath:maxReaders:maxWriters:
- setConnectionsJournalingMode:
- closeAllConnections
- readerConnection
- writerConnection
- checkInConnection:
- isCurrentThreadConnectionInTransaction
- _localConnectionForThread:
- _setLocalConnection:forThread:
- _setConnection:forIdentifier:
- _connectionForIdentifier:
- initWithDatabasePath:maxReaders:
- connectionsProfilingLevel
- useDistantWriterConnections
- maxReaders
- maxWriters
- connectionsJournalingMode
- databasePath
- .cxx_destruct
@end
