@interface CKMultiDict : NSObject
{
	id _lockQueue;
	usigned long long _count;
	id _dictionary;
}

+ dealloc
+ count
+ init
+ removeAllObjects
+ description
+ dictionary
+ allKeys
+ pushObject:forKey:
+ popObjectForKey:
+ peekObjectForKey:
+ enqueueObject:forKey:
+ headObjectForKey:
+ dequeueObjectForKey:
+ objectsForKey:
+ removeObjectsForKey:
+ lockQueue
+ setLockQueue:
+ setDictionary:
- dealloc
- count
- init
- removeAllObjects
- description
- dictionary
- allKeys
- pushObject:forKey:
- popObjectForKey:
- peekObjectForKey:
- enqueueObject:forKey:
- headObjectForKey:
- dequeueObjectForKey:
- objectsForKey:
- removeObjectsForKey:
- lockQueue
- setLockQueue:
- setDictionary:
@end
