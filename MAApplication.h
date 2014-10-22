@interface MAApplication : UIApplication
{
	pointer _commandObserver;
}

+ _remoteActionNotificationReceived:
+ _radioItemWithTrackID:stationHash:
+ _handleTiltRemoteCommand:forRadioItem:
+ _handlePrivateMediaRemoteCommand:
+ _handleAlbumSeek:
+ _handlePlaylistSeek:
+ _handleMediaRemoteCommand:
+ _updateWishListForItem:withAction:
+ _radioItemWithID:
+ _radioStationWithHash:
+ _radioStationWithID:
+ dealloc
+ init
+ sendEvent:
+ motionEnded:withEvent:
+ remoteControlReceivedWithEvent:
- _remoteActionNotificationReceived:
- _radioItemWithTrackID:stationHash:
- _handleTiltRemoteCommand:forRadioItem:
- _handlePrivateMediaRemoteCommand:
- _handleAlbumSeek:
- _handlePlaylistSeek:
- _handleMediaRemoteCommand:
- _updateWishListForItem:withAction:
- _radioItemWithID:
- _radioStationWithHash:
- _radioStationWithID:
- dealloc
- init
- sendEvent:
- motionEnded:withEvent:
- remoteControlReceivedWithEvent:
@end
