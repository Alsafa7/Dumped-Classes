@interface ADService : NSObject
{
	id _identifier;
	id _managedStorageDomains;
	id _lockRestrictedCommands;
}

+ initSystemService
+ handleCommand:forDomain:reply:
+ clearDomainObjects
+ initWithRequestDelegate:
+ commandsForDomain:
+ syncKeys
+ lockRestrictedCommands
+ implementsCommand:forDomain:
+ beginSyncForKey:anchor:validity:count:chunkHandler:
+ usesManagedStorageForDomain:
+ managedStorageDomains
+ setManagedStorageDomains:
+ setLockRestrictedCommands:
+ description
+ identifier
+ info
+ setIdentifier:
+ preheat
+ handle
+ domains
+ .cxx_destruct
+ isSystemService
- initSystemService
- handleCommand:forDomain:reply:
- clearDomainObjects
- initWithRequestDelegate:
- commandsForDomain:
- syncKeys
- lockRestrictedCommands
- implementsCommand:forDomain:
- beginSyncForKey:anchor:validity:count:chunkHandler:
- usesManagedStorageForDomain:
- managedStorageDomains
- setManagedStorageDomains:
- setLockRestrictedCommands:
- description
- identifier
- info
- setIdentifier:
- preheat
- handle
- domains
- .cxx_destruct
- isSystemService
@end
