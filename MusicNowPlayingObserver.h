@interface MusicNowPlayingObserver : NSObject
{
	id _avPlayer;
	id _queue;
	id _statusBarQueue;
	BOOL _waitingForItemArtwork;
	id _mediaItemCoalescedUpdateDateAccessedTimers;
}

+ _playbackStateDidChangeNotification:
+ _itemDidChangeNotification:
+ _rateDidChangeNotification:
+ _timeDidJumpNotification:
+ _isLikedDidChangeNotification:
+ _mediaLibraryDisplayValuesDidChangeNotification:
+ _radioModelDidChangeNotification:
+ dealloc
+ initWithMusicAVPlayer:
+ _contentsDidChangeNotification:
+ _crossedTimeMarkerNotification:
+ _repeatTypeDidChangeNotification:
+ _avItemTitlesDidChangeNotification:
+ _isInWishListDidChangeNotification:
+ _isBannedDidChangeNotification:
+ _radioArtworkDidLoadNotification:
+ _mediaArtworkDidLoadNotification:
+ _postNowPlayingInfo
+ _coalescedUpdateLastUsedDateForCurrentItem
+ _postNowPlayingInfoForItem:
+ _MPNowPlayingRepeatModeForMPRepeatType:
+ _MPNowPlayingShuffleModeForMPShuffleType:
+ .cxx_destruct
- _playbackStateDidChangeNotification:
- _itemDidChangeNotification:
- _rateDidChangeNotification:
- _timeDidJumpNotification:
- _isLikedDidChangeNotification:
- _mediaLibraryDisplayValuesDidChangeNotification:
- _radioModelDidChangeNotification:
- dealloc
- initWithMusicAVPlayer:
- _contentsDidChangeNotification:
- _crossedTimeMarkerNotification:
- _repeatTypeDidChangeNotification:
- _avItemTitlesDidChangeNotification:
- _isInWishListDidChangeNotification:
- _isBannedDidChangeNotification:
- _radioArtworkDidLoadNotification:
- _mediaArtworkDidLoadNotification:
- _postNowPlayingInfo
- _coalescedUpdateLastUsedDateForCurrentItem
- _postNowPlayingInfoForItem:
- _MPNowPlayingRepeatModeForMPRepeatType:
- _MPNowPlayingShuffleModeForMPShuffleType:
- .cxx_destruct
@end
