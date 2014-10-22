@interface PLWallpaperImporter : NSObject
{
	id _wallpaperFileHash;
	id _allWallpaperURLs;
	id photoLibrary;
}

+ initWithPhotoLibrary:
+ updateAsNeeded
+ allWallpaperURLs
+ wallpaperFileHash
+ deleteAll
+ importAll
+ allExistingWallpaperAssets
+ addWallpaperURLsForModel:toURLs:
+ dealloc
+ init
+ managedObjectContext
+ photoLibrary
+ setPhotoLibrary:
- initWithPhotoLibrary:
- updateAsNeeded
- allWallpaperURLs
- wallpaperFileHash
- deleteAll
- importAll
- allExistingWallpaperAssets
- addWallpaperURLsForModel:toURLs:
- dealloc
- init
- managedObjectContext
- photoLibrary
- setPhotoLibrary:
@end
