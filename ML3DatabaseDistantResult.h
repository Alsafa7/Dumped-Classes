@interface ML3DatabaseDistantResult : ML3DatabaseResult
{
	id _cachedRows;
	id _distantConnection;
	id _sql;
	id _parameters;
}

+ init
+ description
+ enumerateRowsWithBlock:
+ sql
+ parameters
+ indexForColumnName:
+ columnNameIndexMap
+ initWithStatement:
+ initWithDistantConnection:sql:parameters:
+ _remoteEnumerateRowsWithBlock:
+ _localEnumerateRowsWithBlock:
+ _fetchRowsIfEmpty
+ distantConnection
+ .cxx_destruct
- init
- description
- enumerateRowsWithBlock:
- sql
- parameters
- indexForColumnName:
- columnNameIndexMap
- initWithStatement:
- initWithDistantConnection:sql:parameters:
- _remoteEnumerateRowsWithBlock:
- _localEnumerateRowsWithBlock:
- _fetchRowsIfEmpty
- distantConnection
- .cxx_destruct
@end
