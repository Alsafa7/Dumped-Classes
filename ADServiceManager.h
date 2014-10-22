@interface ADServiceManager : NSObject
{
	BOOL _bundleServicesLoaded;
	id _serviceMap;
	id _commandMap;
	id _syncKeyMap;
}

+ _commandMap
+ serviceForDomain:command:
+ restrictedCommands
+ allSyncAnchorKeys
+ _generatedBundleServicesCache
+ _bundleServicesCache
+ _addService:
+ _loadServicesIfNeeded
+ _serviceMap
+ _syncKeyMap
+ _removeService:
+ serviceForIdentifier:
+ serviceForSyncAnchorKey:
+ addService:
+ removeService:
+ init
+ allServices
+ .cxx_destruct
- _commandMap
- serviceForDomain:command:
- restrictedCommands
- allSyncAnchorKeys
- _generatedBundleServicesCache
- _bundleServicesCache
- _addService:
- _loadServicesIfNeeded
- _serviceMap
- _syncKeyMap
- _removeService:
- serviceForIdentifier:
- serviceForSyncAnchorKey:
- addService:
- removeService:
- init
- allServices
- .cxx_destruct
@end
