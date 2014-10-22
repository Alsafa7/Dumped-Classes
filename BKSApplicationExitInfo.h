@interface BKSApplicationExitInfo : NSObject
{
	BOOL _wasReceiver;
	int _terminationReason;
	long long _status;
}

+ terminationReason
+ description
+ copyWithZone:
+ status
+ setStatus:
+ encodeWithXPCDictionary:
+ initWithXPCDictionary:
+ setWasReceiver:
+ wasReceiver
+ setTerminationReason:
- terminationReason
- description
- copyWithZone:
- status
- setStatus:
- encodeWithXPCDictionary:
- initWithXPCDictionary:
- setWasReceiver:
- wasReceiver
- setTerminationReason:
@end
