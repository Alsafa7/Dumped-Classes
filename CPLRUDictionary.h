@interface CPLRUDictionary : NSObject
{
	pointer _dictionary;
	usigned long long _maxCount;
	id _head;
	id _tail;
}

+ linkedListCount
+ allKeysInLRUOrder
+ allValuesInLRUOrder
+ objectForKeyWithoutAffectingLRU:
+ _removeNodeFromLinkedList:
+ _addNodeToFront:
+ _removeNode:
+ _moveNodeToFront:
+ dealloc
+ count
+ removeAllObjects
+ description
+ removeObjectForKey:
+ allKeys
+ initWithMaximumCapacity:
+ objectForKey:
+ setObject:forKey:
- linkedListCount
- allKeysInLRUOrder
- allValuesInLRUOrder
- objectForKeyWithoutAffectingLRU:
- _removeNodeFromLinkedList:
- _addNodeToFront:
- _removeNode:
- _moveNodeToFront:
- dealloc
- count
- removeAllObjects
- description
- removeObjectForKey:
- allKeys
- initWithMaximumCapacity:
- objectForKey:
- setObject:forKey:
@end
