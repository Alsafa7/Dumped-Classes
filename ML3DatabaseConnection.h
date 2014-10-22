@interface ML3DatabaseConnection : NSObject
{
	pointer _sqlitedb;
	BOOL _isOpen;
	id _statementsCache;
	id _statementsCacheSerialQueue;
	usigned long long _statementsSinceLastCheckpoint;
	unsigned int _transactionLevel;
	BOOL _nestedTransactionWantsToRollback;
	id _enqueuedTransactionCommitBlocks;
	id _owningPool;
	id _registeredFunctions;
	id _registeredModules;
	int _profilingLevel;
	int _willDeleteDatabaseNotifyToken;
	BOOL _isReadOnly;
	BOOL _automaticCheckpointingEnabled;
	id _connectionDelegate;
	id _databasePath;
	usigned long long _journalingMode;
	id _uniqueIdentifier;
	_iTunesExtensions;
	usigned long long _checkpointStatementThreshold;
}

+ isOpen
+ dealloc
+ init
+ isEqual:
+ description
+ flush
+ close
+ uniqueIdentifier
+ executeUpdate:withParameters:error:
+ executeQuery:withParameters:
+ tableExists:
+ executeQuery:
+ executeUpdate:
+ performTransactionWithBlock:
+ openBlobInTable:column:row:readOnly:
+ isInTransaction
+ _sqliteHandle
+ sqliteError
+ pushTransaction
+ enqueueBlockForTransactionCommit:
+ popTransactionAndCommit:
+ executeQuery:withParameters:limitProperty:limitValue:
+ popToRootTransactionAndCommit:
+ setConnectionDelegate:
+ pushTransactionUsingBehaviorType:
+ databasePathExists
+ initWithDatabasePath:
+ registerFunctionName:argumentCount:functionPointer:
+ registerFunctionName:argumentCount:functionPointer:userData:
+ setITunesExtensions:
+ iTunesExtensions
+ registerFunctionName:argumentCount:block:
+ deleteDatabase
+ performTransactionWithBlock:usingBehaviorType:
+ journalingMode
+ _ensureConnectionIsOpen
+ _handleBusyLockWithNumberOfRetries:
+ _handleDatabaseCorruption
+ _finalizeStatement:removeFromCache:
+ _setOwningPool:
+ setProfilingLevel:
+ setJournalingMode:
+ _isSharedMediaLibraryDatabase
+ _updateProfilingLevel
+ _openWithFlags:isRetry:
+ _createDatabaseDirectoryIfNonexistent
+ _handleZombieSQLiteConnection:
+ _logCurrentError
+ _finalizeAllStatements
+ _internalExecuteQuery:withParameters:limitProperty:limitValue:
+ _internalExecuteUpdate:withParameters:error:
+ _internalBeginTransactionWithBehaviorType:
+ _internalEndTransactionAndCommit:
+ _executeTransactionCommitBlocks:
+ _registeredModuleNamed:
+ _resetUnfinalizedStatements
+ _prepareStatement:error:
+ _executeStatement:
+ _finalizeStatement:
+ checkpointDatabase
+ _validatePreparedStatement:error:
+ _databaseFileExists
+ _clearStatementCache
+ profilingLevel
+ registerModuleName:moduleMethods:
+ setModuleContext:forModuleName:contextReleaseBlock:
+ moduleContextForModuleName:
+ lastInsertionRowID
+ _owningPool
+ _transactionLevel
+ _setTransactionLevel:
+ _shortDescription
+ _createDatabaseFileIfNonexistent
+ _logCurrentErrorWhilePerformingStatementOperation:statementSQL:
+ _logCurrentErrorWhilePerformingStatementOperation:statement:
+ connectionDelegate
+ automaticCheckpointingEnabled
+ setAutomaticCheckpointingEnabled:
+ checkpointStatementThreshold
+ setCheckpointStatementThreshold:
+ isReadOnly
+ databasePath
+ .cxx_destruct
+ open
+ setReadOnly:
- isOpen
- dealloc
- init
- isEqual:
- description
- flush
- close
- uniqueIdentifier
- executeUpdate:withParameters:error:
- executeQuery:withParameters:
- tableExists:
- executeQuery:
- executeUpdate:
- performTransactionWithBlock:
- openBlobInTable:column:row:readOnly:
- isInTransaction
- _sqliteHandle
- sqliteError
- pushTransaction
- enqueueBlockForTransactionCommit:
- popTransactionAndCommit:
- executeQuery:withParameters:limitProperty:limitValue:
- popToRootTransactionAndCommit:
- setConnectionDelegate:
- pushTransactionUsingBehaviorType:
- databasePathExists
- initWithDatabasePath:
- registerFunctionName:argumentCount:functionPointer:
- registerFunctionName:argumentCount:functionPointer:userData:
- setITunesExtensions:
- iTunesExtensions
- registerFunctionName:argumentCount:block:
- deleteDatabase
- performTransactionWithBlock:usingBehaviorType:
- journalingMode
- _ensureConnectionIsOpen
- _handleBusyLockWithNumberOfRetries:
- _handleDatabaseCorruption
- _finalizeStatement:removeFromCache:
- _setOwningPool:
- setProfilingLevel:
- setJournalingMode:
- _isSharedMediaLibraryDatabase
- _updateProfilingLevel
- _openWithFlags:isRetry:
- _createDatabaseDirectoryIfNonexistent
- _handleZombieSQLiteConnection:
- _logCurrentError
- _finalizeAllStatements
- _internalExecuteQuery:withParameters:limitProperty:limitValue:
- _internalExecuteUpdate:withParameters:error:
- _internalBeginTransactionWithBehaviorType:
- _internalEndTransactionAndCommit:
- _executeTransactionCommitBlocks:
- _registeredModuleNamed:
- _resetUnfinalizedStatements
- _prepareStatement:error:
- _executeStatement:
- _finalizeStatement:
- checkpointDatabase
- _validatePreparedStatement:error:
- _databaseFileExists
- _clearStatementCache
- profilingLevel
- registerModuleName:moduleMethods:
- setModuleContext:forModuleName:contextReleaseBlock:
- moduleContextForModuleName:
- lastInsertionRowID
- _owningPool
- _transactionLevel
- _setTransactionLevel:
- _shortDescription
- _createDatabaseFileIfNonexistent
- _logCurrentErrorWhilePerformingStatementOperation:statementSQL:
- _logCurrentErrorWhilePerformingStatementOperation:statement:
- connectionDelegate
- automaticCheckpointingEnabled
- setAutomaticCheckpointingEnabled:
- checkpointStatementThreshold
- setCheckpointStatementThreshold:
- isReadOnly
- databasePath
- .cxx_destruct
- open
- setReadOnly:
@end
