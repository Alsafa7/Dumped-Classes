@interface ADBundleService : ADService
{
	id _domains;
	id _syncKeys;
	id _path;
	id _clearsDomainObjectsClassName;
	id _connection;
	id _syncHandler;
}

+ syncFinishedOnConnection:
+ connection:receivedChunkWithPreAnchor:post:anchorValidity:toAdd:toRemove:continueBlock:
+ handleCommand:forDomain:reply:
+ clearDomainObjects
+ commandsForDomain:
+ syncKeys
+ initWithBundlePath:infoDictionary:
+ implementsCommand:forDomain:
+ beginSyncForKey:anchor:validity:count:chunkHandler:
+ _parseInfoDictionary:
+ _setSyncHandler:
+ _syncHandler
+ info
+ _connection
+ preheat
+ handle
+ domains
+ .cxx_destruct
- syncFinishedOnConnection:
- connection:receivedChunkWithPreAnchor:post:anchorValidity:toAdd:toRemove:continueBlock:
- handleCommand:forDomain:reply:
- clearDomainObjects
- commandsForDomain:
- syncKeys
- initWithBundlePath:infoDictionary:
- implementsCommand:forDomain:
- beginSyncForKey:anchor:validity:count:chunkHandler:
- _parseInfoDictionary:
- _setSyncHandler:
- _syncHandler
- info
- _connection
- preheat
- handle
- domains
- .cxx_destruct
@end
