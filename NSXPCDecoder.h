@interface NSXPCDecoder : NSXPCCoder
{
	id _oolObjects;
	id _interface;
	SEL _replyToSelector;
	usigned long long _genericIndex;
	pointer _decoder;
	id _connection;
	Array _collections;
	struct _rootObject;
	unsigned int _collectionPointer;
	Array _allowedClassesList;
	long long _allowedClassesIndex;
}

+ decodeObjectOfClasses:forKey:
+ allowedClasses
+ _decodeArrayOfObjectsForKey:
+ _validateAllowedClass:forKey:allowingInvocations:
+ decodeXPCObjectOfType:forKey:
+ _initWithRootXPCObject:
+ setReplyToSelector:
+ set_connection:
+ decodeXPCObjectForKey:
+ _decodeCStringForKey:
+ decodeInvocation
+ replyToSelector
+ dealloc
+ decodeObjectForKey:
+ decodeBoolForKey:
+ containsValueForKey:
+ debugDescription
+ decodeIntForKey:
+ allowsKeyedCoding
+ decodeIntegerForKey:
+ decodeBytesForKey:returnedLength:
+ decodeFloatForKey:
+ decodeObjectOfClass:forKey:
+ decodeDoubleForKey:
+ decodeInt64ForKey:
+ decodeValueOfObjCType:at:
+ decodeInt32ForKey:
+ decodeObject
+ _connection
+ interface
+ setInterface:
+ finalize
- decodeObjectOfClasses:forKey:
- allowedClasses
- _decodeArrayOfObjectsForKey:
- _validateAllowedClass:forKey:allowingInvocations:
- decodeXPCObjectOfType:forKey:
- _initWithRootXPCObject:
- setReplyToSelector:
- set_connection:
- decodeXPCObjectForKey:
- _decodeCStringForKey:
- decodeInvocation
- replyToSelector
- dealloc
- decodeObjectForKey:
- decodeBoolForKey:
- containsValueForKey:
- debugDescription
- decodeIntForKey:
- allowsKeyedCoding
- decodeIntegerForKey:
- decodeBytesForKey:returnedLength:
- decodeFloatForKey:
- decodeObjectOfClass:forKey:
- decodeDoubleForKey:
- decodeInt64ForKey:
- decodeValueOfObjCType:at:
- decodeInt32ForKey:
- decodeObject
- _connection
- interface
- setInterface:
- finalize
@end
