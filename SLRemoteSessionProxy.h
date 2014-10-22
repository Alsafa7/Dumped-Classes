@interface SLRemoteSessionProxy : NSObject
{
	id _serviceName;
	id _remoteInterface;
	id _remoteProxy;
	id _connection;
	id _guaranteedRemoteCalls;
	id _guaranteedRemoteCallsLock;
	id _exportedObject;
	id _exportedInterface;
	id _connectionResetBlock;
}

+ exportedObject
+ setConnectionResetBlock:
+ initForRemoteServiceName:remoteInterface:
+ dropGuaraneteedRemoteCall:
+ registerGuaranteedRemoteCall:
+ connectionResetBlock
+ _remoteSessionConnectionWasInterrupted
+ dealloc
+ methodSignatureForSelector:
+ forwardInvocation:
+ disconnect
+ exportedInterface
+ setExportedInterface:
+ setExportedObject:
+ _setupConnection
+ .cxx_destruct
- exportedObject
- setConnectionResetBlock:
- initForRemoteServiceName:remoteInterface:
- dropGuaraneteedRemoteCall:
- registerGuaranteedRemoteCall:
- connectionResetBlock
- _remoteSessionConnectionWasInterrupted
- dealloc
- methodSignatureForSelector:
- forwardInvocation:
- disconnect
- exportedInterface
- setExportedInterface:
- setExportedObject:
- _setupConnection
- .cxx_destruct
@end
