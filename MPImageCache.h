@interface MPImageCache : NSObject
{
	id _cachedImages;
	id _cachedImagesQueue;
	usigned long long _cacheSize;
	id _delegate;
	id _operationQueue;
	long long _resumeToForegroundCacheSize;
	long long _suspendToBackgroundCacheSize;
	id _idleEventHandler;
	id _libraryDisplayValueChangeObserver;
}

+ _willEnterForegroundNotification:
+ _didEnterBackgroundNotification:
+ cachedImageForRequest:
+ loadImageForRequest:asynchronously:completionHandler:
+ cancelAllImageRequests
+ setImageRequestsSuspended:
+ imageForRequest:error:
+ _didReceiveMemoryWarningNotification:
+ _zapCachedPlaceholders
+ _imageByApplyingModificationsForCachedImageForRequest:
+ _cacheImage:forKey:
+ setCacheSize:preserveExisting:
+ imageRequest:failedWithError:
+ imageRequest:loadedImage:
+ _zapCache
+ setCacheSize:
+ imageRequestsSuspended
+ isIdle
+ _removeCachedImageForKey:
+ cacheSize
+ idleEventHandler
+ setIdleEventHandler:
+ libraryDisplayValueChangeObserver
+ setLibraryDisplayValueChangeObserver:
+ dealloc
+ setDelegate:
+ init
+ debugDescription
+ delegate
+ observeValueForKeyPath:ofObject:change:context:
+ _cachedImageForKey:
+ _enqueueRequest:
+ .cxx_destruct
- _willEnterForegroundNotification:
- _didEnterBackgroundNotification:
- cachedImageForRequest:
- loadImageForRequest:asynchronously:completionHandler:
- cancelAllImageRequests
- setImageRequestsSuspended:
- imageForRequest:error:
- _didReceiveMemoryWarningNotification:
- _zapCachedPlaceholders
- _imageByApplyingModificationsForCachedImageForRequest:
- _cacheImage:forKey:
- setCacheSize:preserveExisting:
- imageRequest:failedWithError:
- imageRequest:loadedImage:
- _zapCache
- setCacheSize:
- imageRequestsSuspended
- isIdle
- _removeCachedImageForKey:
- cacheSize
- idleEventHandler
- setIdleEventHandler:
- libraryDisplayValueChangeObserver
- setLibraryDisplayValueChangeObserver:
- dealloc
- setDelegate:
- init
- debugDescription
- delegate
- observeValueForKeyPath:ofObject:change:context:
- _cachedImageForKey:
- _enqueueRequest:
- .cxx_destruct
@end
