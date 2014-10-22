@interface IMMessageContext : NSObject
{
	id _xpcMessage;
	id _localObject;
}

+ dealloc
+ setXpcMessage:
+ setLocalObject:
+ xpcMessage
+ localObject
- dealloc
- setXpcMessage:
- setLocalObject:
- xpcMessage
- localObject
@end
