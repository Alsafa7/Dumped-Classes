@interface MPMediaEntityResultSetArray : MPMediaArray
{
	id _resultSet;
	Class _entityClass;
	id _libraryWeakRef;
	id _sectionInfo;
	pointer _entities;
	id _entitiesQueue;
	id _queryCriteria;
}

+ sectionInfo
+ initWithResultSet:queryCriteria:entityType:library:
+ dealloc
+ count
+ objectAtIndex:
+ copyWithZone:
+ .cxx_destruct
- sectionInfo
- initWithResultSet:queryCriteria:entityType:library:
- dealloc
- count
- objectAtIndex:
- copyWithZone:
- .cxx_destruct
@end
