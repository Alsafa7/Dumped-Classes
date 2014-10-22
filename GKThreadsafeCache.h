@interface GKThreadsafeCache : NSObject
{
	id _dictionary;
	id _cacheList;
	id _missingEntryQueues;
	usigned long long _maxCount;
	usigned long long _count;
	id _syncQueue;
}

+ setMaxCount:
+ internalObjectForKey:
+ internalSetObject:forKey:
+ cacheList
+ setCacheList:
+ missingEntryQueues
+ setMissingEntryQueues:
+ initWithName:maxCount:
+ objectForKey:withMissingHandler:
+ syncQueue
+ dealloc
+ count
+ removeAllObjects
+ objectForKeyedSubscript:
+ setObject:forKeyedSubscript:
+ dictionary
+ removeObjectForKey:
+ setCount:
+ setSyncQueue:
+ maxCount
+ setDictionary:
+ objectForKey:
+ setObject:forKey:
- setMaxCount:
- internalObjectForKey:
- internalSetObject:forKey:
- cacheList
- setCacheList:
- missingEntryQueues
- setMissingEntryQueues:
- initWithName:maxCount:
- objectForKey:withMissingHandler:
- syncQueue
- dealloc
- count
- removeAllObjects
- objectForKeyedSubscript:
- setObject:forKeyedSubscript:
- dictionary
- removeObjectForKey:
- setCount:
- setSyncQueue:
- maxCount
- setDictionary:
- objectForKey:
- setObject:forKey:
@end
