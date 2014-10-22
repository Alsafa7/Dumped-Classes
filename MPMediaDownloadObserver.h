@interface MPMediaDownloadObserver : NSObject
{
	id _progressHandler;
	id _queue;
	BOOL _hasPendingProgressHandlerExecution;
	BOOL _invalidated;
	long long _pid;
}

+ cancelDownload
+ downloadProgress
+ isRestoreDownload
+ canCancel
+ _onQueue_invalidate
+ _onQueue_setShouldFireProgressHandler
+ isCurrentlyPlayable
+ progressHandler
+ isPurchasing
+ rawDownloadProgress
+ rawDownloadTotal
+ dealloc
+ init
+ invalidate
+ setProgressHandler:
+ persistentID
+ .cxx_destruct
- cancelDownload
- downloadProgress
- isRestoreDownload
- canCancel
- _onQueue_invalidate
- _onQueue_setShouldFireProgressHandler
- isCurrentlyPlayable
- progressHandler
- isPurchasing
- rawDownloadProgress
- rawDownloadTotal
- dealloc
- init
- invalidate
- setProgressHandler:
- persistentID
- .cxx_destruct
@end
