@interface __CFNotification : NSNotification
{
	id _name;
	id _object;
	id _userInfo;
	BOOL _fouSemantics;
	BOOL _dyingObject;
}

+ initWithName:object:userInfo:foundation:
+ dealloc
+ isEqual:
+ hash
+ copyWithZone:
+ userInfo
+ name
+ object
+ finalize
- initWithName:object:userInfo:foundation:
- dealloc
- isEqual:
- hash
- copyWithZone:
- userInfo
- name
- object
- finalize
@end
