@interface EKObject : NSObject
{
	unsigned int _flags;
	id _dirtyProperties;
	id _cachedProperties;
	id _persistentObject;
	id _propertyName;
	id _owningRelation;
	id _relations;
	id _weakRelations;
}

+ setPropertyName:
+ relations
+ isNew
+ initWithPersistentObject:
+ eventStore
+ didCommit
+ validate:
+ persistentObject
+ persistentOrDirtyPropertyForKey:
+ setPropertyValue:forKey:
+ relationForKey:
+ dirtyProperties
+ isPropertyDirty:
+ insertPersistentObjectIfNeeded
+ updatePersistentObject
+ deletePersistentObject
+ lazyLoadRelationForKey:
+ committedValueForKey:
+ updatePersistentValueForKeyIfNeeded:
+ setPersistentObject:
+ rebase
+ clearPropertyValueForKey:
+ propertyValueForKey:value:
+ intPropertyForKey:withPersistentFallback:
+ boolPropertyForKey:withPersistentFallback:
+ propertyForKey:withPersistentFallback:
+ cachePropertyValue:forKey:
+ existsInStore
+ propertyValueForKey:
+ childRelationChanged:
+ addWeakRelation:
+ removeWeakRelation:
+ setDirtyProperties:
+ cachedProperties
+ setCachedProperties:
+ owningRelation
+ setOwningRelation:
+ setRelations:
+ weakRelations
+ setWeakRelations:
+ dealloc
+ isEqual:
+ reset
+ flags
+ refresh
+ owner
+ setFlags:
+ hasChanges
+ objectID
+ rollback
+ propertyName
- setPropertyName:
- relations
- isNew
- initWithPersistentObject:
- eventStore
- didCommit
- validate:
- persistentObject
- persistentOrDirtyPropertyForKey:
- setPropertyValue:forKey:
- relationForKey:
- dirtyProperties
- isPropertyDirty:
- insertPersistentObjectIfNeeded
- updatePersistentObject
- deletePersistentObject
- lazyLoadRelationForKey:
- committedValueForKey:
- updatePersistentValueForKeyIfNeeded:
- setPersistentObject:
- rebase
- clearPropertyValueForKey:
- propertyValueForKey:value:
- intPropertyForKey:withPersistentFallback:
- boolPropertyForKey:withPersistentFallback:
- propertyForKey:withPersistentFallback:
- cachePropertyValue:forKey:
- existsInStore
- propertyValueForKey:
- childRelationChanged:
- addWeakRelation:
- removeWeakRelation:
- setDirtyProperties:
- cachedProperties
- setCachedProperties:
- owningRelation
- setOwningRelation:
- setRelations:
- weakRelations
- setWeakRelations:
- dealloc
- isEqual:
- reset
- flags
- refresh
- owner
- setFlags:
- hasChanges
- objectID
- rollback
- propertyName
@end