@interface MPRadioQueueFeeder : MPQueueFeeder
{
	id _accessQueue;
	id _adObserver;
	BOOL _didFailToFetchTracks;
	id _fetchingTracksCompletionHandlersByStation;
	id _skipAdView;
	id _skipAdTrackData;
	id _startTimesByRadioTrack;
	id _station;
	id _trackHistoryQueue;
	id _trackRemovalQueue;
	id _tracks;
	BOOL _wasUsingBackgroundNetwork;
}

+ _playbackStateDidChangeNotification:
+ station
+ canSkipItem:
+ _bufferingStateDidChangeNotification:
+ playbackMode
+ itemCount
+ copyRawItemAtIndex:
+ playbackInfoAtIndex:
+ localizedAttributedPositionInPlaylistStringForItem:withRegularTextAttributes:emphasizedTextAttributes:
+ localizedPositionInPlaylistString:
+ reloadWithDataSource:keepPlayingCurrentItemIfPossible:
+ itemClass
+ hasValidItemAtIndex:
+ initialPlaybackQueueDepth
+ shouldBeginPlaybackOfItem:error:
+ canSkipToPreviousItem
+ itemTypeForIndex:
+ playerPreparesItemsForPlaybackAsynchronously
+ realRepeatType
+ controller:willChangePlaybackIndexBy:deltaType:ignoreElapsedTime:allowSkippingAds:
+ setAVController:
+ _networkTypeDidChangeNotification:
+ reloadTracksForPlayingStationAndKeepExistingTracks:
+ setStation:
+ _didFailToLoadAdNotification:
+ _songBeganResponseNotification:
+ _itemIsBannedDidChangedNotification:
+ _isExplicitTracksEnabledDidChangeNotification:
+ _radioModelDidChangeNotification:
+ _cellularNetworkingAllowedDidChangeNotification:
+ _applicationWillTerminateNotification:
+ _fetchAdditionalTracksWithCompletionHandler:
+ _updateTracksKeepingExistingTracks:keepingCurrentTrack:invalidatingContent:
+ _indexOfCurrentItem
+ _trackAtIndex:
+ reloadWithDataSource:keepPlayingCurrentItemIfPossible:startPlayback:
+ _recordTrackTimeForItem:
+ _itemDidFinishLoadingNotification:
+ _itemWillChangeNotification:
+ loadArtworkImageForItem:completionHandler:
+ _endPlaybackIfNecessaryForNetworkType
+ removeStartTimeForRadioTrack:
+ _prefetchArtworkForNextTrack
+ _cancelScheduledAds
+ _insertAdTrack:afterCurrentItemIndex:
+ _tracksWithPromotionalContentFromTracks:
+ setTracks:
+ reloadTracksForPlayingStation
+ removeAllStartTimes
+ setStartTime:forRadioTrack:
+ dealloc
+ init
+ canSeek
+ tracks
+ .cxx_destruct
- _playbackStateDidChangeNotification:
- station
- canSkipItem:
- _bufferingStateDidChangeNotification:
- playbackMode
- itemCount
- copyRawItemAtIndex:
- playbackInfoAtIndex:
- localizedAttributedPositionInPlaylistStringForItem:withRegularTextAttributes:emphasizedTextAttributes:
- localizedPositionInPlaylistString:
- reloadWithDataSource:keepPlayingCurrentItemIfPossible:
- itemClass
- hasValidItemAtIndex:
- initialPlaybackQueueDepth
- shouldBeginPlaybackOfItem:error:
- canSkipToPreviousItem
- itemTypeForIndex:
- playerPreparesItemsForPlaybackAsynchronously
- realRepeatType
- controller:willChangePlaybackIndexBy:deltaType:ignoreElapsedTime:allowSkippingAds:
- setAVController:
- _networkTypeDidChangeNotification:
- reloadTracksForPlayingStationAndKeepExistingTracks:
- setStation:
- _didFailToLoadAdNotification:
- _songBeganResponseNotification:
- _itemIsBannedDidChangedNotification:
- _isExplicitTracksEnabledDidChangeNotification:
- _radioModelDidChangeNotification:
- _cellularNetworkingAllowedDidChangeNotification:
- _applicationWillTerminateNotification:
- _fetchAdditionalTracksWithCompletionHandler:
- _updateTracksKeepingExistingTracks:keepingCurrentTrack:invalidatingContent:
- _indexOfCurrentItem
- _trackAtIndex:
- reloadWithDataSource:keepPlayingCurrentItemIfPossible:startPlayback:
- _recordTrackTimeForItem:
- _itemDidFinishLoadingNotification:
- _itemWillChangeNotification:
- loadArtworkImageForItem:completionHandler:
- _endPlaybackIfNecessaryForNetworkType
- removeStartTimeForRadioTrack:
- _prefetchArtworkForNextTrack
- _cancelScheduledAds
- _insertAdTrack:afterCurrentItemIndex:
- _tracksWithPromotionalContentFromTracks:
- setTracks:
- reloadTracksForPlayingStation
- removeAllStartTimes
- setStartTime:forRadioTrack:
- dealloc
- init
- canSeek
- tracks
- .cxx_destruct
@end
