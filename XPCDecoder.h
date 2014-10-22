@interface XPCDecoder : NSCoder
{
	id _encoding;
	id _currentObject;
	pointer _decodedObjects;
	pointer _requestedDecodedObjects;
	id _allowedClasses;
	id _errorDescription;
}

+ dealloc
+ decodeObjectForKey:
+ decodeBoolForKey:
+ containsValueForKey:
+ decodeIntForKey:
+ allowsKeyedCoding
+ decodeIntegerForKey:
+ decodeBytesForKey:returnedLength:
+ decodeFloatForKey:
+ decodeDoubleForKey:
+ decodeInt64ForKey:
+ decodeInt32ForKey:
+ decodeObject
+ versionForClassName:
+ errorDescription
+ initWithEncoding:
+ setErrorDescription:
+ _verifyCurrentObject
+ _classIsAllowed:
+ decodeEndpointForKey:
+ decodeMachSendRightForKey:
- dealloc
- decodeObjectForKey:
- decodeBoolForKey:
- containsValueForKey:
- decodeIntForKey:
- allowsKeyedCoding
- decodeIntegerForKey:
- decodeBytesForKey:returnedLength:
- decodeFloatForKey:
- decodeDoubleForKey:
- decodeInt64ForKey:
- decodeInt32ForKey:
- decodeObject
- versionForClassName:
- errorDescription
- initWithEncoding:
- setErrorDescription:
- _verifyCurrentObject
- _classIsAllowed:
- decodeEndpointForKey:
- decodeMachSendRightForKey:
@end
