@interface _SBFVibrantSettings : NSObject
{
	long long _style;
	id _referenceColor;
	id _legibilitySettings;
	double _backgroundColorRedComponent;
	double _backgroundColorGreenComponent;
	double _backgroundColorBlueComponent;
}

+ dealloc
+ isEqual:
+ hash
+ style
+ _style
+ legibilitySettings
+ colorCompositingViewWithFrame:
+ darkTintViewWithFrame:
+ lightTintViewWithFrame:
+ backgroundColorRedComponent
+ backgroundColorGreenComponent
+ backgroundColorBlueComponent
+ initWithReferenceColor:legibilitySettings:
+ _colorDodgeColor
+ _lightStyleColorCompositingViewWithFrame:
+ _darkStyleColorCompositingViewWithFrame:
+ _lightStyleTintViewWithFrame:
+ _mixedStyleTintViewWithFrame:
+ _darkStyleTintViewWithFrame:
+ referenceColor
- dealloc
- isEqual:
- hash
- style
- _style
- legibilitySettings
- colorCompositingViewWithFrame:
- darkTintViewWithFrame:
- lightTintViewWithFrame:
- backgroundColorRedComponent
- backgroundColorGreenComponent
- backgroundColorBlueComponent
- initWithReferenceColor:legibilitySettings:
- _colorDodgeColor
- _lightStyleColorCompositingViewWithFrame:
- _darkStyleColorCompositingViewWithFrame:
- _lightStyleTintViewWithFrame:
- _mixedStyleTintViewWithFrame:
- _darkStyleTintViewWithFrame:
- referenceColor
@end
