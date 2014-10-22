@interface SBModelessSyncController : NSObject
{
	BOOL _isAppSyncing;
	BOOL _isSyncing;
	int _syncRegistrationToken;
	int _iCloudRestoreToken;
	BOOL _restoringFromICloud;
	BOOL _isAutoSyncing;
	BOOL _isWirelessSyncing;
	id _airTrafficConnection;
}

+ isSyncing
+ gotLowBatteryWarning
+ isWirelessSyncing
+ isAutoSyncing
+ isAppSyncing
+ _appSyncStateChanged
+ setIsSyncing:
+ _beginObservingICloudRestoreStatus
+ _endObservingICloudRestoreStatus
+ _setAppSyncState:
+ _updateIconsForStateChange
+ _iCloudStatusChanged
+ isRestoringFromICloud
+ connection:updatedProgress:
+ beginMonitoring
+ endMonitoring
+ dealloc
+ init
+ connectionWasInterrupted:
- isSyncing
- gotLowBatteryWarning
- isWirelessSyncing
- isAutoSyncing
- isAppSyncing
- _appSyncStateChanged
- setIsSyncing:
- _beginObservingICloudRestoreStatus
- _endObservingICloudRestoreStatus
- _setAppSyncState:
- _updateIconsForStateChange
- _iCloudStatusChanged
- isRestoringFromICloud
- connection:updatedProgress:
- beginMonitoring
- endMonitoring
- dealloc
- init
- connectionWasInterrupted:
@end
