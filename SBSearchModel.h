@interface SBSearchModel : SPSearchAgent
{
	id _clearSearchTimer;
	id _clearSearchDate;
	id _cachedResultImages;
	id _cacheResultLock;
	id _prefetchOperationQueue;
	id _loadOperationQueue;
	id _waitOperation;
	pointer _addressBook;
}

+ resetClearSearchTimer
+ _updateClearSearchTimerFireDate
+ _clearSearchTimerFired
+ _customImageForPath:
+ _uniqueKeyForResult:withSearchDomain:
+ _cacheImage:forKey:withCompletionBlock:
+ _imageForResult:inSection:withCompletionBlock:
+ fetchImageForResult:inSection:withCompletionBlock:
+ startClearSearchTimer
+ launchingURLForResult:withDisplayIdentifier:andSection:
+ cachedImageForResult:inSection:
+ cancelPrefetchingAndStartNewBatch
+ prefetchImageForResult:inSection:
+ operationFetchingImageForResult:inSection:withCompletionBlock:
+ dealloc
+ init
+ invalidate
+ handleOptionsForNewSections:
+ currentToken
- resetClearSearchTimer
- _updateClearSearchTimerFireDate
- _clearSearchTimerFired
- _customImageForPath:
- _uniqueKeyForResult:withSearchDomain:
- _cacheImage:forKey:withCompletionBlock:
- _imageForResult:inSection:withCompletionBlock:
- fetchImageForResult:inSection:withCompletionBlock:
- startClearSearchTimer
- launchingURLForResult:withDisplayIdentifier:andSection:
- cachedImageForResult:inSection:
- cancelPrefetchingAndStartNewBatch
- prefetchImageForResult:inSection:
- operationFetchingImageForResult:inSection:withCompletionBlock:
- dealloc
- init
- invalidate
- handleOptionsForNewSections:
- currentToken
@end
