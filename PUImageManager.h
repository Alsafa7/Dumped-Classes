@interface PUImageManager : NSObject
{
	id _preheatSourcesByFormat;
	id _preheatItemsByAssetByFormat;
	id _suspendedFormats;
}

+ init
+ invalidateCachedImagesForAssets:
+ fetchImageForAsset:fastFormat:qualityFormat:options:handler:
+ startPrefetchingImagesForAssets:format:options:
+ stopFetchingImagesForAssets:format:
+ _preheatItemForAsset:format:options:createIfNeeded:
+ _isSuspendingFetchesForFormat:
+ _preheatItemsByAssetForFormat:createIfNeeded:
+ _preheatSourceForFormat:
+ _keyForFormat:
+ cancelAllFetches
+ suspendFetchesForFormat:
+ resumeFetchesForFormat:
+ .cxx_destruct
- init
- invalidateCachedImagesForAssets:
- fetchImageForAsset:fastFormat:qualityFormat:options:handler:
- startPrefetchingImagesForAssets:format:options:
- stopFetchingImagesForAssets:format:
- _preheatItemForAsset:format:options:createIfNeeded:
- _isSuspendingFetchesForFormat:
- _preheatItemsByAssetForFormat:createIfNeeded:
- _preheatSourceForFormat:
- _keyForFormat:
- cancelAllFetches
- suspendFetchesForFormat:
- resumeFetchesForFormat:
- .cxx_destruct
@end
