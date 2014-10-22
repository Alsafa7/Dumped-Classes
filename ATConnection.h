@interface ATConnection : NSObject
{
	id _connection;
	id _delegate;
	BOOL _registerForStatus;
	id _registeredDataclasses;
	int _atcRunningToken;
	BOOL _atcRunning;
}

+ registerForStatus
+ unregisterForStatus
+ dealloc
+ setDelegate:
+ init
+ delegate
+ _connection
+ clearSyncData
+ _resetConnection
+ _sendMessage:info:reply:
+ _sendStatusRegistration
+ registerForAssetProgressForDataclass:
+ purgePartialAsset:forDataclass:
+ requestSyncForLibrary:
+ cancelSync
+ dataMigrationFinished
+ lowBatteryNotification
+ keepATCAlive:
+ isSyncing:automatically:wirelessly:
+ prioritizeAsset:forDataclass:
+ _handleMessage:
- registerForStatus
- unregisterForStatus
- dealloc
- setDelegate:
- init
- delegate
- _connection
- clearSyncData
- _resetConnection
- _sendMessage:info:reply:
- _sendStatusRegistration
- registerForAssetProgressForDataclass:
- purgePartialAsset:forDataclass:
- requestSyncForLibrary:
- cancelSync
- dataMigrationFinished
- lowBatteryNotification
- keepATCAlive:
- isSyncing:automatically:wirelessly:
- prioritizeAsset:forDataclass:
- _handleMessage:
@end
