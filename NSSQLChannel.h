@interface NSSQLChannel : NSObject
{
	id _connection;
	id _sqlCore;
	id _currentEntity;
	id _fetchProperties;
	id _currentMOCon;
}

+ sqlCore
+ initWithSQLCore:
+ endFetch
+ isFetchInProgress
+ bindTempTablesForStatementIfNecessary:
+ endFetchAndRecycleStatement:
+ setCurrentEntity:
+ _propertiesToFetch
+ selectRowsWithFetchRequest:
+ selectRowsWithStatement:
+ selectRowsWithCachedStatement:
+ selectCountWithFetchRequest:
+ _openChannel
+ _closeChannel
+ _setCurrentEntityAndRelationshipWithFetchRequest:
+ dealloc
+ connection
+ setCurrentContext:
+ currentContext
+ finalize
- sqlCore
- initWithSQLCore:
- endFetch
- isFetchInProgress
- bindTempTablesForStatementIfNecessary:
- endFetchAndRecycleStatement:
- setCurrentEntity:
- _propertiesToFetch
- selectRowsWithFetchRequest:
- selectRowsWithStatement:
- selectRowsWithCachedStatement:
- selectCountWithFetchRequest:
- _openChannel
- _closeChannel
- _setCurrentEntityAndRelationshipWithFetchRequest:
- dealloc
- connection
- setCurrentContext:
- currentContext
- finalize
@end
