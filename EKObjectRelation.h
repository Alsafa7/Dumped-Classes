@interface EKObjectRelation : NSObject
{
	id _owner;
	id _relationName;
	BOOL _dirty;
	BOOL _loaded;
	id _inverseName;
}

+ didCommit
+ validate:
+ initWithOwner:relationName:inverseRelationName:
+ updatePersistentObject
+ committedValue
+ relatedObjectDidChange
+ inverseName
+ isWeak
+ _addRelatedObject:setInverse:dirty:
+ _removeRelatedObject:setInverse:dirty:
+ relationName
+ dealloc
+ isEqual:
+ hash
+ reset
+ refresh
+ owner
+ rollback
+ isDirty
- didCommit
- validate:
- initWithOwner:relationName:inverseRelationName:
- updatePersistentObject
- committedValue
- relatedObjectDidChange
- inverseName
- isWeak
- _addRelatedObject:setInverse:dirty:
- _removeRelatedObject:setInverse:dirty:
- relationName
- dealloc
- isEqual:
- hash
- reset
- refresh
- owner
- rollback
- isDirty
@end
