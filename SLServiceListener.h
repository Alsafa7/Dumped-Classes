@interface SLServiceListener : NSObject
{
	Class _sessionClass;
	id _serviceProtocol;
	id _clientInterface;
	id _listener;
	id _persistentStoreName;
	id _managedObjectModelPath;
	id _allowedEntitlements;
	id _serviceName;
}

+ serviceName
+ _verifyAuthorizationForConnection:
+ initWithExportedSessionClass:serviceProtocol:
+ restrictToClientsWithEntitlements:
+ beginAcceptingConnections
+ setPersistentStoreName:
+ managedObjectModelPath
+ setManagedObjectModelPath:
+ persistentStoreName
+ listener:shouldAcceptNewConnection:
+ setServiceName:
+ clientInterface
+ .cxx_destruct
+ setClientInterface:
- serviceName
- _verifyAuthorizationForConnection:
- initWithExportedSessionClass:serviceProtocol:
- restrictToClientsWithEntitlements:
- beginAcceptingConnections
- setPersistentStoreName:
- managedObjectModelPath
- setManagedObjectModelPath:
- persistentStoreName
- listener:shouldAcceptNewConnection:
- setServiceName:
- clientInterface
- .cxx_destruct
- setClientInterface:
@end
