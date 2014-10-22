@interface BKSApplicationProcessInfo : NSObject
{
	BOOL _suspended;
	BOOL _classic;
	id _bundleIdentifier;
	id _pidNumber;
	id _beingDebugged;
	id _eventPort;
}

+ suspended
+ dealloc
+ description
+ bundleIdentifier
+ copyWithZone:
+ setSuspended:
+ pidNumber
+ beingDebugged
+ encodeWithXPCDictionary:
+ initWithXPCDictionary:
+ classic
+ setClassic:
+ eventPort
+ initWithInfo:zone:
+ setPidNumber:
+ setBeingDebugged:
+ setEventPort:
+ setBundleIdentifier:
- suspended
- dealloc
- description
- bundleIdentifier
- copyWithZone:
- setSuspended:
- pidNumber
- beingDebugged
- encodeWithXPCDictionary:
- initWithXPCDictionary:
- classic
- setClassic:
- eventPort
- initWithInfo:zone:
- setPidNumber:
- setBeingDebugged:
- setEventPort:
- setBundleIdentifier:
@end
