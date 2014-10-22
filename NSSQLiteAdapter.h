@interface NSSQLiteAdapter : NSSQLAdapter
{
	id _dbpath;
}

+ supportsCorrelatedSubqueries
+ statementClass
+ typeStringForColumn:
+ typeStringForSQLType:
+ initWithSQLCore:
+ sqliteVersion
+ pathnameForDatabase
+ dealloc
+ type
+ createConnection
- supportsCorrelatedSubqueries
- statementClass
- typeStringForColumn:
- typeStringForSQLType:
- initWithSQLCore:
- sqliteVersion
- pathnameForDatabase
- dealloc
- type
- createConnection
@end
