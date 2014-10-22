@interface SKUIFlowcaseArtworkLoader : NSObject
{
	id _artworkLoader;
	id _backgroundQueue;
	id _flowcaseViewController;
	id _landscapeArtworkRequestIDs;
	id _landscapeConsumer;
	id _landscapePlaceholderImage;
	id _portraitArtworkRequestIDs;
	id _portraitConsumer;
	id _portraitPlaceholderImage;
	id _outstandingArtworkRequests;
}

+ prefetchResourcesWithReason:
+ artworkRequest:didLoadImage:
+ loadImageForItem:reason:
+ artworkLoader
+ _cutOrientationImagesWithItem:image:
+ _setLandscapeImage:portraitImage:forItem:
+ initWithArtworkLoader:flowcase:
+ cachedImageForItem:orientation:
+ placeholderImageForOrientation:
+ flowcaseViewController
+ .cxx_destruct
- prefetchResourcesWithReason:
- artworkRequest:didLoadImage:
- loadImageForItem:reason:
- artworkLoader
- _cutOrientationImagesWithItem:image:
- _setLandscapeImage:portraitImage:forItem:
- initWithArtworkLoader:flowcase:
- cachedImageForItem:orientation:
- placeholderImageForOrientation:
- flowcaseViewController
- .cxx_destruct
@end
