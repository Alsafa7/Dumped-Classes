@interface ML3ContainerQuery : ML3Query
{
	id _containerPredicate;
	id _container;
	id _limitedPersistentIDs;
}

+ initWithCoder:
+ encodeWithCoder:
+ container
+ hasEntities
+ countOfEntities
+ countOfDistinctRowsForColumn:
+ selectPersistentIDsSQLAndProperties:ordered:
+ enumerationDatabaseResultForSQL:onConnection:withParameters:
+ valueForAggregateFunction:onEntitiesForProperty:
+ initWithEntityClass:container:predicate:orderingTerms:
+ requiresSmartLimiting
+ limitedPersistentIDs
+ .cxx_destruct
- initWithCoder:
- encodeWithCoder:
- container
- hasEntities
- countOfEntities
- countOfDistinctRowsForColumn:
- selectPersistentIDsSQLAndProperties:ordered:
- enumerationDatabaseResultForSQL:onConnection:withParameters:
- valueForAggregateFunction:onEntitiesForProperty:
- initWithEntityClass:container:predicate:orderingTerms:
- requiresSmartLimiting
- limitedPersistentIDs
- .cxx_destruct
@end
