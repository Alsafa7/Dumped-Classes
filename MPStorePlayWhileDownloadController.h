@interface MPStorePlayWhileDownloadController : NSObject
{
	id _cellularRestrictedAlertViews;
	id _downloadHandler;
	id _downloadManager;
	id _downloadSessionQueue;
	id _downloadSessions;
}

+ downloadHandler:handleSession:
+ downloadHandler:cancelSession:
+ openSessionWithMediaItem:options:
+ canOpenSessionWithMediaItem:
+ isSessionRequiredToPlayMediaItem:
+ _openSessionWithProperties:options:
+ _showNoNetworkDialogForMediaItem:
+ _showCellularRestrictedDialogForMediaItem:
+ _downloadSessionWithID:
+ _openSessionWithProperties:style:
+ showNetworkConstraintDialogForMediaItem:
+ _closeSessionForAsset:
+ dealloc
+ init
+ _init
+ alertView:didDismissWithButtonIndex:
+ .cxx_destruct
- downloadHandler:handleSession:
- downloadHandler:cancelSession:
- openSessionWithMediaItem:options:
- canOpenSessionWithMediaItem:
- isSessionRequiredToPlayMediaItem:
- _openSessionWithProperties:options:
- _showNoNetworkDialogForMediaItem:
- _showCellularRestrictedDialogForMediaItem:
- _downloadSessionWithID:
- _openSessionWithProperties:style:
- showNetworkConstraintDialogForMediaItem:
- _closeSessionForAsset:
- dealloc
- init
- _init
- alertView:didDismissWithButtonIndex:
- .cxx_destruct
@end
