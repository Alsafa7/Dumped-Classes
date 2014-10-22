@interface SBMediaController : NSObject
{
	int _manualVolumeChangeCount;
	id _nowPlayingInfo;
	float _pendingVolumeChange;
	id _volumeCommitTimer;
	BOOL _debounceVolumeRepeat;
	int _numberOfVolumeDecreasesSinceDownButtonDown;
	int _lastNowPlayingAppPID;
	BOOL _lastNowPlayingAppIsPlaying;
	BOOL _suppressHUD;
	BOOL _ringerMuted;
	BOOL _screenSharing;
	BOOL _screenSharingSetsStatusBarOverride;
	id _screenSharingStatusBarOverrideTimer;
	id _videoOutStatusBarOverrideTimer;
	id _audioDeviceController;
}

+ lastSavedRingerMutedState
+ setRingerMuted:
+ updateScreenSharingStatusBarStyleOverrideSuppressionPreference
+ endSeek:
+ changeTrack:
+ togglePlayPause
+ toggleRepeat
+ toggleShuffle
+ likeTrack
+ banTrack
+ addTrackToWishList
+ cancelVolumeEvent
+ nowPlayingApplication
+ handleVolumeEvent:
+ increaseVolume
+ decreaseVolume
+ requestAirPlayRouteDiscovery:
+ handsetRouteIsSelected
+ _calcButtonRepeatDelay
+ _changeVolumeBy:
+ _serverConnectionDied:
+ _airPlayPasswordAlertWillAppear
+ _airPlayPasswordAlertWillDisappear
+ _updateAVRoutes
+ _cancelPendingVolumeChange
+ _clearScreenSharingStatusBarStyleOverride
+ _delayedExtendSleepTimer
+ hasTrack
+ _nowPlayingInfo
+ _sendMediaCommand:
+ _clearVideoOutStatusBarStyleOverride
+ _commitVolumeChange:
+ _systemVolumeChanged:
+ _systemMuteChanged:
+ _softMuteChanged:
+ _externalScreenChanged:
+ updateScreenSharingStatusBarStyleOverride
+ isFirstTrack
+ isLastTrack
+ trackUniqueIdentifier
+ isAdvertisement
+ isRadioTrack
+ trackIsBanned
+ trackIsLiked
+ trackSupportsIsBanned
+ trackSupportsIsLiked
+ trackProhibitsSkip
+ trackIsOnWishList
+ trackSupports15SecondRewind
+ trackSupports15SecondFF
+ nowPlayingArtist
+ nowPlayingTitle
+ nowPlayingAlbum
+ trackElapsedTime
+ setCurrentTrackTime:
+ trackIsBeingPlayedByMusicApp
+ suppressHUD
+ setSuppressHUD:
+ _startVideoOutStatusBarStyleOverride
+ skipFifteenSeconds:
+ isScreenSharing
+ _nowPlayingInfoChanged
+ _nowPlayingPIDChanged
+ _nowPlayingAppIsPlayingDidChange
+ mediaControlsDestinationApp
+ _unregisterForNotifications
+ trackDuration
+ isPaused
+ repeatMode
+ play
+ beginSeek:
+ muted
+ isPlaying
+ _registerForNotifications
+ volumeControlIsAvailable
+ nameOfPickedRoute
+ audioDeviceControllerAudioRoutesChanged:
+ audioDeviceControllerMediaServerDied:
+ artwork
+ routeOtherThanHandsetIsAvailable
+ shuffleMode
+ setPlaybackSpeed:
+ setNowPlayingInfo:
+ dealloc
+ init
+ stop
+ pause
+ isRingerMuted
+ isTVOut
+ isMovie
+ volume
+ setVolume:
- lastSavedRingerMutedState
- setRingerMuted:
- updateScreenSharingStatusBarStyleOverrideSuppressionPreference
- endSeek:
- changeTrack:
- togglePlayPause
- toggleRepeat
- toggleShuffle
- likeTrack
- banTrack
- addTrackToWishList
- cancelVolumeEvent
- nowPlayingApplication
- handleVolumeEvent:
- increaseVolume
- decreaseVolume
- requestAirPlayRouteDiscovery:
- handsetRouteIsSelected
- _calcButtonRepeatDelay
- _changeVolumeBy:
- _serverConnectionDied:
- _airPlayPasswordAlertWillAppear
- _airPlayPasswordAlertWillDisappear
- _updateAVRoutes
- _cancelPendingVolumeChange
- _clearScreenSharingStatusBarStyleOverride
- _delayedExtendSleepTimer
- hasTrack
- _nowPlayingInfo
- _sendMediaCommand:
- _clearVideoOutStatusBarStyleOverride
- _commitVolumeChange:
- _systemVolumeChanged:
- _systemMuteChanged:
- _softMuteChanged:
- _externalScreenChanged:
- updateScreenSharingStatusBarStyleOverride
- isFirstTrack
- isLastTrack
- trackUniqueIdentifier
- isAdvertisement
- isRadioTrack
- trackIsBanned
- trackIsLiked
- trackSupportsIsBanned
- trackSupportsIsLiked
- trackProhibitsSkip
- trackIsOnWishList
- trackSupports15SecondRewind
- trackSupports15SecondFF
- nowPlayingArtist
- nowPlayingTitle
- nowPlayingAlbum
- trackElapsedTime
- setCurrentTrackTime:
- trackIsBeingPlayedByMusicApp
- suppressHUD
- setSuppressHUD:
- _startVideoOutStatusBarStyleOverride
- skipFifteenSeconds:
- isScreenSharing
- _nowPlayingInfoChanged
- _nowPlayingPIDChanged
- _nowPlayingAppIsPlayingDidChange
- mediaControlsDestinationApp
- _unregisterForNotifications
- trackDuration
- isPaused
- repeatMode
- play
- beginSeek:
- muted
- isPlaying
- _registerForNotifications
- volumeControlIsAvailable
- nameOfPickedRoute
- audioDeviceControllerAudioRoutesChanged:
- audioDeviceControllerMediaServerDied:
- artwork
- routeOtherThanHandsetIsAvailable
- shuffleMode
- setPlaybackSpeed:
- setNowPlayingInfo:
- dealloc
- init
- stop
- pause
- isRingerMuted
- isTVOut
- isMovie
- volume
- setVolume:
@end
