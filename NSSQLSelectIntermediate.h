@interface NSSQLSelectIntermediate : NSSQLIntermediate
{
	id _entity;
	id _entityAlias;
	id _correlationTarget;
	id _fetchColumns;
	BOOL _useDistinct;
	id _columnAlias;
	BOOL _isCount;
}

+ generateSQLStringInContext:
+ isSelectTargetScoped
+ setFetchColumns:
+ setUseDistinct:
+ setIsCount:
+ onlyFetchesAggregates
+ initWithEntity:alias:fetchColumns:inScope:
+ initForCorrelationTarget:alias:fetchColumns:inScope:
+ setColumnAlias:
+ setFetchEntity:
+ dealloc
- generateSQLStringInContext:
- isSelectTargetScoped
- setFetchColumns:
- setUseDistinct:
- setIsCount:
- onlyFetchesAggregates
- initWithEntity:alias:fetchColumns:inScope:
- initForCorrelationTarget:alias:fetchColumns:inScope:
- setColumnAlias:
- setFetchEntity:
- dealloc
@end
