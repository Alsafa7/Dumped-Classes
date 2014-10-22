@interface NSSQLiteConnection : NSSQLConnection
{
	pointer _db;
	pointer _vmstatement;
	int _rowsProcessedCount;
	unsigned int _lastEntityKey;
	id _finalEntity;
	id _lastEntity;
	pointer _fetchPKStatement;
	pointer _updatePKStatement;
	id _beginStatement;
	id _commitStatement;
	id _rollbackStatement;
	id _vmCachedStatements;
	id _pragmaSettings;
	pointer _cachedEntityUpdateStatements;
	double _timeOutOption;
	double _timeOutIncrement;
	Array _extraBuffersForRegisteredFunctions;
	id _dbPathRegisteredWithBackupd;
	long long _vacuumTracker;
	id _temporaryTables;
	struct _sqliteConnectionFlags;
	usigned long long _debugInode;
}

@end
