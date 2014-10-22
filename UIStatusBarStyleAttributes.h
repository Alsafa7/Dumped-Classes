@interface UIStatusBarStyleAttributes : NSObject
{
	id _request;
	id _foregroundStyle;
}

+ dealloc
+ init
+ isTranslucent
+ heightForOrientation:
+ style
+ isDoubleHeight
+ foregroundStyle
+ legibilityStyle
+ newForegroundStyleWithHeight:
+ foregroundAlpha
+ initWithRequest:
+ cornerStyle
+ backgroundImageName
+ areTopCornersRounded
+ backgroundColorWithTintColor:
+ shouldShowInternalItemType:withScreenCapabilities:
+ heightForMetrics:
+ idiom
+ isTransparent
+ shouldUseVisualAltitude
+ glowAnimationDuration
+ supportsRasterization
- dealloc
- init
- isTranslucent
- heightForOrientation:
- style
- isDoubleHeight
- foregroundStyle
- legibilityStyle
- newForegroundStyleWithHeight:
- foregroundAlpha
- initWithRequest:
- cornerStyle
- backgroundImageName
- areTopCornersRounded
- backgroundColorWithTintColor:
- shouldShowInternalItemType:withScreenCapabilities:
- heightForMetrics:
- idiom
- isTransparent
- shouldUseVisualAltitude
- glowAnimationDuration
- supportsRasterization
@end
