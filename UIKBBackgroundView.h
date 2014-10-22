@interface UIKBBackgroundView : UIKBSplitImageView
{
	id _keyplane;
	int _visualStyle;
	id _geometryCacheKey;
	struct _splitLeftRect;
	struct _splitLeftCacheRect;
	struct _splitRightRect;
	struct _splitRightCacheRect;
	int _topCorners;
	BOOL _isSplit;
	BOOL _centerFilled;
	BOOL _hasCandidateKeys;
	id _renderConfig;
}

+ initWithFrame:
+ dealloc
+ drawRect:
+ layoutSubviews
+ renderConfig
+ setRenderConfig:
+ displayLayer:
+ setGeometryCacheKey:
+ cacheKey
+ cachedWidth
+ cacheKeysForRenderFlags:
+ drawContentsOfRenderers:
+ cacheDeferable
+ keepNonPersistent
+ refreshStyleForKeyplane:
+ geometryCacheKey
- initWithFrame:
- dealloc
- drawRect:
- layoutSubviews
- renderConfig
- setRenderConfig:
- displayLayer:
- setGeometryCacheKey:
- cacheKey
- cachedWidth
- cacheKeysForRenderFlags:
- drawContentsOfRenderers:
- cacheDeferable
- keepNonPersistent
- refreshStyleForKeyplane:
- geometryCacheKey
@end
