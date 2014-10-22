@interface SKUIBrickSwooshArtworkLoader : SKUISwooshArtworkLoader
{
	long long _artworkSize;
}

+ initWithArtworkLoader:swoosh:
+ loadImageForBrick:reason:
+ setImage:forRequest:
+ cachedImageForBrick:
+ loadImagesForNextPageWithReason:
- initWithArtworkLoader:swoosh:
- loadImageForBrick:reason:
- setImage:forRequest:
- cachedImageForBrick:
- loadImagesForNextPageWithReason:
@end
