@interface NSManagedObjectModelBundle : NSObject
{
	id _bundle;
	id _versionInfoDictionary;
}

+ _modelForVersionHashes:
+ optimizedVersionURL
+ currentVersionURL
+ versionInfoDictionary
+ versionHashInfo
+ urlForModelVersionWithName:
+ modelVersions
+ _modelForVersionHashes:inStyle:
+ dealloc
+ bundle
+ initWithPath:
+ currentVersion
- _modelForVersionHashes:
- optimizedVersionURL
- currentVersionURL
- versionInfoDictionary
- versionHashInfo
- urlForModelVersionWithName:
- modelVersions
- _modelForVersionHashes:inStyle:
- dealloc
- bundle
- initWithPath:
- currentVersion
@end
