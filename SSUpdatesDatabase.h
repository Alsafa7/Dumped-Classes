@interface SSUpdatesDatabase : NSObject
{
	id _database;
}

+ dealloc
+ init
+ initReadOnly
+ readUsingSessionBlock:
+ modifyUsingTransactionBlock:
+ modifyAsyncUsingTransactionBlock:
+ _initReadOnly:
+ _dispatchBlockAsync:
+ readAsyncUsingSessionBlock:
+ requiresMigration
- dealloc
- init
- initReadOnly
- readUsingSessionBlock:
- modifyUsingTransactionBlock:
- modifyAsyncUsingTransactionBlock:
- _initReadOnly:
- _dispatchBlockAsync:
- readAsyncUsingSessionBlock:
- requiresMigration
@end
