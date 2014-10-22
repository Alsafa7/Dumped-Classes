@interface SSSQLiteQueryDescriptor : NSObject
{
	Class _entityClass;
	long long _limitCount;
	Class _memoryEntityClass;
	id _orderingClause;
	id _orderingDirections;
	id _orderingProperties;
	id _predicate;
	BOOL _returnsDistinctEntities;
}

+ orderingProperties
+ setOrderingProperties:
+ dealloc
+ copyWithZone:
+ setPredicate:
+ predicate
+ entityClass
+ memoryEntityClass
+ limitCount
+ _newSelectSQLWithProperties:count:columns:
+ setOrderingDirections:
+ setEntityClass:
+ setLimitCount:
+ setMemoryEntityClass:
+ orderingClause
+ setOrderingClause:
+ orderingDirections
+ returnsDistinctEntities
+ setReturnsDistinctEntities:
- orderingProperties
- setOrderingProperties:
- dealloc
- copyWithZone:
- setPredicate:
- predicate
- entityClass
- memoryEntityClass
- limitCount
- _newSelectSQLWithProperties:count:columns:
- setOrderingDirections:
- setEntityClass:
- setLimitCount:
- setMemoryEntityClass:
- orderingClause
- setOrderingClause:
- orderingDirections
- returnsDistinctEntities
- setReturnsDistinctEntities:
@end
