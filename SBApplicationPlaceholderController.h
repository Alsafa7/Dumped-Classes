@interface SBApplicationPlaceholderController : NSObject
{
	id _appController;
	id _lsWorkspaceObserver;
	id _placeholdersByBundleID;
	id _pendingAdded;
	id _pendingInstalled;
	id _pendingCancelled;
	BOOL _hasDownloadedFromStore;
	BOOL _usingNetwork;
}

+ placeholderForDisplayID:
+ placeholdersByDisplayID
+ hasDownloadedStoreApplication
+ iconAccessoriesDidUpdate:
+ _processPendingProxies
+ _addPlaceholders:
+ _removePlaceholders:forInstall:
+ _postPlaceholdersDidChangeForAdded:modified:removed:
+ _swapDownloadingIcon:forApplicationIcon:
+ _finishPlaceholder:
+ _removeDownloadingIcons:saveState:
+ _downloadsEnded
+ _dropGrabbedIconIfNecessary:completion:
+ applicationPlaceholdersAdded:
+ applicationPlaceholdersModified:
+ applicationPlaceholdersCancelled:
+ applicationPlaceholdersInstalled:
+ applicationPlaceholdersIconUpdated:
+ applicationPlaceholdersNetworkUsageChanged:
+ dealloc
+ init
+ isUsingNetwork
- placeholderForDisplayID:
- placeholdersByDisplayID
- hasDownloadedStoreApplication
- iconAccessoriesDidUpdate:
- _processPendingProxies
- _addPlaceholders:
- _removePlaceholders:forInstall:
- _postPlaceholdersDidChangeForAdded:modified:removed:
- _swapDownloadingIcon:forApplicationIcon:
- _finishPlaceholder:
- _removeDownloadingIcons:saveState:
- _downloadsEnded
- _dropGrabbedIconIfNecessary:completion:
- applicationPlaceholdersAdded:
- applicationPlaceholdersModified:
- applicationPlaceholdersCancelled:
- applicationPlaceholdersInstalled:
- applicationPlaceholdersIconUpdated:
- applicationPlaceholdersNetworkUsageChanged:
- dealloc
- init
- isUsingNetwork
@end
