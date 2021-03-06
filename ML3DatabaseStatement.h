@interface ML3DatabaseStatement : NSObject
{
	BOOL _clearBindingsAfterRunning;
	BOOL _isExecuting;
	id _sql;
	pointer _sqliteStatement;
	id _connection;
}

+ dealloc
+ description
+ reset
+ connection
+ isExecuting
+ sql
+ clearBindings
+ finalizeStatement
+ sqliteStatement
+ setIsExecuting:
+ clearBindingsAfterRunning
+ _finalizeStatementAndRemoveFromCache:
+ bindValue:forParameterAtPosition:
+ initWithSQLiteStatement:connection:
+ isBusy
+ bindInt:forParameterAtPosition:
+ bindInt64:forParameterAtPosition:
+ bindDouble:forParameterAtPosition:
+ bindNullForParameterAtPosition:
+ bindBytes:length:forParameterAtPosition:
+ bindBytesNoCopy:length:forParameterAtPosition:
+ bindUTF8String:forParameterAtPosition:
+ bindUTF8StringNoCopy:forParameterAtPosition:
+ bindUTF8StringNoCopy:length:forParameterAtPosition:
+ bindValuesForParameterNames:
+ bindValuesInArray:
+ setSQL:
+ setSqliteStatement:
+ setClearBindingsAfterRunning:
+ isReadOnly
+ .cxx_destruct
+ step
- dealloc
- description
- reset
- connection
- isExecuting
- sql
- clearBindings
- finalizeStatement
- sqliteStatement
- setIsExecuting:
- clearBindingsAfterRunning
- _finalizeStatementAndRemoveFromCache:
- bindValue:forParameterAtPosition:
- initWithSQLiteStatement:connection:
- isBusy
- bindInt:forParameterAtPosition:
- bindInt64:forParameterAtPosition:
- bindDouble:forParameterAtPosition:
- bindNullForParameterAtPosition:
- bindBytes:length:forParameterAtPosition:
- bindBytesNoCopy:length:forParameterAtPosition:
- bindUTF8String:forParameterAtPosition:
- bindUTF8StringNoCopy:forParameterAtPosition:
- bindUTF8StringNoCopy:length:forParameterAtPosition:
- bindValuesForParameterNames:
- bindValuesInArray:
- setSQL:
- setSqliteStatement:
- setClearBindingsAfterRunning:
- isReadOnly
- .cxx_destruct
- step
@end
