@interface UIKBRenderFactory : NSObject
{
	id _renderConfig;
	id _segmentTraits;
	double _rivenSizeFactor;
	BOOL _lightweightFactory;
	double _scale;
}

+ dealloc
+ scale
+ setScale:
+ renderConfig
+ backgroundTraitsForKeyplane:
+ traitsHashStringForKey:withGeometry:controlOpacities:
+ _traitsForKey:onKeyplane:
+ lightKeycapsFontName
+ _customizeTraits:forPopupForKey:withRenderConfig:keycapsFontName:
+ translucentGapWidth
+ lightTextFontName
+ defaultKeyBackgroundColorName
+ lightPadKeycapsFontName
+ modifyTraitsForDetachedInputSwitcher:withKey:
+ thinKeycapsFontName
+ keyCornerRadius
+ RivenFactor:
+ traitsForKey:onKeyplane:
+ displayContentsForKey:
+ controlKeyBackgroundColorName
+ removeAllLayoutSegments
+ useBlueThemingForKey:
+ addLayoutSegment:
+ multitapCompleteKeyImageName
+ muttitapReverseKeyImageName
+ setupLayoutSegments
+ scaleTraits:
+ shiftKeyImageName
+ shiftOnKeyImageName
+ initWithRenderConfig:skipLayoutSegments:
+ setLightweightFactory:
+ lowQualityTraits:
+ segmentTraits
+ lightweightFactory
+ deleteKeyImageName
+ skinnyKeyThreshold
+ keyImageNameWithSkinnyVariation:
+ globalEmojiKeyImageName
+ globalKeyImageName
+ dismissKeyImageName
+ handwritingMoreKeyImageName
+ dictationKeyImageName
+ shouldClearBaseDisplayStringForVariants
+ thinTextFontName
+ rivenSizeFactor
+ setRivenSizeFactor:
- dealloc
- scale
- setScale:
- renderConfig
- backgroundTraitsForKeyplane:
- traitsHashStringForKey:withGeometry:controlOpacities:
- _traitsForKey:onKeyplane:
- lightKeycapsFontName
- _customizeTraits:forPopupForKey:withRenderConfig:keycapsFontName:
- translucentGapWidth
- lightTextFontName
- defaultKeyBackgroundColorName
- lightPadKeycapsFontName
- modifyTraitsForDetachedInputSwitcher:withKey:
- thinKeycapsFontName
- keyCornerRadius
- RivenFactor:
- traitsForKey:onKeyplane:
- displayContentsForKey:
- controlKeyBackgroundColorName
- removeAllLayoutSegments
- useBlueThemingForKey:
- addLayoutSegment:
- multitapCompleteKeyImageName
- muttitapReverseKeyImageName
- setupLayoutSegments
- scaleTraits:
- shiftKeyImageName
- shiftOnKeyImageName
- initWithRenderConfig:skipLayoutSegments:
- setLightweightFactory:
- lowQualityTraits:
- segmentTraits
- lightweightFactory
- deleteKeyImageName
- skinnyKeyThreshold
- keyImageNameWithSkinnyVariation:
- globalEmojiKeyImageName
- globalKeyImageName
- dismissKeyImageName
- handwritingMoreKeyImageName
- dictationKeyImageName
- shouldClearBaseDisplayStringForVariants
- thinTextFontName
- rivenSizeFactor
- setRivenSizeFactor:
@end