@interface GKThreadsafeDictionary : NSObject
{
	id _queue;
	id _dictionary;
}

+ writeToDictionary:
+ objectForKey:objectProducerBlock:
+ readFromDictionary:
+ dealloc
+ removeAllObjects
+ description
+ objectForKeyedSubscript:
+ setObject:forKeyedSubscript:
+ dictionary
+ removeObjectForKey:
+ allKeys
+ allObjects
+ initWithName:
+ setDictionary:
+ objectForKey:
+ setObject:forKey:
- writeToDictionary:
- objectForKey:objectProducerBlock:
- readFromDictionary:
- dealloc
- removeAllObjects
- description
- objectForKeyedSubscript:
- setObject:forKeyedSubscript:
- dictionary
- removeObjectForKey:
- allKeys
- allObjects
- initWithName:
- setDictionary:
- objectForKey:
- setObject:forKey:
@end
