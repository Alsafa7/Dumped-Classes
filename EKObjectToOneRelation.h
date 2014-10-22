@interface EKObjectToOneRelation : EKObjectRelation
{
	id _relatedObject;
	BOOL _weak;
}

+ didCommit
+ validate:
+ initWithObject:relationName:inverseRelationName:weak:
+ relatedObject
+ setRelatedObject:
+ updatePersistentObject
+ _clear
+ committedValue
+ isWeak
+ _addRelatedObject:setInverse:dirty:
+ _removeRelatedObject:setInverse:dirty:
+ _unload
+ _setRelatedObject:setInverse:dirty:
+ dealloc
+ description
+ reset
+ refresh
+ rollback
- didCommit
- validate:
- initWithObject:relationName:inverseRelationName:weak:
- relatedObject
- setRelatedObject:
- updatePersistentObject
- _clear
- committedValue
- isWeak
- _addRelatedObject:setInverse:dirty:
- _removeRelatedObject:setInverse:dirty:
- _unload
- _setRelatedObject:setInverse:dirty:
- dealloc
- description
- reset
- refresh
- rollback
@end
