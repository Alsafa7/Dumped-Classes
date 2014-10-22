@interface MPAVPlaylistManager : NSObject
{
	id _audioSessionModeOverride;
	id _currentItem;
	id _feeder;
	BOOL _goToTargetIndex;
	long long _isChangingPlaylistFeeder;
	long long _lastSelectionDirection;
	id _player;
	id _playlistFeeder;
	int _repeatMode;
	long long _targetIndex;
	BOOL _updatedAudioSessionMode;
}

+ repeatMode
+ setRepeatMode:
+ audioSessionModeOverride
+ setAudioSessionModeOverride:
+ setForceSynchronousQueueFilling:
+ _feeder
+ contentsDidChangeByRemovingRange:
+ contentInvalidatedWithCurrentItemMovedToIndex:
+ contentInvalidated
+ setPlaylistFeeder:startIndex:
+ setCurrentIndex:selectionDirection:
+ lastSelectionDirection
+ playlistFeeder
+ setPlaylistFeeder:
+ setManagesSystemDownloads:
+ isChangingPlaylistFeeder
+ setMaxQueueDepth:
+ forceSynchronousQueueFilling
+ managesSystemDownloads
+ _networkTypeDidChangeNotification:
+ _downloadCancelledNotification:
+ _assetCancelNotification:
+ _mediaLibraryDisplayValuesDidChangeNotification:
+ _reloadQueuedItemsIfPathBecameAvailable
+ maxQueueDepth
+ minQueueDepth
+ setMinQueueDepth:
+ _updateAudioSessionMode
+ _prepareToQueuePlaybackIndex:selectionDirection:
+ canChangePlaylistFeeder
+ contentInvalidatedWithNewIndex:
+ _feederItemForIndex:
+ _nextItemIndex:repeatMode:
+ _itemToFollowItemIndex:skipUnavailableContent:
+ _audioSessionModeForMediaItem:
+ queuePlayerFeeder:itemToFollowItem:
+ queuePlayerFeeder:willRemoveItem:
+ queuePlayerFeeder:willInsertItem:
+ queuePlayerFeederDidUpdateQueue:queuedItems:dequeuedItems:
+ queuePlayerFeederFailedToQueueAnyItems:
+ updateForSoundCheckDefaultsChange
+ dealloc
+ init
+ currentIndex
+ currentItem
+ observeValueForKeyPath:ofObject:change:context:
+ .cxx_destruct
+ player
- repeatMode
- setRepeatMode:
- audioSessionModeOverride
- setAudioSessionModeOverride:
- setForceSynchronousQueueFilling:
- _feeder
- contentsDidChangeByRemovingRange:
- contentInvalidatedWithCurrentItemMovedToIndex:
- contentInvalidated
- setPlaylistFeeder:startIndex:
- setCurrentIndex:selectionDirection:
- lastSelectionDirection
- playlistFeeder
- setPlaylistFeeder:
- setManagesSystemDownloads:
- isChangingPlaylistFeeder
- setMaxQueueDepth:
- forceSynchronousQueueFilling
- managesSystemDownloads
- _networkTypeDidChangeNotification:
- _downloadCancelledNotification:
- _assetCancelNotification:
- _mediaLibraryDisplayValuesDidChangeNotification:
- _reloadQueuedItemsIfPathBecameAvailable
- maxQueueDepth
- minQueueDepth
- setMinQueueDepth:
- _updateAudioSessionMode
- _prepareToQueuePlaybackIndex:selectionDirection:
- canChangePlaylistFeeder
- contentInvalidatedWithNewIndex:
- _feederItemForIndex:
- _nextItemIndex:repeatMode:
- _itemToFollowItemIndex:skipUnavailableContent:
- _audioSessionModeForMediaItem:
- queuePlayerFeeder:itemToFollowItem:
- queuePlayerFeeder:willRemoveItem:
- queuePlayerFeeder:willInsertItem:
- queuePlayerFeederDidUpdateQueue:queuedItems:dequeuedItems:
- queuePlayerFeederFailedToQueueAnyItems:
- updateForSoundCheckDefaultsChange
- dealloc
- init
- currentIndex
- currentItem
- observeValueForKeyPath:ofObject:change:context:
- .cxx_destruct
- player
@end
