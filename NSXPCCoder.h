@interface NSXPCCoder : NSCoder
{
	id _userInfo;
	id _reserved1;
}

+ requiresSecureCoding
+ decodeXPCObjectOfType:forKey:
+ encodeXPCObject:forKey:
+ decodeXPCObjectForKey:
+ dealloc
+ init
+ userInfo
+ setUserInfo:
- requiresSecureCoding
- decodeXPCObjectOfType:forKey:
- encodeXPCObject:forKey:
- decodeXPCObjectForKey:
- dealloc
- init
- userInfo
- setUserInfo:
@end
