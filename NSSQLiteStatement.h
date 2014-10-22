@interface NSSQLiteStatement : NSSQLStatement
{
	pointer _cachedSQLiteStatement;
}

+ cachedSQLiteStatement
+ clearCaches
+ setCachedSQLiteStatement:
+ dealloc
+ finalize
- cachedSQLiteStatement
- clearCaches
- setCachedSQLiteStatement:
- dealloc
- finalize
@end
