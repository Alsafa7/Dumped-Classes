@interface SSKeyValueStoreDatabase : NSObject
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
- dealloc
- init
- initReadOnly
- readUsingSessionBlock:
- modifyUsingTransactionBlock:
- modifyAsyncUsingTransactionBlock:
- _initReadOnly:
- _dispatchBlockAsync:
- readAsyncUsingSessionBlock:
@end
