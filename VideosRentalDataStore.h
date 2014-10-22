@interface VideosRentalDataStore : NSObject
{
	id _dispatchQueue;
	id _localNotifications;
	id _operationQueue;
	long long _pendingRentalEventCount;
	id _rentalDataByPID;
	id _resultSet;
	BOOL _shouldReloadRentalData;
}

+ rentalDataForMediaItem:
+ loadRentalDataFromLibrary
+ handleLocalNotification:
+ resetAllDataForReason:
+ resetRentalDataForMediaItem:reason:
+ _libraryDisplayValuesDidChange:
+ _rentalDataForMediaItem:
+ loadRentalData:withReason:
+ _scheduleRentalEvents
+ _isLoadingRentalData:
+ _reloadRentalData
+ _handleFinishedOperation:
+ _rentalItems
+ _resetLocalNotifications
+ downloadManager:didAddDownloads:removeDownloads:
+ _libraryDidChangeNotification:
+ dealloc
+ init
+ observeValueForKeyPath:ofObject:change:context:
+ .cxx_destruct
+ _enqueueOperation:
- rentalDataForMediaItem:
- loadRentalDataFromLibrary
- handleLocalNotification:
- resetAllDataForReason:
- resetRentalDataForMediaItem:reason:
- _libraryDisplayValuesDidChange:
- _rentalDataForMediaItem:
- loadRentalData:withReason:
- _scheduleRentalEvents
- _isLoadingRentalData:
- _reloadRentalData
- _handleFinishedOperation:
- _rentalItems
- _resetLocalNotifications
- downloadManager:didAddDownloads:removeDownloads:
- _libraryDidChangeNotification:
- dealloc
- init
- observeValueForKeyPath:ofObject:change:context:
- .cxx_destruct
- _enqueueOperation:
@end
