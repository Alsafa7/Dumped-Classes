@interface VSAssetUpdateListener : NSObject
{
	BOOL _isListening;
	id _assetCleanupTimer;
}

+ _initShared
+ dealloc
+ init
+ startListening
+ stopListening
+ _spokenLanguageChanged:
+ _cleanupAssets
+ _scheduleNextCleanupForDate:
+ _rescheduleAssetCleanup
+ _flushLanguageChanges
+ _cancelAssetCleanupTimer
+ _updateNextCleanupDate
+ downloadAssetForLanguage:
+ downloadingAssetLanguage
+ assetStatusForLanguage:
+ assetDownloadStatus:progress:size:
+ removeAssetForLanguage:
- _initShared
- dealloc
- init
- startListening
- stopListening
- _spokenLanguageChanged:
- _cleanupAssets
- _scheduleNextCleanupForDate:
- _rescheduleAssetCleanup
- _flushLanguageChanges
- _cancelAssetCleanupTimer
- _updateNextCleanupDate
- downloadAssetForLanguage:
- downloadingAssetLanguage
- assetStatusForLanguage:
- assetDownloadStatus:progress:size:
- removeAssetForLanguage:
@end
