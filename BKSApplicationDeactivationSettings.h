@interface BKSApplicationDeactivationSettings : NSObject
{
	BOOL _animated;
	BOOL _underLock;
	BOOL _flip;
	BOOL _crossfade;
	id _contextInfo;
}

+ dealloc
+ description
+ copyWithZone:
+ animated
+ setAnimated:
+ flip
+ encodeWithXPCDictionary:
+ initWithXPCDictionary:
+ initWithSettings:zone:
+ setFlip:
+ underLock
+ crossfade
+ setUnderLock:
+ setCrossfade:
+ setContextInfo:
+ contextInfo
- dealloc
- description
- copyWithZone:
- animated
- setAnimated:
- flip
- encodeWithXPCDictionary:
- initWithXPCDictionary:
- initWithSettings:zone:
- setFlip:
- underLock
- crossfade
- setUnderLock:
- setCrossfade:
- setContextInfo:
- contextInfo
@end
