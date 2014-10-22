@interface MPMediaItemImageRequest : MPImageCacheRequest
{
	id _artworkCacheID;
	long long _artworkFormat;
	id _mediaItem;
	usigned long long _placeHolderMediaType;
	double _retrievalTime;
	BOOL _usePlaceholderAsFallback;
	BOOL _crop;
	BOOL _fillToSquareAspectRatio;
	BOOL _canUseSurfaceBackedImage;
	BOOL _prefersScreenshot;
}

+ mediaItem
+ setUsePlaceholderAsFallback:
+ placeholderImage
+ initWithMediaItem:
+ setRetrievalTimeForPlaybackTime:
+ uniqueKey
+ copyRawImageReturningError:
+ canRequestSynchronously
+ finalPlaceholderImage
+ setRetrievalTime:
+ composeUniqueKey
+ artworkCacheID
+ setArtworkCacheID:
+ artworkFormat
+ setArtworkFormat:
+ crop
+ setCrop:
+ fillToSquareAspectRatio
+ setFillToSquareAspectRatio:
+ retrievalTime
+ usePlaceholderAsFallback
+ placeHolderMediaType
+ setPlaceHolderMediaType:
+ canUseSurfaceBackedImage
+ setCanUseSurfaceBackedImage:
+ prefersScreenshot
+ setPrefersScreenshot:
+ .cxx_destruct
- mediaItem
- setUsePlaceholderAsFallback:
- placeholderImage
- initWithMediaItem:
- setRetrievalTimeForPlaybackTime:
- uniqueKey
- copyRawImageReturningError:
- canRequestSynchronously
- finalPlaceholderImage
- setRetrievalTime:
- composeUniqueKey
- artworkCacheID
- setArtworkCacheID:
- artworkFormat
- setArtworkFormat:
- crop
- setCrop:
- fillToSquareAspectRatio
- setFillToSquareAspectRatio:
- retrievalTime
- usePlaceholderAsFallback
- placeHolderMediaType
- setPlaceHolderMediaType:
- canUseSurfaceBackedImage
- setCanUseSurfaceBackedImage:
- prefersScreenshot
- setPrefersScreenshot:
- .cxx_destruct
@end
