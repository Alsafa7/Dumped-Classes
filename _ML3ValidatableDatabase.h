@interface _ML3ValidatableDatabase : NSObject
{
	usigned long long _queueID;
	id _databasePath;
	usigned long long _validationState;
	id _validationSerialQueue;
}

+ init
+ initWithDatabasePath:
+ setDatabasePath:
+ currentQueueIsValidationQueue
+ validationSerialQueue
+ validationState
+ setValidationState:
+ setValidationSerialQueue:
+ databasePath
+ .cxx_destruct
- init
- initWithDatabasePath:
- setDatabasePath:
- currentQueueIsValidationQueue
- validationSerialQueue
- validationState
- setValidationState:
- setValidationSerialQueue:
- databasePath
- .cxx_destruct
@end
