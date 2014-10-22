@interface _NSXPCDistantObject : NSObject
{
	id _connection;
	id _remoteInterface;
	pointer _knownSelectors;
	int _selectorLock;
	usigned long long _proxyNumber;
	BOOL _exported;
}

+ set_connection:
+ set_proxyNumber:
+ set_exported:
+ _initWithConnection:proxyNumber:interface:
+ remoteObjectProxyWithUserInfo:errorHandler:
+ remoteObjectProxyWithTimeout:errorHandler:
+ set_remoteInterface:
+ _proxyNumber
+ _remoteInterface
+ _exported
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ init
+ conformsToProtocol:
+ methodSignatureForSelector:
+ forwardInvocation:
+ remoteObjectProxyWithErrorHandler:
+ remoteObjectProxy
+ _connection
+ finalize
- set_connection:
- set_proxyNumber:
- set_exported:
- _initWithConnection:proxyNumber:interface:
- remoteObjectProxyWithUserInfo:errorHandler:
- remoteObjectProxyWithTimeout:errorHandler:
- set_remoteInterface:
- _proxyNumber
- _remoteInterface
- _exported
- dealloc
- initWithCoder:
- encodeWithCoder:
- init
- conformsToProtocol:
- methodSignatureForSelector:
- forwardInvocation:
- remoteObjectProxyWithErrorHandler:
- remoteObjectProxy
- _connection
- finalize
@end
