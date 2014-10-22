@interface AirTrafficSettingsDataSource : NSObject
{
	id _connection;
	id _wakeupCall;
	id _libraryIdentifier;
	id _connectedLibraries;
	id _wakeableLibraries;
	id _wakingLibraries;
	id _librariesWaitingToSync;
	id _syncingLibraries;
	id _waitingForSyncTimer;
	usigned long long _backgroundTaskIdentifier;
	BOOL _registered;
	id _lastProgressDict;
	id _delegate;
}

+ syncing
+ waitingToWake
+ hostIdentifiers
+ waitingToSync
+ hostForIdentifier:
+ hostsWaitingToWake
+ scanWakeableLibraries
+ unregisterForProgress
+ stopScanningWakeableLibraries
+ unregisterConnectionIfUnused
+ syncTimeoutExpired
+ registerForProgressWithLibraryIdentifier:
+ initWithLibraryIdentifier:
+ isWifiEnabled
+ connection:updatedProgress:
+ dealloc
+ setDelegate:
+ init
+ delegate
+ connection
+ cancelSync
+ connected
+ connectionWasInterrupted:
+ requestSync
+ .cxx_destruct
- syncing
- waitingToWake
- hostIdentifiers
- waitingToSync
- hostForIdentifier:
- hostsWaitingToWake
- scanWakeableLibraries
- unregisterForProgress
- stopScanningWakeableLibraries
- unregisterConnectionIfUnused
- syncTimeoutExpired
- registerForProgressWithLibraryIdentifier:
- initWithLibraryIdentifier:
- isWifiEnabled
- connection:updatedProgress:
- dealloc
- setDelegate:
- init
- delegate
- connection
- cancelSync
- connected
- connectionWasInterrupted:
- requestSync
- .cxx_destruct
@end
