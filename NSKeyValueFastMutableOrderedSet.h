@interface NSKeyValueFastMutableOrderedSet : NSKeyValueMutableOrderedSet
{
	id _mutatingMethods;
}

+ _proxyInitWithContainer:getter:
+ _proxyNonGCFinalize
+ insertObject:atIndex:
+ removeObjectAtIndex:
+ removeObjectsAtIndexes:
+ replaceObjectAtIndex:withObject:
+ insertObjects:atIndexes:
+ replaceObjectsAtIndexes:withObjects:
- _proxyInitWithContainer:getter:
- _proxyNonGCFinalize
- insertObject:atIndex:
- removeObjectAtIndex:
- removeObjectsAtIndexes:
- replaceObjectAtIndex:withObject:
- insertObjects:atIndexes:
- replaceObjectsAtIndexes:withObjects:
@end
