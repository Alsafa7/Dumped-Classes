@interface SKUIProductPageHeaderFloatingView : UIView
{
	id _sectionControl;
	id _colorScheme;
	id _separatorView;
	id _backdropAlphaView;
	id _backdropView;
	BOOL _isPad;
}

+ layoutSubviews
+ sizeThatFits:
+ colorScheme
+ setColorScheme:
+ sectionControl
+ initWithSectionTitles:isPad:
+ selectedSectionIndex
+ setBackdropAlpha:
+ _reloadBackdropView
+ backdropAlpha
+ .cxx_destruct
- layoutSubviews
- sizeThatFits:
- colorScheme
- setColorScheme:
- sectionControl
- initWithSectionTitles:isPad:
- selectedSectionIndex
- setBackdropAlpha:
- _reloadBackdropView
- backdropAlpha
- .cxx_destruct
@end
