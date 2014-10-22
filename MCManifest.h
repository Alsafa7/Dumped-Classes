@interface MCManifest : NSObject
{
	id _path;
	id _manifest;
	id _syncQueue;
}

+ dealloc
+ init
+ invalidateCache
+ installedProfileWithIdentifier:
+ _manifest
+ identifiersOfProfilesWithFilterFlags:
+ _setManifest:
+ allInstalledProfileIdentifiers
+ addIdentifierToManifest:flag:
+ removeIdentifierFromManifest:
+ .cxx_destruct
+ manifest
- dealloc
- init
- invalidateCache
- installedProfileWithIdentifier:
- _manifest
- identifiersOfProfilesWithFilterFlags:
- _setManifest:
- allInstalledProfileIdentifiers
- addIdentifierToManifest:flag:
- removeIdentifierFromManifest:
- .cxx_destruct
- manifest
@end
