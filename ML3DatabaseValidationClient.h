@interface ML3DatabaseValidationClient : NSObject
{
	id _validatableDatabases;
	id _serialQueue;
}

+ init
+ validateDatabaseForLibrary:withTimeout:
+ _validateDatabaseForPath:usingLibrary:withTimeout:
+ _validatableDatabaseForPath:
+ validateDatabaseAtPath:withTimeout:
+ validateDatabaseForConnection:withTimeout:
+ isValidatingDatabaseForPath:
+ .cxx_destruct
- init
- validateDatabaseForLibrary:withTimeout:
- _validateDatabaseForPath:usingLibrary:withTimeout:
- _validatableDatabaseForPath:
- validateDatabaseAtPath:withTimeout:
- validateDatabaseForConnection:withTimeout:
- isValidatingDatabaseForPath:
- .cxx_destruct
@end
