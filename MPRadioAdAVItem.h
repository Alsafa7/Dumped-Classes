@interface MPRadioAdAVItem : MPAVAdItem
{
	id _adTrack;
	id _artworkImageData;
	id _artworkMIMEType;
	id _station;
	id _stationHash;
	long long _stationID;
	id _stationName;
}

+ station
+ stationID
+ stationHash
+ mainTitle
+ artworkImageData
+ artworkMIMEType
+ imageCacheRequestWithSize:time:usePlaceholderAsFallback:
+ supportsSkip
+ imageCache
+ titlesForTime:
+ reevaluateType
+ initWithAdTrack:
+ adTrack
+ _applyLoudnessInfo
+ setStation:
+ stationName
+ setArtworkImageData:mimeType:
+ type
+ title
+ album
+ .cxx_destruct
- station
- stationID
- stationHash
- mainTitle
- artworkImageData
- artworkMIMEType
- imageCacheRequestWithSize:time:usePlaceholderAsFallback:
- supportsSkip
- imageCache
- titlesForTime:
- reevaluateType
- initWithAdTrack:
- adTrack
- _applyLoudnessInfo
- setStation:
- stationName
- setArtworkImageData:mimeType:
- type
- title
- album
- .cxx_destruct
@end
