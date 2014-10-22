@interface AVPropertyStorage : NSObject
{
	id _storageAccessWorkQueue;
	id _propertyStorage;
}

+ willAccessKVOForKey:
+ didAccessKVOForKey:
+ shouldUsePropertyStorageCacheForKey:
+ objectForKey:defaultObjectBlock:
+ dealloc
+ init
+ objectForKey:
+ setObject:forKey:
+ finalize
- willAccessKVOForKey:
- didAccessKVOForKey:
- shouldUsePropertyStorageCacheForKey:
- objectForKey:defaultObjectBlock:
- dealloc
- init
- objectForKey:
- setObject:forKey:
- finalize
@end
