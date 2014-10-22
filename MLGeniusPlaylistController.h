@interface MLGeniusPlaylistController : NSObject
{
	pointer _echo;
	pointer _echo_library;
	pointer _echo_cluster_playlist;
	id _sharedBlobMutableData;
}

+ dealloc
+ init
+ _debugGetTracksStartingAtTrackWithPersistentID:maxTracks:stride:
+ _canIncludeTrackInGeniusContainer:
+ _fakePopulateContainer:withSeedTrack:error:
+ _populateContainer:seedTrack:error:
+ _createClusterPlaylistWithSeedTracks:error:
+ _tracksFromClusterForPlaylistItemMax:error:
+ _sharedBlobMutableData
+ tracksFromClusterForCount:error:
+ .cxx_destruct
- dealloc
- init
- _debugGetTracksStartingAtTrackWithPersistentID:maxTracks:stride:
- _canIncludeTrackInGeniusContainer:
- _fakePopulateContainer:withSeedTrack:error:
- _populateContainer:seedTrack:error:
- _createClusterPlaylistWithSeedTracks:error:
- _tracksFromClusterForPlaylistItemMax:error:
- _sharedBlobMutableData
- tracksFromClusterForCount:error:
- .cxx_destruct
@end
