@interface SKUICategoryArtworkLoader : NSObject
{
	id _artworkRequestIDs;
	id _imageDataConsumer;
	id _loader;
	id _observers;
	id _placeholderImage;
}

+ placeholderImage
+ init
+ removeObserver:
+ imageSize
+ addObserver:
+ artworkRequest:didLoadImage:
+ setImageDataConsumer:
+ imageDataConsumer
+ artworkLoader
+ cachedImageForCategory:
+ loadImageForCategory:reason:
+ .cxx_destruct
+ initWithArtworkLoader:
- placeholderImage
- init
- removeObserver:
- imageSize
- addObserver:
- artworkRequest:didLoadImage:
- setImageDataConsumer:
- imageDataConsumer
- artworkLoader
- cachedImageForCategory:
- loadImageForCategory:reason:
- .cxx_destruct
- initWithArtworkLoader:
@end
