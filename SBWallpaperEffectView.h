@interface SBWallpaperEffectView : UIView
{
	long long _variant;
	id _wallpaperAverageColor;
	long long _startStyle;
	long long _endStyle;
	double _transitionFraction;
	id _blurView;
	id _grayscaleTintView;
	id _colorTintView;
	id _transitionBlurView;
	id _transitionGrayscaleTintView;
	id _transitionColorTintView;
	id _maskImageView;
	id _blurMaskingContainer;
	id _tintMaskingContainer;
	id _maskImage;
	BOOL _shouldMaskBlur;
	BOOL _shouldMaskTint;
	BOOL _accessibilityIncreaseContrastEnabled;
}

+ wallpaperDidChangeForVariant:
+ wallpaperLegibilitySettingsDidChange:forVariant:
+ initWithWallpaperVariant:
+ _accessibilityEnhanceBackgroundContrastChanged:
+ currentTransitionStateIsOpaque
+ setTransitionState:
+ prepareToAnimateToTransitionState:
+ fakeBlurView:didChangeStyle:
+ setMaskImage:masksBlur:masksTint:
+ _configureFromScratch
+ _setTransitionFraction:
+ _configureForCurrentBlurStyle
+ _updateWallpaperAverageColor:
+ _clearView:
+ _configureGrayscaleTintView:colorTintView:forStyle:
+ dealloc
+ layoutSubviews
+ description
+ setStyle:
+ _shouldAnimatePropertyWithKey:
+ _configureViews
- wallpaperDidChangeForVariant:
- wallpaperLegibilitySettingsDidChange:forVariant:
- initWithWallpaperVariant:
- _accessibilityEnhanceBackgroundContrastChanged:
- currentTransitionStateIsOpaque
- setTransitionState:
- prepareToAnimateToTransitionState:
- fakeBlurView:didChangeStyle:
- setMaskImage:masksBlur:masksTint:
- _configureFromScratch
- _setTransitionFraction:
- _configureForCurrentBlurStyle
- _updateWallpaperAverageColor:
- _clearView:
- _configureGrayscaleTintView:colorTintView:forStyle:
- dealloc
- layoutSubviews
- description
- setStyle:
- _shouldAnimatePropertyWithKey:
- _configureViews
@end
