@interface BKSAuditToken : NSObject
{
	struct _auditToken;
}

+ bundleID
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ hasEntitlement:
+ encodeWithXPCDictionary:
+ initWithXPCDictionary:
+ initWithAuditToken:
+ initWithXPCMessage:
+ initWithMachMessage:
+ _valueFromData:ofType:
+ _dataWithValue:
+ realToken
- bundleID
- isEqual:
- hash
- description
- copyWithZone:
- hasEntitlement:
- encodeWithXPCDictionary:
- initWithXPCDictionary:
- initWithAuditToken:
- initWithXPCMessage:
- initWithMachMessage:
- _valueFromData:ofType:
- _dataWithValue:
- realToken
@end
