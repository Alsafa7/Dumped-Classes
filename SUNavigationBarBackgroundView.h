@interface SUNavigationBarBackgroundView : UIView
{
	id _backdropView;
	id _borderView;
	BOOL _separatorOnTop;
	BOOL translucent;
	BOOL barWantsAdaptiveBackdrop;
	long long barStyle;
	id barTintColor;
	id appearanceStorage;
	id _shadowView;
	long long _backdropStyle;
}

+ initWithFrame:
+ dealloc
+ layoutSubviews
+ isTranslucent
+ setAppearanceStorage:
+ _shadowView
+ appearanceStorage
+ updateBackgroundImage
+ setBarStyle:
+ setBarWantsAdaptiveBackdrop:
+ barStyle
+ setTranslucent:
+ setBarTintColor:
+ _setIsContainedInPopover:
+ _currentCustomBackground
+ _currentCustomBackgroundRespectOversize_legacy:
+ _setFrame:forceUpdateBackgroundImage:
+ barTintColor
+ barWantsAdaptiveBackdrop
+ _setShadowView:
+ backdropStyle
+ backdropView
+ setSeparatorOnTop:
+ setBackdropStyle:
+ separatorOnTop
- initWithFrame:
- dealloc
- layoutSubviews
- isTranslucent
- setAppearanceStorage:
- _shadowView
- appearanceStorage
- updateBackgroundImage
- setBarStyle:
- setBarWantsAdaptiveBackdrop:
- barStyle
- setTranslucent:
- setBarTintColor:
- _setIsContainedInPopover:
- _currentCustomBackground
- _currentCustomBackgroundRespectOversize_legacy:
- _setFrame:forceUpdateBackgroundImage:
- barTintColor
- barWantsAdaptiveBackdrop
- _setShadowView:
- backdropStyle
- backdropView
- setSeparatorOnTop:
- setBackdropStyle:
- separatorOnTop
@end
