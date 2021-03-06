@interface DADConnection : NSObject
{
	id _conn;
	id _muckingWithConn;
	id _accountIdsWithAlreadyResetCerts;
	id _accountIdsWithAlreadyResetThrottleTimers;
	id _statusReportBlock;
	id _inFlightSearchQueries;
	id _inFlightFolderChanges;
	id _inFlightAttachmentDownloads;
	id _inFlightShareRequests;
}

+ performServerContactsSearch:forAccountWithID:
+ cancelServerContactsSearch:
+ updateContentsOfAllFoldersForAccountID:andDataclass:isUserRequested:
+ updateFolderListForAccountID:andDataclasses:isUserRequested:
+ cancelDownloadingAttachmentWithDownloadID:error:
+ beginDownloadingAttachmentWithUUID:accountID:queue:progressBlock:completionBlock:
+ dealloc
+ init
+ _init
+ _connection
+ handleURL:
+ registerForInterrogationWithBlock:
+ removeStoresForAccountWithID:
+ updateContentsOfAllFoldersForAccountID:andDataclasses:isUserRequested:
+ _dispatchMessage:
+ _createReplyToRequest:withProperties:
+ _foldersUpdated:
+ fillOutCurrentEASTimeZoneInfo
+ resumeWatchingFoldersWithKeys:forAccountID:
+ watchFoldersWithKeys:forAccountID:
+ stopWatchingFoldersWithKeys:forAccountID:
+ processMeetingRequests:deliveryIdsToClear:deliveryIdsToSoftClear:inFolderWithId:forAccountWithId:
+ setFolderIdsThatExternalClientsCareAboutAdded:deleted:foldersTag:forAccountID:
+ suspendWatchingFoldersWithKeys:forAccountID:
+ processFolderChange:forAccountWithID:
+ reportFolderItemsSyncSuccess:forFolderWithID:andAccountWithID:
+ requestPolicyUpdateForAccountID:
+ updateContentsOfFoldersWithKeys:forAccountID:andDataclass:isUserRequested:
+ _tearDownInFlightObjects
+ _reallyRegisterForInterrogation
+ _serverDiedWithReason:
+ decodedErrorFromData:
+ _resetCertWarningsForAccountId:andDataclasses:isUserRequested:
+ _requestDaemonChangeAgentMonitoringStatus:waitForReply:
+ _resetThrottleTimersForAccountId:
+ updateContentsOfFoldersWithKeys:forAccountID:andDataclasses:isUserRequested:
+ _sendSynchronousXPCMessageWithParameters:handlerBlock:
+ _cancelDownloadsWithIDs:error:
+ _registerForAppResumedNotification
+ resetTimersAndWarnings
+ _policyKeyChanged:
+ _logDataAccessStatus:
+ _serverContactsSearchQueryFinished:
+ _folderChangeFinished:
+ _getStatusReportsFromClient:
+ _downloadProgress:
+ _downloadFinished:
+ _shareResponseFinished:
+ currentPolicyKeyForAccountID:
+ requestDaemonStartMonitoringAgents
+ requestDaemonStopMonitoringAgents
+ requestDaemonStartMonitoringAgents_Sync
+ _requestDaemonStopMonitoringAgents_Sync
+ requestDaemonShutdown
+ updateContentsOfFoldersWithKeys:forAccountID:andDataclass:
+ updateContentsOfAllFoldersForAccountID:andDataclass:
+ respondToSharedCalendarInvite:forCalendarWithID:accountID:queue:completionBlock:
+ statusReports
+ activeSyncDeviceIdentifier
+ updateFolderListForAccountID:andDataclasses:
+ updateFolderListForAccountID:andDataclasses:requireChangedFolders:isUserRequested:
- performServerContactsSearch:forAccountWithID:
- cancelServerContactsSearch:
- updateContentsOfAllFoldersForAccountID:andDataclass:isUserRequested:
- updateFolderListForAccountID:andDataclasses:isUserRequested:
- cancelDownloadingAttachmentWithDownloadID:error:
- beginDownloadingAttachmentWithUUID:accountID:queue:progressBlock:completionBlock:
- dealloc
- init
- _init
- _connection
- handleURL:
- registerForInterrogationWithBlock:
- removeStoresForAccountWithID:
- updateContentsOfAllFoldersForAccountID:andDataclasses:isUserRequested:
- _dispatchMessage:
- _createReplyToRequest:withProperties:
- _foldersUpdated:
- fillOutCurrentEASTimeZoneInfo
- resumeWatchingFoldersWithKeys:forAccountID:
- watchFoldersWithKeys:forAccountID:
- stopWatchingFoldersWithKeys:forAccountID:
- processMeetingRequests:deliveryIdsToClear:deliveryIdsToSoftClear:inFolderWithId:forAccountWithId:
- setFolderIdsThatExternalClientsCareAboutAdded:deleted:foldersTag:forAccountID:
- suspendWatchingFoldersWithKeys:forAccountID:
- processFolderChange:forAccountWithID:
- reportFolderItemsSyncSuccess:forFolderWithID:andAccountWithID:
- requestPolicyUpdateForAccountID:
- updateContentsOfFoldersWithKeys:forAccountID:andDataclass:isUserRequested:
- _tearDownInFlightObjects
- _reallyRegisterForInterrogation
- _serverDiedWithReason:
- decodedErrorFromData:
- _resetCertWarningsForAccountId:andDataclasses:isUserRequested:
- _requestDaemonChangeAgentMonitoringStatus:waitForReply:
- _resetThrottleTimersForAccountId:
- updateContentsOfFoldersWithKeys:forAccountID:andDataclasses:isUserRequested:
- _sendSynchronousXPCMessageWithParameters:handlerBlock:
- _cancelDownloadsWithIDs:error:
- _registerForAppResumedNotification
- resetTimersAndWarnings
- _policyKeyChanged:
- _logDataAccessStatus:
- _serverContactsSearchQueryFinished:
- _folderChangeFinished:
- _getStatusReportsFromClient:
- _downloadProgress:
- _downloadFinished:
- _shareResponseFinished:
- currentPolicyKeyForAccountID:
- requestDaemonStartMonitoringAgents
- requestDaemonStopMonitoringAgents
- requestDaemonStartMonitoringAgents_Sync
- _requestDaemonStopMonitoringAgents_Sync
- requestDaemonShutdown
- updateContentsOfFoldersWithKeys:forAccountID:andDataclass:
- updateContentsOfAllFoldersForAccountID:andDataclass:
- respondToSharedCalendarInvite:forCalendarWithID:accountID:queue:completionBlock:
- statusReports
- activeSyncDeviceIdentifier
- updateFolderListForAccountID:andDataclasses:
- updateFolderListForAccountID:andDataclasses:requireChangedFolders:isUserRequested:
@end
