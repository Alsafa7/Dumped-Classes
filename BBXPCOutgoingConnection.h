@interface BBXPCOutgoingConnection : BBXPCConnection
{
	id _name;
	BOOL _autoReconnect;
	id _connectionEstablishmentInvocation;
}

+ serviceName
+ dealloc
+ description
+ invalidate
+ resume
+ initWithServiceName:queue:target:remoteProtocol:
+ _signatureForSelectorInRemoteProtocol:
+ _connectionEstablishedResponse:
+ setConnectionEstablishmentInvocation:
+ _configureRemoteProxy
+ autoReconnects
+ setEstablishmentSelector:andSendObject:
+ setAutoReconnects:
+ connectionEstablishmentInvocation
- serviceName
- dealloc
- description
- invalidate
- resume
- initWithServiceName:queue:target:remoteProtocol:
- _signatureForSelectorInRemoteProtocol:
- _connectionEstablishedResponse:
- setConnectionEstablishmentInvocation:
- _configureRemoteProxy
- autoReconnects
- setEstablishmentSelector:andSendObject:
- setAutoReconnects:
- connectionEstablishmentInvocation
@end
