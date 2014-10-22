@interface PLXPCConnectionClient : NSObject
{
	id xpcConnection;
}

+ init
+ PLXPCSendMessageWithReply:
+ PLXPCSendMessage:
+ PLXPCinterruptedHandler
+ PLXPCinvalidationHandler
- init
- PLXPCSendMessageWithReply:
- PLXPCSendMessage:
- PLXPCinterruptedHandler
- PLXPCinvalidationHandler
@end
