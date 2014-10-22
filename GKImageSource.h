@interface GKImageSource : NSObject
{
	BOOL _shouldRenderDefaultImageWithBrush;
	id _cache;
	id _name;
	id _imageBrush;
	id _defaultImage;
	id _renderedDefaultImage;
}

+ cachedImageForIdentifier:
+ initWithName:imageBrush:
+ processAndCacheImage:forIdentifier:
+ imageBrush
+ didReceiveCacheInvalidation:
+ clearCachedImageForIdentifier:
+ renderedImageWithImage:defaultSize:returnContext:
+ renderedImageWithImage:returnContext:
+ shouldRenderDefaultImageWithBrush
+ renderedImageWithImage:
+ setRenderedDefaultImage:
+ shouldUseTestImage
+ renderedTestImage
+ keyForImageIdentifier:
+ fastCachedImageForKey:
+ renderedDefaultImage
+ fastCachedImageForIdentifier:
+ validateFileSystemCache
+ cachedImageForKey:
+ processAndCacheImageDataInContext:withImage:forKey:
+ processAndCacheImage:forKey:
+ subsourceWithBrush:
+ cacheCostForImage:
+ fastCachedOrDefaultImageForForKey:
+ fastCachedOrDefaultImageForIdentifier:
+ processAndCacheImageDataInContext:withImage:forIdentifier:
+ defaultImage
+ setDefaultImage:
+ setShouldRenderDefaultImageWithBrush:
+ dealloc
+ name
+ cache
+ setCache:
- cachedImageForIdentifier:
- initWithName:imageBrush:
- processAndCacheImage:forIdentifier:
- imageBrush
- didReceiveCacheInvalidation:
- clearCachedImageForIdentifier:
- renderedImageWithImage:defaultSize:returnContext:
- renderedImageWithImage:returnContext:
- shouldRenderDefaultImageWithBrush
- renderedImageWithImage:
- setRenderedDefaultImage:
- shouldUseTestImage
- renderedTestImage
- keyForImageIdentifier:
- fastCachedImageForKey:
- renderedDefaultImage
- fastCachedImageForIdentifier:
- validateFileSystemCache
- cachedImageForKey:
- processAndCacheImageDataInContext:withImage:forKey:
- processAndCacheImage:forKey:
- subsourceWithBrush:
- cacheCostForImage:
- fastCachedOrDefaultImageForForKey:
- fastCachedOrDefaultImageForIdentifier:
- processAndCacheImageDataInContext:withImage:forIdentifier:
- defaultImage
- setDefaultImage:
- setShouldRenderDefaultImageWithBrush:
- dealloc
- name
- cache
- setCache:
@end