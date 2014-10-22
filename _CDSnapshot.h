@interface _CDSnapshot : NSObject
{
	int _cd_rc;
	int _cd_version;
	id _cd_objectID;
	struct _cd_flags;
	unsigned int _cd_nullFlags_;
}

+ _snapshot_
+ _descriptionValues
+ release
+ retain
+ dealloc
+ copy
+ isEqual:
+ hash
+ retainCount
+ description
+ setValue:forKey:
+ valueForKey:
+ mutableCopy
+ copyWithZone:
+ _tryRetain
+ _isDeallocating
+ mutableCopyWithZone:
+ objectID
+ entity
+ initWithObjectID:
+ finalize
- _snapshot_
- _descriptionValues
- release
- retain
- dealloc
- copy
- isEqual:
- hash
- retainCount
- description
- setValue:forKey:
- valueForKey:
- mutableCopy
- copyWithZone:
- _tryRetain
- _isDeallocating
- mutableCopyWithZone:
- objectID
- entity
- initWithObjectID:
- finalize
@end
