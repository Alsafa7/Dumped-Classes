@interface SSSQLiteEntity : NSObject
{
	id _database;
	long long _persistentID;
}

+ database
+ valueForProperty:
+ setValue:forProperty:
+ persistentID
+ getValues:forProperties:count:
+ initWithPropertyValues:inDatabase:
+ initWithPersistentID:inDatabase:
+ setValuesWithDictionary:
+ deleteFromDatabase
+ _copyTableClusteredValuesWithValues:
+ _deleteRowFromTable:usingColumn:
+ copyValuesForClientProperties:
+ copyXPCEncodedValuesForClientProperties:
+ existsInDatabase
- database
- valueForProperty:
- setValue:forProperty:
- persistentID
- getValues:forProperties:count:
- initWithPropertyValues:inDatabase:
- initWithPersistentID:inDatabase:
- setValuesWithDictionary:
- deleteFromDatabase
- _copyTableClusteredValuesWithValues:
- _deleteRowFromTable:usingColumn:
- copyValuesForClientProperties:
- copyXPCEncodedValuesForClientProperties:
- existsInDatabase
@end
