@interface UIImageView : UIView
{
	id _storage;
	id _decompressingImage;
	id _decompressingHighlightedImage;
	struct _cachedEdgeInsetsForEffects;
	BOOL _edgeInsetsForEffectsAreValid;
	BOOL __animatesContents;
	struct _edgeInsetsForEffects;
}

+ activatorListenerImageIsThreaded
+ setActivatorListenerImageIsThreaded:
+ activatorListenerName
+ setActivatorListenerName:
+ applyClassicZoomSettings
+ _cachedPretiledImageForImage:
+ _clearPretiledImageCacheForImage:
+ _updatePretiledImageCacheForImage:
+ _recomputePretilingState
+ _applySettingsForLegibilityStyle:
+ defaultAccessibilityTraits
+ isAccessibilityElementByDefault
+ isElementAccessibilityExposedToInterfaceBuilder
+ encodeRestorableStateWithCoder:
+ decodeRestorableStateWithCoder:
+ useBlockyMagnificationInClassic
+ initWithFrame:
+ dealloc
+ drawRect:
+ setImage:
+ setBackgroundColor:
+ initWithCoder:
+ encodeWithCoder:
+ _intrinsicSizeWithinSize:
+ setFrame:
+ layoutSubviews
+ setBounds:
+ sizeThatFits:
+ initWithImage:
+ setAnimationDuration:
+ alignmentRectInsets
+ image
+ imageRef
+ _shouldAnimatePropertyWithKey:
+ _canDrawContent
+ _generateBackdropMaskImage
+ tintColorDidChange
+ setAnimationRepeatCount:
+ _setDefaultRenderingMode:
+ _templateImageRenderingEffects
+ _setTemplateImageRenderingEffects:
+ setHighlighted:
+ isHighlighted
+ animationImages
+ highlightedAnimationImages
+ highlightedImage
+ setHighlightedImage:
+ _defaultRenderingMode
+ _masksTemplateImages
+ _shouldDrawImage:
+ _needsImageEffectsForImage:
+ _effectiveTintColorWithImage:
+ _needsImageEffectsForImage:suppressColorizing:
+ _drawImageEffectsForImage:inRect:
+ isAnimating
+ _setImageViewContents:
+ stopAnimating
+ _animatesContents
+ _updateState
+ _updateTemplateProperties
+ _setViewGeometry:forMetric:
+ _edgeInsetsForEffects
+ _activeImage
+ _shouldTreatImageAsTemplate:
+ _updateMasking
+ _templateSettingsDidChange
+ startAnimating
+ initWithImage:highlightedImage:
+ setAnimationImages:
+ setHighlightedAnimationImages:
+ animationDuration
+ animationRepeatCount
+ _setMasksTemplateImages:
+ drawMode
+ setDrawMode:
+ setCGImageRef:
+ setAnimating:
+ _edgeInsetsForEffectsAreValid
+ _setEdgeInsetsForEffectsAreValid:
+ _setAnimatesContents:
- activatorListenerImageIsThreaded
- setActivatorListenerImageIsThreaded:
- activatorListenerName
- setActivatorListenerName:
- applyClassicZoomSettings
- _cachedPretiledImageForImage:
- _clearPretiledImageCacheForImage:
- _updatePretiledImageCacheForImage:
- _recomputePretilingState
- _applySettingsForLegibilityStyle:
- defaultAccessibilityTraits
- isAccessibilityElementByDefault
- isElementAccessibilityExposedToInterfaceBuilder
- encodeRestorableStateWithCoder:
- decodeRestorableStateWithCoder:
- useBlockyMagnificationInClassic
- initWithFrame:
- dealloc
- drawRect:
- setImage:
- setBackgroundColor:
- initWithCoder:
- encodeWithCoder:
- _intrinsicSizeWithinSize:
- setFrame:
- layoutSubviews
- setBounds:
- sizeThatFits:
- initWithImage:
- setAnimationDuration:
- alignmentRectInsets
- image
- imageRef
- _shouldAnimatePropertyWithKey:
- _canDrawContent
- _generateBackdropMaskImage
- tintColorDidChange
- setAnimationRepeatCount:
- _setDefaultRenderingMode:
- _templateImageRenderingEffects
- _setTemplateImageRenderingEffects:
- setHighlighted:
- isHighlighted
- animationImages
- highlightedAnimationImages
- highlightedImage
- setHighlightedImage:
- _defaultRenderingMode
- _masksTemplateImages
- _shouldDrawImage:
- _needsImageEffectsForImage:
- _effectiveTintColorWithImage:
- _needsImageEffectsForImage:suppressColorizing:
- _drawImageEffectsForImage:inRect:
- isAnimating
- _setImageViewContents:
- stopAnimating
- _animatesContents
- _updateState
- _updateTemplateProperties
- _setViewGeometry:forMetric:
- _edgeInsetsForEffects
- _activeImage
- _shouldTreatImageAsTemplate:
- _updateMasking
- _templateSettingsDidChange
- startAnimating
- initWithImage:highlightedImage:
- setAnimationImages:
- setHighlightedAnimationImages:
- animationDuration
- animationRepeatCount
- _setMasksTemplateImages:
- drawMode
- setDrawMode:
- setCGImageRef:
- setAnimating:
- _edgeInsetsForEffectsAreValid
- _setEdgeInsetsForEffectsAreValid:
- _setAnimatesContents:
@end