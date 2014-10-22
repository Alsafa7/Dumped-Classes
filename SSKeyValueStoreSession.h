@interface SSKeyValueStoreSession : NSObject
{
	id _database;
}

+ initWithDatabase:
+ database
+ dealloc
+ copyValueForDomain:key:
+ copyAccountDictionaryForDomain:
+ iTunesValueForKey:usedDomain:
+ copyDataForDomain:key:
+ existingEntityForDomain:key:
- initWithDatabase:
- database
- dealloc
- copyValueForDomain:key:
- copyAccountDictionaryForDomain:
- iTunesValueForKey:usedDomain:
- copyDataForDomain:key:
- existingEntityForDomain:key:
@end
