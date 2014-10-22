@interface MusicPlayerServerDelegate : NSObject
{
	id _applicationPlayer;
	id _firstItem;
	id _nowPlayingObserver;
	long long _playbackShuffleMode;
	id _repeatChangeHandler;
	id _repeatChangeHandlerPlayer;
	long long _repeatMode;
	id _shuffleChangeHandler;
	id _shuffleChangeHandlerPlayer;
	long long _shuffleMode;
}

+ musicPlayerServer:setNowPlayingItem:
+ nowPlayingItemForMusicPlayerServer:
+ currentMediaQueryForMusicPlayerServer:
+ currentRadioStationForMusicPlayerServer:
+ musicPlayerServer:setPlaybackSpeed:
+ playbackSpeedForMusicPlayerServer:
+ indexOfNowPlayingItemForMusicPlayerServer:
+ unshuffledIndexOfNowPlayingItemForMusicPlayerServer:
+ isNowPlayingItemFromGeniusMixForMusicPlayerServer:
+ musicPlayerServer:registerForShuffleModeChangesWithChangeHandler:
+ musicPlayerServer:registerForRepeatModeChangesWithChangeHandler:
+ playerForMusicPlayerServer:usingApplicationSpecificQueue:
+ musicPlayerServer:setFirstItem:
+ musicPlayerServer:setShuffleMode:
+ musicPlayerServer:prepareQueueWithQuery:
+ musicPlayerServer:prepareQueueWithGeniusMixPlaylist:
+ musicPlayerServer:prepareQueueWithRadioStation:
+ dealloc
+ init
+ _appDefaultsChanged
+ .cxx_destruct
- musicPlayerServer:setNowPlayingItem:
- nowPlayingItemForMusicPlayerServer:
- currentMediaQueryForMusicPlayerServer:
- currentRadioStationForMusicPlayerServer:
- musicPlayerServer:setPlaybackSpeed:
- playbackSpeedForMusicPlayerServer:
- indexOfNowPlayingItemForMusicPlayerServer:
- unshuffledIndexOfNowPlayingItemForMusicPlayerServer:
- isNowPlayingItemFromGeniusMixForMusicPlayerServer:
- musicPlayerServer:registerForShuffleModeChangesWithChangeHandler:
- musicPlayerServer:registerForRepeatModeChangesWithChangeHandler:
- playerForMusicPlayerServer:usingApplicationSpecificQueue:
- musicPlayerServer:setFirstItem:
- musicPlayerServer:setShuffleMode:
- musicPlayerServer:prepareQueueWithQuery:
- musicPlayerServer:prepareQueueWithGeniusMixPlaylist:
- musicPlayerServer:prepareQueueWithRadioStation:
- dealloc
- init
- _appDefaultsChanged
- .cxx_destruct
@end
