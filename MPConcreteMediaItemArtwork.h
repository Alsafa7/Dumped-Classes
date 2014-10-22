@interface MPConcreteMediaItemArtwork : MPMediaItemArtwork
{
	usigned long long _itemPersistentID;
	id _library;
	struct _bounds;
	struct _cropRect;
}

+ imageWithSize:atPlaybackTime:
+ imageDataWithSize:atPlaybackTime:
+ hasArtworkAvailable
+ albumImageWithSize:
+ albumImageDataWithSize:
+ imageCropRect
+ _initWithItem:
+ _imageWithFormat:artworkCacheID:canUseSurfaceBackedImage:scaleToSize:
+ _imageForSize:artworkCacheID:playbackTime:scaleToSize:
+ _cacheIDAtPlaybackTime:
+ _imageDataForSize:playbackTime:
+ shouldAsynchrounouslyLoadArtworkForItemWithIdentifier:artworkFormat:artworkCacheID:
+ shouldAsynchrounouslyLoadArtworkForItemWithIdentifier:artworkSize:artworkCacheID:
+ imageWithFormat:artworkCacheID:canUseSurfaceBackedImage:
+ imageWithSize:artworkCacheID:
+ bounds
+ initWithCoder:
+ encodeWithCoder:
+ .cxx_destruct
- imageWithSize:atPlaybackTime:
- imageDataWithSize:atPlaybackTime:
- hasArtworkAvailable
- albumImageWithSize:
- albumImageDataWithSize:
- imageCropRect
- _initWithItem:
- _imageWithFormat:artworkCacheID:canUseSurfaceBackedImage:scaleToSize:
- _imageForSize:artworkCacheID:playbackTime:scaleToSize:
- _cacheIDAtPlaybackTime:
- _imageDataForSize:playbackTime:
- shouldAsynchrounouslyLoadArtworkForItemWithIdentifier:artworkFormat:artworkCacheID:
- shouldAsynchrounouslyLoadArtworkForItemWithIdentifier:artworkSize:artworkCacheID:
- imageWithFormat:artworkCacheID:canUseSurfaceBackedImage:
- imageWithSize:artworkCacheID:
- bounds
- initWithCoder:
- encodeWithCoder:
- .cxx_destruct
@end
