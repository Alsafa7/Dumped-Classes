@interface HSCloudAvailabilityController : NSObject
{
	id _accessQueue;
	BOOL _isAirplaneModeActive;
	BOOL _isAutoDownloadOnCellularAllowed;
	BOOL _isCellularDataActive;
	BOOL _isShowingAllMusic;
	BOOL _isShowingAllVideo;
	BOOL _isUpdateInProgress;
	BOOL _isWiFiEnabled;
	BOOL _isNetworkReachable;
	BOOL _canShowCloudMusic;
	BOOL _canShowCloudVideo;
	BOOL _canShowCloudDownloadButtons;
	int _preferencesChangedNotifyToken;
	BOOL _preferencesChangedNotifyTokenIsValid;
	long long _networkType;
	id _radiosPreferences;
	pointer reachabilityRef;
}

+ isCellularDataRestricted
+ canShowCloudMusic
+ canShowCloudVideo
+ hasProperNetworkConditionsToPlayMedia
+ _networkTypeDidChangeNotification:
+ shouldProhibitActionsForCurrentNetworkConditions
+ canShowCloudDownloadButtons
+ dealloc
+ init
+ isNetworkReachable
+ _isAutoDownloadOnCellularAllowed
+ _uncachedIsAutoDownloadOnCellularAllowed
+ _cellularNetworkAllowedDidChangeNotification:
+ _uncachedIsShowingAllMusic
+ _uncachedIsShowingAllVideo
+ _onQueue_updateCanShowCloudDownloadButtonsWithNotification:
+ _onQueue_updateCanShowCloudTracksWithNotification:
+ _wifiEnabledDidChangeNotification:
+ _hasCellularCapability
+ _hasWiFiCapability
+ airplaneModeChanged
+ _setNewIsNetworkReachable:
+ _handleTelephonyNotificationWithName:userInfo:
- isCellularDataRestricted
- canShowCloudMusic
- canShowCloudVideo
- hasProperNetworkConditionsToPlayMedia
- _networkTypeDidChangeNotification:
- shouldProhibitActionsForCurrentNetworkConditions
- canShowCloudDownloadButtons
- dealloc
- init
- isNetworkReachable
- _isAutoDownloadOnCellularAllowed
- _uncachedIsAutoDownloadOnCellularAllowed
- _cellularNetworkAllowedDidChangeNotification:
- _uncachedIsShowingAllMusic
- _uncachedIsShowingAllVideo
- _onQueue_updateCanShowCloudDownloadButtonsWithNotification:
- _onQueue_updateCanShowCloudTracksWithNotification:
- _wifiEnabledDidChangeNotification:
- _hasCellularCapability
- _hasWiFiCapability
- airplaneModeChanged
- _setNewIsNetworkReachable:
- _handleTelephonyNotificationWithName:userInfo:
@end
