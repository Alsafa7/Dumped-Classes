@interface NSSQLReadOnlySelectIntermediate : NSSQLSelectIntermediate
{
	BOOL _onlyFetchesAggregates;
}

+ generateSQLStringInContext:
+ onlyFetchesAggregates
- generateSQLStringInContext:
- onlyFetchesAggregates
@end
