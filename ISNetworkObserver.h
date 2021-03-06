@interface ISNetworkObserver : NSObject
{
	id _dataStatusIndicator;
	id _dispatchQueue;
	BOOL _isCellularRestricted;
	double _lastNetworkTypeChangeTime;
	long long _networkUsageCount;
	long long _networkType;
	id _notificationQueue;
	id _observedDownloadQueues;
	id _operatorName;
	pointer _reachability;
	id _registrationStatus;
	pointer _telephonyServer;
}

+ _applicationWillEnterForegroundNotification:
+ networkType
+ shouldShowCellularAutomaticDownloadsSwitch
+ dealloc
+ init
+ isWiFiEnabled
+ downloadQueueNetworkUsageChanged:
+ downloadQueue:changedWithRemovals:
+ lastNetworkTypeChangeTime
+ connectionTypeHeader
+ _currentNetworkType
+ _ntsIsUsingNetwork
+ _postUsageChangedToValue:
+ operatorName
+ copyValueForCarrierBundleKey:
+ _dataStatusIndicator
+ _reloadNetworkType
+ _setNetworkType:
+ _postTypeChangedNotificationFromValue:toValue:
+ _networkTypeForReachabilityFlags:
+ _networkTypeFromDataIndicator:
+ beginObservingDownloadQueue:
+ endObservingDownloadQueue:
+ dataStatusIndicator
+ isCellularDataEnabledForBundleIdentifier:
+ modemRegistrationStatus
+ setNetworkType:
+ _handleTelephonyNotificationWithName:userInfo:
+ _reloadCellularRestriction
+ _reloadNetworkTypeWithReachabilityFlags:
+ isUsingNetwork
+ beginUsingNetwork
+ endUsingNetwork
+ reloadNetworkType
- _applicationWillEnterForegroundNotification:
- networkType
- shouldShowCellularAutomaticDownloadsSwitch
- dealloc
- init
- isWiFiEnabled
- downloadQueueNetworkUsageChanged:
- downloadQueue:changedWithRemovals:
- lastNetworkTypeChangeTime
- connectionTypeHeader
- _currentNetworkType
- _ntsIsUsingNetwork
- _postUsageChangedToValue:
- operatorName
- copyValueForCarrierBundleKey:
- _dataStatusIndicator
- _reloadNetworkType
- _setNetworkType:
- _postTypeChangedNotificationFromValue:toValue:
- _networkTypeForReachabilityFlags:
- _networkTypeFromDataIndicator:
- beginObservingDownloadQueue:
- endObservingDownloadQueue:
- dataStatusIndicator
- isCellularDataEnabledForBundleIdentifier:
- modemRegistrationStatus
- setNetworkType:
- _handleTelephonyNotificationWithName:userInfo:
- _reloadCellularRestriction
- _reloadNetworkTypeWithReachabilityFlags:
- isUsingNetwork
- beginUsingNetwork
- endUsingNetwork
- reloadNetworkType
@end
