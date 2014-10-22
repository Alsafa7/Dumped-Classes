@interface AXIPCServer : NSObject
{
	id _defaultHandler;
	pointer _serverRunLoopSource;
	pointer _clientInvalidationSource;
	unsigned int _serverPort;
	unsigned int _clientInvalidationPort;
	id _validSecurityTokens;
	id _connectedClients;
	id _clientInvalidationHandler;
	id _entitlements;
	unsigned int _assignedServerPort;
	BOOL _running;
	id _serviceName;
	id _handlers;
}

+ machPort
+ serviceName
+ dealloc
+ description
+ isRunning
+ setHandlerWithTarget:selector:forKey:
+ addPossibleRequiredEntitlement:forMessageWithKey:
+ removeAllHandlersForTarget:
+ stopServerWithError:
+ initWithPort:serviceRunLoopSource:
+ startServerWithError:
+ setHandlers:
+ setDefaultHandler:
+ _startServerThread
+ _handleErrorWithMessage:outError:
+ setRunning:
+ removeHandlerForKey:
+ _clientIdentificationForAuditToken:
+ _clientWithPort:auditToken:hasAnyEntitlementRequiredForMessage:
+ _handleClientRegistration:
+ defaultHandler
+ setServiceRunLoopSource:
+ clientInvalidationCallback
+ setClientInvalidationCallback:
+ setHandler:forKey:
+ setHandlerWithTarget:selector:forKey:possibleRequiredEntitlements:
+ removePossibleRequiredEntitlement:forMessageWithKey:
+ _handleClientInvalidation:
+ _handleIncomingMessage:securityToken:auditToken:clientPort:
+ handlers
+ setServiceName:
+ initWithServiceName:
- machPort
- serviceName
- dealloc
- description
- isRunning
- setHandlerWithTarget:selector:forKey:
- addPossibleRequiredEntitlement:forMessageWithKey:
- removeAllHandlersForTarget:
- stopServerWithError:
- initWithPort:serviceRunLoopSource:
- startServerWithError:
- setHandlers:
- setDefaultHandler:
- _startServerThread
- _handleErrorWithMessage:outError:
- setRunning:
- removeHandlerForKey:
- _clientIdentificationForAuditToken:
- _clientWithPort:auditToken:hasAnyEntitlementRequiredForMessage:
- _handleClientRegistration:
- defaultHandler
- setServiceRunLoopSource:
- clientInvalidationCallback
- setClientInvalidationCallback:
- setHandler:forKey:
- setHandlerWithTarget:selector:forKey:possibleRequiredEntitlements:
- removePossibleRequiredEntitlement:forMessageWithKey:
- _handleClientInvalidation:
- _handleIncomingMessage:securityToken:auditToken:clientPort:
- handlers
- setServiceName:
- initWithServiceName:
@end
