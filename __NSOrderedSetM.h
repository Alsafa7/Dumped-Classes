@interface __NSOrderedSetM : NSMutableOrderedSet
{
	usigned long long _used;
	pointer _set;
	id _array;
}

+ setObject:atIndex:
+ _mutate
+ dealloc
+ countByEnumeratingWithState:objects:count:
+ count
+ objectAtIndex:
+ indexOfObject:
+ insertObject:atIndex:
+ removeObjectAtIndex:
+ enumerateObjectsWithOptions:usingBlock:
+ getObjects:range:
+ replaceObjectAtIndex:withObject:
+ finalize
- setObject:atIndex:
- _mutate
- dealloc
- countByEnumeratingWithState:objects:count:
- count
- objectAtIndex:
- indexOfObject:
- insertObject:atIndex:
- removeObjectAtIndex:
- enumerateObjectsWithOptions:usingBlock:
- getObjects:range:
- replaceObjectAtIndex:withObject:
- finalize
@end
