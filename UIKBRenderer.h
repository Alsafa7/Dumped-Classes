@interface UIKBRenderer : NSObject
{
	pointer _cachingContext;
	id _cachingContextCompletion;
	BOOL _opaque;
	pointer _ctx;
	double _scale;
	long long _renderFlags;
	id _cacheKey;
	id _renderedImage;
	struct _size;
}

+ dealloc
+ size
+ scale
+ context
+ renderKeyContents:withTraits:
+ opaque
+ renderBackgroundTraits:
+ cacheKey
+ loadCachedImageForHashString:
+ renderedImage
+ contextData
+ setCacheKey:
+ renderFlags
+ renderEdgeEffect:withTraits:
+ renderShadowEffect:withTraits:
+ initWithContext:withSize:withScale:opaque:renderFlags:
+ ensureContext
+ addPathForTraits:displayRect:
+ addRoundRect:radius:corners:
+ addPathForRenderGeometry:
+ _drawLinearGradient:inRect:
+ _contextForCacheImageSize:
+ _completeCacheImageWithTraitsIfNecessary:
+ renderBackgroundTraits:allowCaching:
+ renderKeyImageContents:withTraits:
+ renderKeyStringContents:withTraits:
+ renderKeyPathContents:withTraits:
+ _renderVariantsFromKeyContents:withTraits:
+ _drawKeyImage:inRect:withStyle:
+ _drawSingleSymbol:inRect:withStyle:
+ _drawKeyString:inRect:withStyle:
+ _thickShiftGlyphPath
+ _thinShiftGlyphPath
+ _deleteGlyphPaths
+ drawPath:weight:transform:color:fill:
+ drawShiftPath:weight:transform:color:
+ addPathForFlickPopupGeometries:
+ addPathForFlickGeometry:
+ addPathForSplitGeometry:
+ pathForRenderGeometry:
+ pathForFlickGeometry:
+ pathForFlickPopupGeometries:
+ pathForSplitGeometry:
- dealloc
- size
- scale
- context
- renderKeyContents:withTraits:
- opaque
- renderBackgroundTraits:
- cacheKey
- loadCachedImageForHashString:
- renderedImage
- contextData
- setCacheKey:
- renderFlags
- renderEdgeEffect:withTraits:
- renderShadowEffect:withTraits:
- initWithContext:withSize:withScale:opaque:renderFlags:
- ensureContext
- addPathForTraits:displayRect:
- addRoundRect:radius:corners:
- addPathForRenderGeometry:
- _drawLinearGradient:inRect:
- _contextForCacheImageSize:
- _completeCacheImageWithTraitsIfNecessary:
- renderBackgroundTraits:allowCaching:
- renderKeyImageContents:withTraits:
- renderKeyStringContents:withTraits:
- renderKeyPathContents:withTraits:
- _renderVariantsFromKeyContents:withTraits:
- _drawKeyImage:inRect:withStyle:
- _drawSingleSymbol:inRect:withStyle:
- _drawKeyString:inRect:withStyle:
- _thickShiftGlyphPath
- _thinShiftGlyphPath
- _deleteGlyphPaths
- drawPath:weight:transform:color:fill:
- drawShiftPath:weight:transform:color:
- addPathForFlickPopupGeometries:
- addPathForFlickGeometry:
- addPathForSplitGeometry:
- pathForRenderGeometry:
- pathForFlickGeometry:
- pathForFlickPopupGeometries:
- pathForSplitGeometry:
@end
