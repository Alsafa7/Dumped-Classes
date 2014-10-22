@interface SUQueueSessionManager : NSObject
{
	id _dispatchQueue;
	id _downloadManagers;
	id _preorderManagers;
}

+ dealloc
+ init
+ endDownloadManagerSessionForManager:
+ beginDownloadManagerSessionForDownloadKind:
+ beginDownloadManagerSessionWithDownloadKinds:
+ beginPreorderManagerSessionWithItemKinds:
+ endPreorderManagerSessionWithManager:
+ beginDownloadManagerSessionWithManagerOptions:
+ _queueSessionWithManagerOptions:fromArray:
+ _queueSessionWithDownloadKinds:fromArray:
+ _queueSessionWithQueue:fromArray:
+ _endQueueSession:fromArray:
- dealloc
- init
- endDownloadManagerSessionForManager:
- beginDownloadManagerSessionForDownloadKind:
- beginDownloadManagerSessionWithDownloadKinds:
- beginPreorderManagerSessionWithItemKinds:
- endPreorderManagerSessionWithManager:
- beginDownloadManagerSessionWithManagerOptions:
- _queueSessionWithManagerOptions:fromArray:
- _queueSessionWithDownloadKinds:fromArray:
- _queueSessionWithQueue:fromArray:
- _endQueueSession:fromArray:
@end
