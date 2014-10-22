@interface PLChangeNode : NSObject
{
	id _hubConnection;
	Class _changeHubClass;
	Array _nodeUUID;
	int _notifyToken;
	id _isolationQueue;
	usigned long long _lastKnownChangeHubEventIndex;
}

+ dealloc
+ init
+ connectManagedObjectContext:
+ disconnectManagedObjectContext:
+ setupHubConnection
+ processDelayedMomentChangesWithTransaction:
+ _processCloudFeedUpdateDataFromChangeHubEvent:transaction:
+ _processDelayedDupeAnalysisFromChangeHubEvent:transaction:
+ _processDeletionsFromChangeHubEvent:transaction:
+ distributeRemoteContextDidSaveEvent:withGroup:transaction:
+ sendEventToChangeHub:transaction:
+ sendChangeHubEventForDidSaveNotification:
+ createXPCObjectFromDidSaveNotification:
+ processDelayedCloudFeedAlbumUpdates:assetInserts:assetUpdates:commentInserts:invitationRecordUpdates:deletionEntries:transaction:
+ processDelayedDupeAnalysisNormalInserts:cloudInserts:transaction:
+ processDelayedAssetsForFileSystemPersistency:transaction:
+ handleRemoteChangeHubRequest:
+ fetchNewEventsFromChangeHub
+ forceUserInterfaceReload
+ processRemoteEvents:
+ isEventOriginatingFromHere:
+ distributeRemoteChangeHubEvent:withGroup:transaction:
+ distributeLocalEvent:
+ _processDelatedAssetsForFileSystemPersistencyFromChangeHubEvent:transaction:
- dealloc
- init
- connectManagedObjectContext:
- disconnectManagedObjectContext:
- setupHubConnection
- processDelayedMomentChangesWithTransaction:
- _processCloudFeedUpdateDataFromChangeHubEvent:transaction:
- _processDelayedDupeAnalysisFromChangeHubEvent:transaction:
- _processDeletionsFromChangeHubEvent:transaction:
- distributeRemoteContextDidSaveEvent:withGroup:transaction:
- sendEventToChangeHub:transaction:
- sendChangeHubEventForDidSaveNotification:
- createXPCObjectFromDidSaveNotification:
- processDelayedCloudFeedAlbumUpdates:assetInserts:assetUpdates:commentInserts:invitationRecordUpdates:deletionEntries:transaction:
- processDelayedDupeAnalysisNormalInserts:cloudInserts:transaction:
- processDelayedAssetsForFileSystemPersistency:transaction:
- handleRemoteChangeHubRequest:
- fetchNewEventsFromChangeHub
- forceUserInterfaceReload
- processRemoteEvents:
- isEventOriginatingFromHere:
- distributeRemoteChangeHubEvent:withGroup:transaction:
- distributeLocalEvent:
- _processDelatedAssetsForFileSystemPersistencyFromChangeHubEvent:transaction:
@end
