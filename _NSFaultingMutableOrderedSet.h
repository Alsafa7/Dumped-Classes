@interface _NSFaultingMutableOrderedSet : NSMutableOrderedSet
{
	int _cd_rc;
	struct _flags;
	id _realSet;
	id _source;
	pointer _orderKeys;
	id _grottyHack;
}

+ initWithSource:forRelationship:asFault:
+ willRead
+ indexOfObjectWithOptions:passingTest:
+ indexOfObjectAtIndexes:options:passingTest:
+ indexesOfObjectsWithOptions:passingTest:
+ indexesOfObjectsAtIndexes:options:passingTest:
+ getObjects:
+ turnIntoFault
+ relationship
+ initWithSource:destinations:forRelationship:inContext:
+ _shouldProcessKVOChange
+ _isIdenticalFault:
+ replacementObjectForCoder:
+ classForArchiver
+ isEqualToOrderedSet:
+ addObjects:count:
+ _hasOrderKeys
+ _batchFulfillOrderKeysForObjectsIntoIndexes:
+ _populateOrderKeysUsingSnapshot:orderKeys:newIndexes:reorderedIndexes:
+ _orderKeyForObject:
+ _newOrderKeys
+ _updateOrderKeysFromOrderOfObjectIDs:
+ _assignOrderKeysUsingCount:
+ willChange
+ insertObjects:count:atIndex:
+ sortRange:options:usingComparator:
+ _setProcessingIdempotentKVO:
+ release
+ retain
+ dealloc
+ countByEnumeratingWithState:objects:count:
+ count
+ objectAtIndex:
+ addObject:
+ removeAllObjects
+ indexOfObject:
+ isEqual:
+ retainCount
+ description
+ setValue:forKey:
+ containsObject:
+ valueForKey:
+ addObjectsFromArray:
+ removeObjectsInArray:
+ minusSet:
+ insertObject:atIndex:
+ removeObjectAtIndex:
+ copyWithZone:
+ classForCoder
+ sortUsingComparator:
+ objectEnumerator
+ valueForKeyPath:
+ _tryRetain
+ _isDeallocating
+ enumerateObjectsWithOptions:usingBlock:
+ allObjects
+ getObjects:range:
+ replaceObjectAtIndex:withObject:
+ removeObjectsInRange:
+ source
+ sortWithOptions:usingComparator:
+ unionSet:
+ mutableCopyWithZone:
+ insertObjects:atIndexes:
+ enumerateObjectsAtIndexes:options:usingBlock:
+ isFault
+ unionOrderedSet:
+ minusOrderedSet:
+ descriptionWithLocale:
+ initWithOrderedSet:
- initWithSource:forRelationship:asFault:
- willRead
- indexOfObjectWithOptions:passingTest:
- indexOfObjectAtIndexes:options:passingTest:
- indexesOfObjectsWithOptions:passingTest:
- indexesOfObjectsAtIndexes:options:passingTest:
- getObjects:
- turnIntoFault
- relationship
- initWithSource:destinations:forRelationship:inContext:
- _shouldProcessKVOChange
- _isIdenticalFault:
- replacementObjectForCoder:
- classForArchiver
- isEqualToOrderedSet:
- addObjects:count:
- _hasOrderKeys
- _batchFulfillOrderKeysForObjectsIntoIndexes:
- _populateOrderKeysUsingSnapshot:orderKeys:newIndexes:reorderedIndexes:
- _orderKeyForObject:
- _newOrderKeys
- _updateOrderKeysFromOrderOfObjectIDs:
- _assignOrderKeysUsingCount:
- willChange
- insertObjects:count:atIndex:
- sortRange:options:usingComparator:
- _setProcessingIdempotentKVO:
- release
- retain
- dealloc
- countByEnumeratingWithState:objects:count:
- count
- objectAtIndex:
- addObject:
- removeAllObjects
- indexOfObject:
- isEqual:
- retainCount
- description
- setValue:forKey:
- containsObject:
- valueForKey:
- addObjectsFromArray:
- removeObjectsInArray:
- minusSet:
- insertObject:atIndex:
- removeObjectAtIndex:
- copyWithZone:
- classForCoder
- sortUsingComparator:
- objectEnumerator
- valueForKeyPath:
- _tryRetain
- _isDeallocating
- enumerateObjectsWithOptions:usingBlock:
- allObjects
- getObjects:range:
- replaceObjectAtIndex:withObject:
- removeObjectsInRange:
- source
- sortWithOptions:usingComparator:
- unionSet:
- mutableCopyWithZone:
- insertObjects:atIndexes:
- enumerateObjectsAtIndexes:options:usingBlock:
- isFault
- unionOrderedSet:
- minusOrderedSet:
- descriptionWithLocale:
- initWithOrderedSet:
@end
