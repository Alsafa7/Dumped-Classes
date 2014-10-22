@interface SUDownloadManager : NSObject
{
	id _cachedDownloads;
	id _clientInterface;
	id _dispatchQueue;
	id _downloadManager;
	id _downloadsByID;
}

+ initWithDownloadManager:
+ downloads
+ dealloc
+ downloadManager
+ reloadDownloadManager
+ initWithDownloadManager:clientInterface:
+ preflightWithCompletionBlock:
+ deleteDownload:
+ _removeObject:fromArray:
+ _reloadDownloadManager
+ _finishPreflightWithCompletionBlock:
+ downloadForDownloadIdentifier:
- initWithDownloadManager:
- downloads
- dealloc
- downloadManager
- reloadDownloadManager
- initWithDownloadManager:clientInterface:
- preflightWithCompletionBlock:
- deleteDownload:
- _removeObject:fromArray:
- _reloadDownloadManager
- _finishPreflightWithCompletionBlock:
- downloadForDownloadIdentifier:
@end
