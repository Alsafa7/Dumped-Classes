@interface PLXPCConection : NSObject
{
	id _xpcClientList;
	id _pConnection;
	id _pConnectionQueue;
}

+ dealloc
+ init
+ PLXPCRegisterClient:
+ PLXPCSendMessageWithReply:
+ PLXPCSendMessage:
+ PLXPCConnectionLock
+ PLXPCConnectionUnLock
+ PLXPCClientListLock
+ PLXPCClientListUnLock
+ _PLCopyConnection
+ PLXPCInvalidateConnection
- dealloc
- init
- PLXPCRegisterClient:
- PLXPCSendMessageWithReply:
- PLXPCSendMessage:
- PLXPCConnectionLock
- PLXPCConnectionUnLock
- PLXPCClientListLock
- PLXPCClientListUnLock
- _PLCopyConnection
- PLXPCInvalidateConnection
@end
