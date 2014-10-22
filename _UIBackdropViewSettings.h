@interface _UIBackdropViewSettings : NSObject
{
	BOOL _explicitlySetGraphicsQuality;
	BOOL _requiresColorStatistics;
	BOOL _highlighted;
	BOOL _selected;
	BOOL _enabled;
	BOOL _backdropVisible;
	BOOL _zoomsBack;
	BOOL _designMode;
	BOOL _usesBackdropEffectView;
	BOOL _usesGrayscaleTintView;
	BOOL _usesColorTintView;
	BOOL _usesContentView;
	BOOL _appliesTintAndBlurSettings;
	id _combinedTintColor;
	id _backdrop;
	long long _style;
	long long _graphicsQuality;
	id _colorSettings;
	long long _renderingHint;
	long long _stackingLevel;
	double _grayscaleTintLevel;
	double _grayscaleTintAlpha;
	double _grayscaleTintMaskAlpha;
	id _grayscaleTintMaskImage;
	id _colorTint;
	double _colorTintAlpha;
	double _colorTintMaskAlpha;
	id _colorTintMaskImage;
	double _blurRadius;
	id _blurQuality;
	long long _blurHardEdges;
	double _saturationDeltaFactor;
	double _filterMaskAlpha;
	id _filterMaskImage;
	id _legibleColor;
	double _scale;
	double _statisticsInterval;
	usigned long long _version;
	long long _suppressSettingsDidChange;
	pointer _runLoopObserver;
}

+ dealloc
+ init
+ description
+ setStyle:
+ scale
+ grayscaleTintMaskImage
+ colorTintMaskImage
+ filterMaskImage
+ blurRadius
+ saturationDeltaFactor
+ usesBackdropEffectView
+ style
+ setValuesFromModel:
+ requiresColorStatistics
+ colorSettings
+ computeOutputSettingsUsingModel:
+ usesGrayscaleTintView
+ grayscaleTintAlpha
+ grayscaleTintLevel
+ usesColorTintView
+ colorTint
+ colorTintAlpha
+ setUsesGrayscaleTintView:
+ setUsesColorTintView:
+ setBlurRadius:
+ setSaturationDeltaFactor:
+ isEnabled
+ setEnabled:
+ setScale:
+ setHighlighted:
+ isHighlighted
+ setBlurHardEdges:
+ setColorTint:
+ isSelected
+ setSelected:
+ graphicsQuality
+ setDefaultValues
+ addKeyPathObserver:
+ removeKeyPathObserver:
+ initWithDefaultValues
+ restoreDefaultValues
+ setRequiresColorStatistics:
+ setBackdropVisible:
+ setGrayscaleTintLevel:
+ setGrayscaleTintAlpha:
+ setGrayscaleTintMaskAlpha:
+ setGrayscaleTintMaskImage:
+ setColorTintAlpha:
+ setColorTintMaskAlpha:
+ setColorTintMaskImage:
+ setFilterMaskAlpha:
+ setFilterMaskImage:
+ setUsesBackdropEffectView:
+ setLegibleColor:
+ renderingHint
+ stackingLevel
+ setGraphicsQuality:
+ initWithDefaultValuesForGraphicsQuality:
+ incrementSuppressSettingsDidChange
+ setExplicitlySetGraphicsQuality:
+ decrementSuppressSettingsDidChange
+ setVersion:
+ setUsesContentView:
+ setStatisticsInterval:
+ setAppliesTintAndBlurSettings:
+ setStackingLevel:
+ setBlurQuality:
+ setZoomsBack:
+ scheduleSettingsDidChangeIfNeeded
+ clearRunLoopObserver
+ appliesTintAndBlurSettings
+ isBackdropVisible
+ blurQuality
+ blurHardEdges
+ colorTintMaskAlpha
+ combinedTintColor
+ setCombinedTintColor:
+ explicitlySetGraphicsQuality
+ filterMaskAlpha
+ grayscaleTintMaskAlpha
+ legibleColor
+ setRenderingHint:
+ statisticsInterval
+ usesContentView
+ version
+ zoomsBack
+ suppressSettingsDidChange
+ setSuppressSettingsDidChange:
+ runLoopObserver
+ setRunLoopObserver:
+ backdrop
+ setBlursWithHardEdges:
+ setStackinglevel:
+ blursWithHardEdges
+ setBackdrop:
+ setColorSettings:
+ designMode
+ setDesignMode:
- dealloc
- init
- description
- setStyle:
- scale
- grayscaleTintMaskImage
- colorTintMaskImage
- filterMaskImage
- blurRadius
- saturationDeltaFactor
- usesBackdropEffectView
- style
- setValuesFromModel:
- requiresColorStatistics
- colorSettings
- computeOutputSettingsUsingModel:
- usesGrayscaleTintView
- grayscaleTintAlpha
- grayscaleTintLevel
- usesColorTintView
- colorTint
- colorTintAlpha
- setUsesGrayscaleTintView:
- setUsesColorTintView:
- setBlurRadius:
- setSaturationDeltaFactor:
- isEnabled
- setEnabled:
- setScale:
- setHighlighted:
- isHighlighted
- setBlurHardEdges:
- setColorTint:
- isSelected
- setSelected:
- graphicsQuality
- setDefaultValues
- addKeyPathObserver:
- removeKeyPathObserver:
- initWithDefaultValues
- restoreDefaultValues
- setRequiresColorStatistics:
- setBackdropVisible:
- setGrayscaleTintLevel:
- setGrayscaleTintAlpha:
- setGrayscaleTintMaskAlpha:
- setGrayscaleTintMaskImage:
- setColorTintAlpha:
- setColorTintMaskAlpha:
- setColorTintMaskImage:
- setFilterMaskAlpha:
- setFilterMaskImage:
- setUsesBackdropEffectView:
- setLegibleColor:
- renderingHint
- stackingLevel
- setGraphicsQuality:
- initWithDefaultValuesForGraphicsQuality:
- incrementSuppressSettingsDidChange
- setExplicitlySetGraphicsQuality:
- decrementSuppressSettingsDidChange
- setVersion:
- setUsesContentView:
- setStatisticsInterval:
- setAppliesTintAndBlurSettings:
- setStackingLevel:
- setBlurQuality:
- setZoomsBack:
- scheduleSettingsDidChangeIfNeeded
- clearRunLoopObserver
- appliesTintAndBlurSettings
- isBackdropVisible
- blurQuality
- blurHardEdges
- colorTintMaskAlpha
- combinedTintColor
- setCombinedTintColor:
- explicitlySetGraphicsQuality
- filterMaskAlpha
- grayscaleTintMaskAlpha
- legibleColor
- setRenderingHint:
- statisticsInterval
- usesContentView
- version
- zoomsBack
- suppressSettingsDidChange
- setSuppressSettingsDidChange:
- runLoopObserver
- setRunLoopObserver:
- backdrop
- setBlursWithHardEdges:
- setStackinglevel:
- blursWithHardEdges
- setBackdrop:
- setColorSettings:
- designMode
- setDesignMode:
@end