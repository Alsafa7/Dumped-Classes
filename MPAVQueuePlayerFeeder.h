@interface MPAVQueuePlayerFeeder : NSObject
{
	usigned long long _desiredQueueDepth;
	id _downloadManager;
	BOOL _forceSynchronousQueueFilling;
	BOOL _fillQueueActive;
	id _items;
	BOOL _managesSystemDownloads;
	usigned long long _maxQueueDepth;
	usigned long long _minQueueDepth;
	long long _nextFillQueueToken;
	id _pausedDownloads;
	id _pausedDownloadsQueue;
	id _player;
	id _playerQueue;
	id _playlistItemSource;
	id _reusableItems;
}

+ downloadManager:downloadStatesDidChange:
+ setForceSynchronousQueueFilling:
+ setManagesSystemDownloads:
+ setMaxQueueDepth:
+ forceSynchronousQueueFilling
+ managesSystemDownloads
+ initWithMPQueuePlayer:itemSource:
+ cancelReusableItemsPassingTest:
+ reloadQueueKeepingCurrentItem:
+ maxQueueDepth
+ minQueueDepth
+ setMinQueueDepth:
+ acquireReusableItemsUsingBlock:
+ advanceToNextItem
+ _effectiveNetworkTypeDidChangeNotification:
+ _pauseOrResumeDownloads:currentDownloadID:
+ _removeCurrentItem
+ _updateQueueDepthForRateChange
+ _fillInQueueWithExtraSpace:
+ _fillInQueueWithExtraSpace:ignoreExistingItems:
+ _fillInQueueWithExtraSpace:ignoreExistingItems:removeCurrentItem:
+ _markIsReusable:item:
+ _updatePlayerQueueWithRemovedItems:addedItems:removeCurrentItem:
+ _reloadQueueKeepingCurrentItem:allowReusingItems:
+ _removeInvalidItems:
+ _fillInQueue
+ dealloc
+ description
+ invalidate
+ items
+ currentItem
+ observeValueForKeyPath:ofObject:change:context:
+ .cxx_destruct
- downloadManager:downloadStatesDidChange:
- setForceSynchronousQueueFilling:
- setManagesSystemDownloads:
- setMaxQueueDepth:
- forceSynchronousQueueFilling
- managesSystemDownloads
- initWithMPQueuePlayer:itemSource:
- cancelReusableItemsPassingTest:
- reloadQueueKeepingCurrentItem:
- maxQueueDepth
- minQueueDepth
- setMinQueueDepth:
- acquireReusableItemsUsingBlock:
- advanceToNextItem
- _effectiveNetworkTypeDidChangeNotification:
- _pauseOrResumeDownloads:currentDownloadID:
- _removeCurrentItem
- _updateQueueDepthForRateChange
- _fillInQueueWithExtraSpace:
- _fillInQueueWithExtraSpace:ignoreExistingItems:
- _fillInQueueWithExtraSpace:ignoreExistingItems:removeCurrentItem:
- _markIsReusable:item:
- _updatePlayerQueueWithRemovedItems:addedItems:removeCurrentItem:
- _reloadQueueKeepingCurrentItem:allowReusingItems:
- _removeInvalidItems:
- _fillInQueue
- dealloc
- description
- invalidate
- items
- currentItem
- observeValueForKeyPath:ofObject:change:context:
- .cxx_destruct
@end
