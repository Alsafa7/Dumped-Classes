@interface ML3AggregateQuery : ML3Query
{
	Class _aggregateEntityClass;
	id _foreignPersistentIDProperty;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ hasEntities
+ countOfEntities
+ entityClass
+ selectPersistentIDsSQLAndProperties:ordered:
+ persistentIDProperty
+ aggregateEntityClass
+ foreignPersistentIDProperty
+ initWithUnitQuery:aggregateEntityClass:foreignPersistentIDProperty:
+ .cxx_destruct
- dealloc
- initWithCoder:
- encodeWithCoder:
- hasEntities
- countOfEntities
- entityClass
- selectPersistentIDsSQLAndProperties:ordered:
- persistentIDProperty
- aggregateEntityClass
- foreignPersistentIDProperty
- initWithUnitQuery:aggregateEntityClass:foreignPersistentIDProperty:
- .cxx_destruct
@end
