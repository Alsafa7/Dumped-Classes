@interface MPCloudAssetDownloadController : NSObject
{
	id _downloadSessionsForMediaItemIDs;
	BOOL _downloadSessionsPaused;
	usigned long long _prioritizedMediaItemID;
}

+ prioritizeDownloadSessionForMediaItem:
+ assetForMediaItem:options:
+ _networkTypeChangedNotification:
+ _matchCellularDataRestrictedDidChangeNotification:
+ _cancelDownloadSession:
+ _resumedPausedDownloadSessionsForCompletedMediaItemID:
+ _removeNotificationObserversForDownloadSession:
+ _lowBitrateCachedAssetDestinationDirectory
+ _cachedAssetDestinationDirectory
+ _stopDownloadsBasedOnCurrentNetworkIfNeeded
+ _canPlayCachedAssetAtPath:
+ _newAVAssetForMediaItem:options:
+ _newAssetForExistingDownloadSession:options:
+ _urlConnectionRequestForMediaItem:
+ _newAVAssetForPurchaseResponseDictionary:mediaItem:preferredAssetFlavor:options:
+ _mediaItemHasDownloadSessionForPersistentID:
+ _prioritizeDownloadSessionForMediaItemPersistentID:
+ _downloadKeyCookieWithValue:URL:
+ _downloadSucceededNotification:
+ _downloadFailedNotification:
+ _downloadFileSizeAvailableNotification:
+ mediaItemHasDownloadSession:
+ pauseAllDownloadSessions
+ resumeAllDownloadSessions
+ dealloc
+ init
+ .cxx_destruct
- prioritizeDownloadSessionForMediaItem:
- assetForMediaItem:options:
- _networkTypeChangedNotification:
- _matchCellularDataRestrictedDidChangeNotification:
- _cancelDownloadSession:
- _resumedPausedDownloadSessionsForCompletedMediaItemID:
- _removeNotificationObserversForDownloadSession:
- _lowBitrateCachedAssetDestinationDirectory
- _cachedAssetDestinationDirectory
- _stopDownloadsBasedOnCurrentNetworkIfNeeded
- _canPlayCachedAssetAtPath:
- _newAVAssetForMediaItem:options:
- _newAssetForExistingDownloadSession:options:
- _urlConnectionRequestForMediaItem:
- _newAVAssetForPurchaseResponseDictionary:mediaItem:preferredAssetFlavor:options:
- _mediaItemHasDownloadSessionForPersistentID:
- _prioritizeDownloadSessionForMediaItemPersistentID:
- _downloadKeyCookieWithValue:URL:
- _downloadSucceededNotification:
- _downloadFailedNotification:
- _downloadFileSizeAvailableNotification:
- mediaItemHasDownloadSession:
- pauseAllDownloadSessions
- resumeAllDownloadSessions
- dealloc
- init
- .cxx_destruct
@end
