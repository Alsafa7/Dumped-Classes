@interface SBFWallpaperView : UIView
{
	id _wallpaperSettings;
	id _topGradientView;
	id _bottomGradientView;
	id _parallaxView;
	id _parallaxCorrectionView;
	double _parallaxScaleFactor;
	long long _variant;
	id _legibilitySettingsProvider;
	id _legibilitySettings;
	id _lastAverageColor;
	id _colorSampleTimer;
	BOOL _shouldGenerateBlurredImagesWhenVisible;
	BOOL _generatingBlurredImages;
	id _parallaxSettings;
	double _parallaxAxisAdjustmentAngle;
	BOOL _wantsRasterization;
	long long _disallowRasterizationBlockCount;
	BOOL _filtersAverageColor;
	BOOL _continuousColorSamplingEnabled;
	BOOL _wallpaperAnimationEnabled;
	BOOL _parallaxEnabled;
	BOOL _suppressesGradients;
	id _legibilityObserver;
	id _contentView;
	double _zoomFactor;
	double _contrast;
	id _internalObserver;
}

+ variant
+ initWithFrame:
+ dealloc
+ setHidden:
+ didMoveToWindow
+ layoutSubviews
+ invalidate
+ setContrast:
+ contentView
+ setContentView:
+ setContentsRect:
+ settings:changedValueForKey:
+ contrast
+ _isVisible
+ wallpaperImage
+ legibilitySettings
+ setLegibilitySettings:
+ setLegibilityObserver:
+ updateLegibilitySettingsForAverageColor:
+ setParallaxEnabled:
+ _computeAverageColor
+ _updateParallaxSettings
+ _updateRasterizationState
+ _updateLegibilitySettingsForAverageColor:notify:
+ _updateScaleFactor
+ _beginDisallowRasterizationBlock
+ _updateContentViewScale
+ _endDisallowRasterizationBlock
+ setVariant:withAnimationFactory:
+ _prepareToAnimateGradients
+ _updateGradientAlpha
+ _updateGradientImage
+ _handleVariantChange
+ _cleanupAfterAnimatingGradients
+ _setLegibilitySettings:notify:
+ contrastInRect:contrastWithinBoxes:contrastBetweenBoxes:
+ _averageColorInContentViewRect:smudgeRadius:
+ _updateGeneratingBlurs
+ _blurReplacementImage
+ _blurredImage
+ _imageForBackdropParameters:includeTint:
+ _displayedImage
+ _applyParallaxSettings
+ _handleVisibilityChange
+ _notifyBlursInvalidated
+ _startGeneratingBlurredImages
+ _stopGeneratingBlurredImages
+ _notifyGeometryInvalidated
+ contrastRequiresTreatments
+ _shouldShowTopGradient
+ _shouldShowBottomGradient
+ _topGradientAlpha
+ _bottomGradientAlpha
+ averageColorInRect:withSmudgeRadius:
+ gradientOpacityInRect:contrastWithinBoxesFactor:
+ setZoomFactor:
+ setFiltersAverageColor:
+ contrastInRect:
+ setGeneratesBlurredImages:
+ blurredImage
+ imageForBackdropParameters:includeTint:
+ setSuppressesGradients:
+ setParallaxAxisAdjustmentAngle:
+ parallaxAxisAdjustmentAngle
+ isDisplayingWallpaper:
+ parallaxScaleFactor
+ wantsRasterization
+ legibilityObserver
+ zoomFactor
+ filtersAverageColor
+ continuousColorSamplingEnabled
+ setContinuousColorSamplingEnabled:
+ wallpaperAnimationEnabled
+ setWallpaperAnimationEnabled:
+ parallaxEnabled
+ internalObserver
+ setInternalObserver:
+ suppressesGradients
+ setVariant:
- variant
- initWithFrame:
- dealloc
- setHidden:
- didMoveToWindow
- layoutSubviews
- invalidate
- setContrast:
- contentView
- setContentView:
- setContentsRect:
- settings:changedValueForKey:
- contrast
- _isVisible
- wallpaperImage
- legibilitySettings
- setLegibilitySettings:
- setLegibilityObserver:
- updateLegibilitySettingsForAverageColor:
- setParallaxEnabled:
- _computeAverageColor
- _updateParallaxSettings
- _updateRasterizationState
- _updateLegibilitySettingsForAverageColor:notify:
- _updateScaleFactor
- _beginDisallowRasterizationBlock
- _updateContentViewScale
- _endDisallowRasterizationBlock
- setVariant:withAnimationFactory:
- _prepareToAnimateGradients
- _updateGradientAlpha
- _updateGradientImage
- _handleVariantChange
- _cleanupAfterAnimatingGradients
- _setLegibilitySettings:notify:
- contrastInRect:contrastWithinBoxes:contrastBetweenBoxes:
- _averageColorInContentViewRect:smudgeRadius:
- _updateGeneratingBlurs
- _blurReplacementImage
- _blurredImage
- _imageForBackdropParameters:includeTint:
- _displayedImage
- _applyParallaxSettings
- _handleVisibilityChange
- _notifyBlursInvalidated
- _startGeneratingBlurredImages
- _stopGeneratingBlurredImages
- _notifyGeometryInvalidated
- contrastRequiresTreatments
- _shouldShowTopGradient
- _shouldShowBottomGradient
- _topGradientAlpha
- _bottomGradientAlpha
- averageColorInRect:withSmudgeRadius:
- gradientOpacityInRect:contrastWithinBoxesFactor:
- setZoomFactor:
- setFiltersAverageColor:
- contrastInRect:
- setGeneratesBlurredImages:
- blurredImage
- imageForBackdropParameters:includeTint:
- setSuppressesGradients:
- setParallaxAxisAdjustmentAngle:
- parallaxAxisAdjustmentAngle
- isDisplayingWallpaper:
- parallaxScaleFactor
- wantsRasterization
- legibilityObserver
- zoomFactor
- filtersAverageColor
- continuousColorSamplingEnabled
- setContinuousColorSamplingEnabled:
- wallpaperAnimationEnabled
- setWallpaperAnimationEnabled:
- parallaxEnabled
- internalObserver
- setInternalObserver:
- suppressesGradients
- setVariant:
@end
