@interface WebDatabaseManager : NSObject
{

}

+ init
+ origins
+ databasesWithOrigin:
+ deleteAllDatabases
+ deleteOrigin:
+ deleteDatabase:withOrigin:
+ detailsForDatabase:withOrigin:
- init
- origins
- databasesWithOrigin:
- deleteAllDatabases
- deleteOrigin:
- deleteDatabase:withOrigin:
- detailsForDatabase:withOrigin:
@end
