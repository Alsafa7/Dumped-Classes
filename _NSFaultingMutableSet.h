@interface _NSFaultingMutableSet : NSMutableSet
{
	int _cd_rc;
	struct _flags;
	id _realSet;
	id _source;
}

+ initWithSource:forRelationship:asFault:
+ willRead
+ getObjects:
+ turnIntoFault
+ relationship
+ setSet:
+ objectsWithOptions:passingTest:
+ isSubsetOfSet:
+ initWithSource:destinations:forRelationship:inContext:
+ _shouldProcessKVOChange
+ _isIdenticalFault:
+ replacementObjectForCoder:
+ classForArchiver
+ release
+ retain
+ dealloc
+ removeObject:
+ countByEnumeratingWithState:objects:count:
+ count
+ addObject:
+ removeAllObjects
+ makeObjectsPerformSelector:
+ isEqual:
+ retainCount
+ description
+ setValue:forKey:
+ containsObject:
+ valueForKey:
+ addObjectsFromArray:
+ anyObject
+ intersectSet:
+ makeObjectsPerformSelector:withObject:
+ minusSet:
+ copyWithZone:
+ classForCoder
+ objectEnumerator
+ valueForKeyPath:
+ _tryRetain
+ _isDeallocating
+ enumerateObjectsWithOptions:usingBlock:
+ allObjects
+ isEqualToSet:
+ source
+ unionSet:
+ intersectsSet:
+ member:
+ mutableCopyWithZone:
+ isFault
+ descriptionWithLocale:
- initWithSource:forRelationship:asFault:
- willRead
- getObjects:
- turnIntoFault
- relationship
- setSet:
- objectsWithOptions:passingTest:
- isSubsetOfSet:
- initWithSource:destinations:forRelationship:inContext:
- _shouldProcessKVOChange
- _isIdenticalFault:
- replacementObjectForCoder:
- classForArchiver
- release
- retain
- dealloc
- removeObject:
- countByEnumeratingWithState:objects:count:
- count
- addObject:
- removeAllObjects
- makeObjectsPerformSelector:
- isEqual:
- retainCount
- description
- setValue:forKey:
- containsObject:
- valueForKey:
- addObjectsFromArray:
- anyObject
- intersectSet:
- makeObjectsPerformSelector:withObject:
- minusSet:
- copyWithZone:
- classForCoder
- objectEnumerator
- valueForKeyPath:
- _tryRetain
- _isDeallocating
- enumerateObjectsWithOptions:usingBlock:
- allObjects
- isEqualToSet:
- source
- unionSet:
- intersectsSet:
- member:
- mutableCopyWithZone:
- isFault
- descriptionWithLocale:
@end
