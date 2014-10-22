@interface SSKeyValueStore : NSObject
{
	id _connection;
	id _database;
	BOOL _useLocalRead;
	BOOL _useLocalWrite;
}

+ dealloc
+ init
+ setValuesWithDictionary:forDomain:completionBlock:
+ getValuesForDomain:keys:count:usingBlock:
+ isLocalReadable
+ readUsingSessionBlock:
+ modifyUsingTransactionBlock:
+ setValue:forDomain:key:
+ copyAccountDictionaryForDomain:
+ iTunesValueForKey:usedDomain:
+ removeAccountFromDomain:
+ removeAllValuesForDomain:
+ removeAllValuesWithCompletionBlock:
+ setValuesWithDictionary:forDomain:
+ copyAccounts
+ isLocalWritable
+ getValueForDomain:key:usingBlock:
+ removeAllValuesForDomain:completionBlock:
+ setValue:forDomain:key:completionBlock:
- dealloc
- init
- setValuesWithDictionary:forDomain:completionBlock:
- getValuesForDomain:keys:count:usingBlock:
- isLocalReadable
- readUsingSessionBlock:
- modifyUsingTransactionBlock:
- setValue:forDomain:key:
- copyAccountDictionaryForDomain:
- iTunesValueForKey:usedDomain:
- removeAccountFromDomain:
- removeAllValuesForDomain:
- removeAllValuesWithCompletionBlock:
- setValuesWithDictionary:forDomain:
- copyAccounts
- isLocalWritable
- getValueForDomain:key:usingBlock:
- removeAllValuesForDomain:completionBlock:
- setValue:forDomain:key:completionBlock:
@end
