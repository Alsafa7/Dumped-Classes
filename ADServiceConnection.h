@interface ADServiceConnection : NSObject
{
	id _targetQueue;
	id _identifier;
	id _path;
	id _connection;
	BOOL _serviceLoaded;
	id _stats;
	id _commandMap;
	id _anchorKeyClassMap;
	id _domainObjectClearingClassName;
	BOOL _preheated;
	id _syncDelegate;
}

+ _handleDisconnect
+ _bundleClassForDomain:commandName:
+ _providerServiceWithErrorHandler:
+ _syncClassForAnchorKey:
+ _providerService
+ initWithIdentifier:path:commandMap:anchorMap:clearingClass:queue:
+ _openURL:completion:
+ sendClientBoundCommand:domain:reply:
+ sendBeginSyncWithAnchor:validity:count:forKey:
+ sendClearDomainObjects
+ preheatServiceBundle
+ dealloc
+ identifier
+ resume
+ setSyncDelegate:
+ syncDelegate
+ .cxx_destruct
- _handleDisconnect
- _bundleClassForDomain:commandName:
- _providerServiceWithErrorHandler:
- _syncClassForAnchorKey:
- _providerService
- initWithIdentifier:path:commandMap:anchorMap:clearingClass:queue:
- _openURL:completion:
- sendClientBoundCommand:domain:reply:
- sendBeginSyncWithAnchor:validity:count:forKey:
- sendClearDomainObjects
- preheatServiceBundle
- dealloc
- identifier
- resume
- setSyncDelegate:
- syncDelegate
- .cxx_destruct
@end
