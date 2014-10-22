@interface IMWeakReference : NSObject
{
	id _object;
	usigned long long _objectAddress;
}

+ dealloc
+ isEqual:
+ hash
+ object
+ copyObject
+ initRefWithObject:
- dealloc
- isEqual:
- hash
- object
- copyObject
- initRefWithObject:
@end
