@interface MPRadioAVItem : MPAVItem
{
	id _cachedArtworkImage;
	id _radioTrack;
	BOOL _isHeartbeatInvalid;
	BOOL _isBanned;
	BOOL _isLiked;
	BOOL _isInWishList;
	id _station;
	id _stationHash;
	long long _stationID;
	id _stationName;
}

+ station
+ stationID
+ stationHash
+ mainTitle
+ artist
+ isExplicitTrack
+ isLiked
+ isBanned
+ radioTrack
+ artworkImageData
+ artworkMIMEType
+ chapterTimeMarkers
+ chapterTimeMarkerForTime:
+ loadAssetAndPlayerItem
+ imageCacheRequestWithSize:time:usePlaceholderAsFallback:
+ artworkTimeMarkers
+ urlTimeMarkers
+ countForQueueFeeder
+ hasDataForItemArtwork
+ isStreamable
+ supportsAddStation
+ supportsHistory
+ supportsLikeOrBan
+ supportsShare
+ supportsTrackInfo
+ imageCache
+ titlesForTime:
+ localizedAttributedPositionInPlaylistStringWithRegularTextAttributes:emphasizedTextAttributes:
+ localizedPositionInPlaylistString
+ reevaluateType
+ mediaItem
+ _cachedArtworkImage
+ _applyLoudnessInfoForVolumeNormalization
+ isRadioItem
+ _internalIsInWishlistDidChangeNotification:
+ _internalIsLikedDidChangeNotification:
+ _internalIsBannedDidChangeNotification:
+ initWithRadioTrack:
+ isInWishList
+ _sendLikeOrBanRequestWithStatus:
+ addDerivedStationForArtist:withCompletionHandler:
+ setIsBanned:
+ setIsLiked:
+ setIsInWishList:
+ setStation:
+ isHeartbeatInvalid
+ stationName
+ dealloc
+ isEqual:
+ hash
+ description
+ type
+ title
+ persistentID
+ album
+ .cxx_destruct
- station
- stationID
- stationHash
- mainTitle
- artist
- isExplicitTrack
- isLiked
- isBanned
- radioTrack
- artworkImageData
- artworkMIMEType
- chapterTimeMarkers
- chapterTimeMarkerForTime:
- loadAssetAndPlayerItem
- imageCacheRequestWithSize:time:usePlaceholderAsFallback:
- artworkTimeMarkers
- urlTimeMarkers
- countForQueueFeeder
- hasDataForItemArtwork
- isStreamable
- supportsAddStation
- supportsHistory
- supportsLikeOrBan
- supportsShare
- supportsTrackInfo
- imageCache
- titlesForTime:
- localizedAttributedPositionInPlaylistStringWithRegularTextAttributes:emphasizedTextAttributes:
- localizedPositionInPlaylistString
- reevaluateType
- mediaItem
- _cachedArtworkImage
- _applyLoudnessInfoForVolumeNormalization
- isRadioItem
- _internalIsInWishlistDidChangeNotification:
- _internalIsLikedDidChangeNotification:
- _internalIsBannedDidChangeNotification:
- initWithRadioTrack:
- isInWishList
- _sendLikeOrBanRequestWithStatus:
- addDerivedStationForArtist:withCompletionHandler:
- setIsBanned:
- setIsLiked:
- setIsInWishList:
- setStation:
- isHeartbeatInvalid
- stationName
- dealloc
- isEqual:
- hash
- description
- type
- title
- persistentID
- album
- .cxx_destruct
@end
