@interface SSSQLiteQuery : NSObject
{
	id _database;
	id _descriptor;
}

+ database
+ dealloc
+ enumeratePersistentIDsUsingBlock:
+ countOfEntities
+ enumeratePersistentIDsAndProperties:count:usingBlock:
+ deleteAllEntities
+ bindToSelectStatement:bindingIndex:
+ copySelectSQLWithProperties:count:
+ enumerateMemoryEntitiesWithProperties:usingBlock:
+ _newSelectSQLWithProperties:count:
+ initWithDatabase:descriptor:
+ copyEntityIdentifiers
+ createTemporaryTableWithName:properties:count:
+ enumerateMemoryEntitiesUsingBlock:
+ queryDescriptor
- database
- dealloc
- enumeratePersistentIDsUsingBlock:
- countOfEntities
- enumeratePersistentIDsAndProperties:count:usingBlock:
- deleteAllEntities
- bindToSelectStatement:bindingIndex:
- copySelectSQLWithProperties:count:
- enumerateMemoryEntitiesWithProperties:usingBlock:
- _newSelectSQLWithProperties:count:
- initWithDatabase:descriptor:
- copyEntityIdentifiers
- createTemporaryTableWithName:properties:count:
- enumerateMemoryEntitiesUsingBlock:
- queryDescriptor
@end
