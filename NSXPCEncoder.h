@interface NSXPCEncoder : NSXPCCoder
{
	id _oolObjects;
	id _connection;
	pointer _replacedObjects;
	pointer _replacedByDelegateObjects;
	id _delegate;
	BOOL _askForReplacement;
	pointer _encoder;
	usigned long long _genericIndex;
}

+ encodeInt64:forKey:
+ encodeValueOfObjCType:at:
+ encodeDataObject:
+ _encodeArrayOfObjects:forKey:
+ encodeXPCObject:forKey:
+ set_connection:
+ _createRootXPCObject
+ _encodeCString:forKey:
+ encodeInvocation:
+ _replaceObject:
+ _checkObject:
+ _encodeObject:
+ dealloc
+ encodeObject:forKey:
+ encodeBool:forKey:
+ setDelegate:
+ init
+ debugDescription
+ delegate
+ encodeInt:forKey:
+ allowsKeyedCoding
+ encodeInteger:forKey:
+ encodeBytes:length:forKey:
+ encodeFloat:forKey:
+ encodeConditionalObject:forKey:
+ encodeDouble:forKey:
+ encodeInt32:forKey:
+ _connection
+ encodeObject:
+ finalize
- encodeInt64:forKey:
- encodeValueOfObjCType:at:
- encodeDataObject:
- _encodeArrayOfObjects:forKey:
- encodeXPCObject:forKey:
- set_connection:
- _createRootXPCObject
- _encodeCString:forKey:
- encodeInvocation:
- _replaceObject:
- _checkObject:
- _encodeObject:
- dealloc
- encodeObject:forKey:
- encodeBool:forKey:
- setDelegate:
- init
- debugDescription
- delegate
- encodeInt:forKey:
- allowsKeyedCoding
- encodeInteger:forKey:
- encodeBytes:length:forKey:
- encodeFloat:forKey:
- encodeConditionalObject:forKey:
- encodeDouble:forKey:
- encodeInt32:forKey:
- _connection
- encodeObject:
- finalize
@end
