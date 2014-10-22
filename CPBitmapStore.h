@interface CPBitmapStore : NSObject
{
	id _path;
	id _imagePath;
	id _cache;
	int _version;
	id _versionPath;
}

+ dealloc
+ commitTransaction
+ setVersion:
+ version
+ initWithPath:version:
+ purge
+ copyImageForKey:inGroup:
+ storeImageForKey:inGroup:opaque:image:
+ storeImageDataForKey:inGroup:withSize:opaque:scale:data:
+ copyAndStoreImageForKey:inGroup:withSize:opaque:scale:draw:
+ removeImagesInGroups:
+ imageCount
+ imageNameForKey:inGroup:
+ findImageWithKey:inGroup:andInfo:
+ openAndMmap:withInfo:
+ memContentOffset
+ saveImageWithKey:inGroup:andInfo:
+ _copyAndStoreImageForKey:inGroup:withSize:opaque:scale:fillMem:alternateCompletion:
+ _versionPath
+ copyImageForKey:
+ commitTxn
+ imagePath
+ allGroups
- dealloc
- commitTransaction
- setVersion:
- version
- initWithPath:version:
- purge
- copyImageForKey:inGroup:
- storeImageForKey:inGroup:opaque:image:
- storeImageDataForKey:inGroup:withSize:opaque:scale:data:
- copyAndStoreImageForKey:inGroup:withSize:opaque:scale:draw:
- removeImagesInGroups:
- imageCount
- imageNameForKey:inGroup:
- findImageWithKey:inGroup:andInfo:
- openAndMmap:withInfo:
- memContentOffset
- saveImageWithKey:inGroup:andInfo:
- _copyAndStoreImageForKey:inGroup:withSize:opaque:scale:fillMem:alternateCompletion:
- _versionPath
- copyImageForKey:
- commitTxn
- imagePath
- allGroups
@end
