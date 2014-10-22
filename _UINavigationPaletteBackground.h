@interface _UINavigationPaletteBackground : UIView
{
	id _barTintColor;
	id _shadowView;
	id _palette;
	id _bar;
	id _adaptiveBackdrop;
	struct _navbarFlags;
}

+ dealloc
+ setFrame:
+ setBounds:
+ isTranslucent
+ didMoveToSuperview
+ initWithNavigationBar:forPalette:
+ _shadowView
+ setBarStyle:
+ setBarWantsAdaptiveBackdrop:
+ barStyle
+ setTranslucent:
+ setBarTintColor:
+ _setFrame:forceUpdateBackgroundImage:
+ barTintColor
+ barWantsAdaptiveBackdrop
+ _setShadowView:
+ backdropView:willChangeToGraphicsQuality:
+ backdropView:didChangeToGraphicsQuality:
+ updateBackgroundView
+ _syncWithBarStyles
- dealloc
- setFrame:
- setBounds:
- isTranslucent
- didMoveToSuperview
- initWithNavigationBar:forPalette:
- _shadowView
- setBarStyle:
- setBarWantsAdaptiveBackdrop:
- barStyle
- setTranslucent:
- setBarTintColor:
- _setFrame:forceUpdateBackgroundImage:
- barTintColor
- barWantsAdaptiveBackdrop
- _setShadowView:
- backdropView:willChangeToGraphicsQuality:
- backdropView:didChangeToGraphicsQuality:
- updateBackgroundView
- _syncWithBarStyles
@end
