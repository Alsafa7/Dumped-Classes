@interface XPCEncoder : NSCoder
{
	id _encoding;
	id _currentObject;
	pointer _encodedObjects;
	pointer _conditionalObjects;
	usigned long long _nextConditionalObjectID;
	pointer _replacementObjects;
}

+ encodeInt64:forKey:
+ dealloc
+ encodeObject:forKey:
+ encodeBool:forKey:
+ init
+ encodeInt:forKey:
+ allowsKeyedCoding
+ encodeInteger:forKey:
+ encodeBytes:length:forKey:
+ encodeFloat:forKey:
+ encodeConditionalObject:forKey:
+ encodeDouble:forKey:
+ versionForClassName:
+ encodeInt32:forKey:
+ encodeRootObject:
+ encoding
+ _fixUpConditionalObjects
+ _replacementObjectForObject:
+ _verifyCurrentObject
+ encodeEndpoint:forKey:
+ encodeMachSendRight:forKey:
- encodeInt64:forKey:
- dealloc
- encodeObject:forKey:
- encodeBool:forKey:
- init
- encodeInt:forKey:
- allowsKeyedCoding
- encodeInteger:forKey:
- encodeBytes:length:forKey:
- encodeFloat:forKey:
- encodeConditionalObject:forKey:
- encodeDouble:forKey:
- versionForClassName:
- encodeInt32:forKey:
- encodeRootObject:
- encoding
- _fixUpConditionalObjects
- _replacementObjectForObject:
- _verifyCurrentObject
- encodeEndpoint:forKey:
- encodeMachSendRight:forKey:
@end
