@interface _PFFetchedResultOrderedSetWrapper : NSOrderedSet
{
	int _cd_rc;
	id _underlyingArray;
}

+ willRead
+ indexOfObjectWithOptions:passingTest:
+ indexOfObjectAtIndexes:options:passingTest:
+ indexesOfObjectsWithOptions:passingTest:
+ indexesOfObjectsAtIndexes:options:passingTest:
+ getObjects:
+ classForArchiver
+ newArrayFromObjectIDs
+ arrayFromObjectIDs
+ indexOfManagedObjectForObjectID:
+ isEqualToOrderedSet:
+ release
+ retain
+ dealloc
+ countByEnumeratingWithState:objects:count:
+ count
+ objectAtIndex:
+ indexOfObject:
+ isEqual:
+ retainCount
+ description
+ containsObject:
+ array
+ copyWithZone:
+ classForCoder
+ objectEnumerator
+ _tryRetain
+ _isDeallocating
+ enumerateObjectsWithOptions:usingBlock:
+ allObjects
+ getObjects:range:
+ initWithArray:
+ mutableCopyWithZone:
+ sortedArrayUsingComparator:
+ enumerateObjectsAtIndexes:options:usingBlock:
+ managedObjectIDAtIndex:
+ descriptionWithLocale:
+ sortedArrayWithOptions:usingComparator:
- willRead
- indexOfObjectWithOptions:passingTest:
- indexOfObjectAtIndexes:options:passingTest:
- indexesOfObjectsWithOptions:passingTest:
- indexesOfObjectsAtIndexes:options:passingTest:
- getObjects:
- classForArchiver
- newArrayFromObjectIDs
- arrayFromObjectIDs
- indexOfManagedObjectForObjectID:
- isEqualToOrderedSet:
- release
- retain
- dealloc
- countByEnumeratingWithState:objects:count:
- count
- objectAtIndex:
- indexOfObject:
- isEqual:
- retainCount
- description
- containsObject:
- array
- copyWithZone:
- classForCoder
- objectEnumerator
- _tryRetain
- _isDeallocating
- enumerateObjectsWithOptions:usingBlock:
- allObjects
- getObjects:range:
- initWithArray:
- mutableCopyWithZone:
- sortedArrayUsingComparator:
- enumerateObjectsAtIndexes:options:usingBlock:
- managedObjectIDAtIndex:
- descriptionWithLocale:
- sortedArrayWithOptions:usingComparator:
@end