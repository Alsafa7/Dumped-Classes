@interface MPDownloadManager : NSObject
{
	id _dispatchQueue;
	id _observerQueue;
	id _downloadManager;
	id _downloadsByID;
	id _downloadsByStoreItemID;
	pointer _observers;
}

+ cancelDownloads:completionBlock:
+ downloadManager:downloadStatesDidChange:
+ downloadManagerDownloadsDidChange:
+ downloadManagerNetworkUsageDidChange:
+ downloads
+ downloadWithIdentifier:
+ _rebuildCacheIfNecessary
+ downloadManager:downloadsDidChange:
+ _applyBlockToObservers:
+ _copyObservers
+ _clearCache
+ inProgressDownloadWithStoreItemID:
+ dealloc
+ init
+ removeObserver:
+ addObserver:
+ .cxx_destruct
- cancelDownloads:completionBlock:
- downloadManager:downloadStatesDidChange:
- downloadManagerDownloadsDidChange:
- downloadManagerNetworkUsageDidChange:
- downloads
- downloadWithIdentifier:
- _rebuildCacheIfNecessary
- downloadManager:downloadsDidChange:
- _applyBlockToObservers:
- _copyObservers
- _clearCache
- inProgressDownloadWithStoreItemID:
- dealloc
- init
- removeObserver:
- addObserver:
- .cxx_destruct
@end
