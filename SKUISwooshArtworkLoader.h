@interface SKUISwooshArtworkLoader : NSObject
{
	id _artworkLoader;
	id _artworkRequestIDs;
	id _imageDataConsumer;
	id _outstandingRequestIDs;
	id _placeholderImage;
	id _swooshViewController;
}

+ placeholderImage
+ artworkRequest:didLoadImage:
+ initWithArtworkLoader:swoosh:
+ setImageDataConsumer:
+ cachedImageForObject:
+ loadImageForObject:URL:reason:
+ swooshViewController
+ artworkRequestIdentifierForObject:
+ setImage:forRequest:
+ loadImagesForNextPageWithReason:
+ cancelImageLoading
+ setPlaceholderColorWithColorScheme:
+ loadImageForObject:artworkRequest:reason:
+ imageDataConsumer
+ artworkLoader
+ .cxx_destruct
- placeholderImage
- artworkRequest:didLoadImage:
- initWithArtworkLoader:swoosh:
- setImageDataConsumer:
- cachedImageForObject:
- loadImageForObject:URL:reason:
- swooshViewController
- artworkRequestIdentifierForObject:
- setImage:forRequest:
- loadImagesForNextPageWithReason:
- cancelImageLoading
- setPlaceholderColorWithColorScheme:
- loadImageForObject:artworkRequest:reason:
- imageDataConsumer
- artworkLoader
- .cxx_destruct
@end
