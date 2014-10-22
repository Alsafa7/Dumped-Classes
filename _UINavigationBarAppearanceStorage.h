@interface _UINavigationBarAppearanceStorage : _UIBarAppearanceStorage
{
	id textAttributes;
	id titleVerticalAdjustmentsForBarMetrics;
	id shadowImage;
	BOOL hidesShadow;
	long long barMetrics;
	id backIndicatorImage;
	id backIndicatorTransitionMaskImage;
	id backIndicatorLeftMargin;
	BOOL reversesShadowOffset;
	id buttonAppearanceStorage;
	BOOL _deferShadowToSearchBar;
	long long defaultBarMetrics;
	long long activeBarMetrics;
	id _backdropViewGroupName;
}

+ dealloc
+ cardBackgroundImage
+ backgroundImage
+ miniBackgroundImage
+ promptBackgroundImage
+ miniPromptBackgroundImage
+ setTitleVerticalAdjustment:forBarMetrics:
+ titleVerticalAdjustmentForBarMetrics:
+ _barButtonAppearanceStorage
+ barButtonAppearanceStorage
+ representativeImageForIdiom:
+ hidesShadow
+ setHidesShadow:
+ textAttributes
+ setTextAttributes:
+ reversesShadowOffset
+ setReversesShadowOffset:
+ shadowImage
+ setShadowImage:
+ defaultBarMetrics
+ setDefaultBarMetrics:
+ activeBarMetrics
+ setActiveBarMetrics:
+ backIndicatorImage
+ setBackIndicatorImage:
+ backIndicatorTransitionMaskImage
+ setBackIndicatorTransitionMaskImage:
+ backIndicatorLeftMargin
+ setBackIndicatorLeftMargin:
+ deferShadowToSearchBar
+ setDeferShadowToSearchBar:
+ backdropViewGroupName
+ setBackdropViewGroupName:
- dealloc
- cardBackgroundImage
- backgroundImage
- miniBackgroundImage
- promptBackgroundImage
- miniPromptBackgroundImage
- setTitleVerticalAdjustment:forBarMetrics:
- titleVerticalAdjustmentForBarMetrics:
- _barButtonAppearanceStorage
- barButtonAppearanceStorage
- representativeImageForIdiom:
- hidesShadow
- setHidesShadow:
- textAttributes
- setTextAttributes:
- reversesShadowOffset
- setReversesShadowOffset:
- shadowImage
- setShadowImage:
- defaultBarMetrics
- setDefaultBarMetrics:
- activeBarMetrics
- setActiveBarMetrics:
- backIndicatorImage
- setBackIndicatorImage:
- backIndicatorTransitionMaskImage
- setBackIndicatorTransitionMaskImage:
- backIndicatorLeftMargin
- setBackIndicatorLeftMargin:
- deferShadowToSearchBar
- setDeferShadowToSearchBar:
- backdropViewGroupName
- setBackdropViewGroupName:
@end
