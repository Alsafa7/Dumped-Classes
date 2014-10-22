@interface ACXPCProxyHelper : NSObject
{
	id _connection;
	id _protocol;
}

+ _copyReplyBlockFromInvocation:
+ _callReplyHandler:ofInvocation:withError:
+ methodSignatureForSelector:
+ forwardInvocation:
+ initWithXPCConnection:protocol:
+ .cxx_destruct
- _copyReplyBlockFromInvocation:
- _callReplyHandler:ofInvocation:withError:
- methodSignatureForSelector:
- forwardInvocation:
- initWithXPCConnection:protocol:
- .cxx_destruct
@end
