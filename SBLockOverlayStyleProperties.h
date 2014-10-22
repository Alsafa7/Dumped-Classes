@interface SBLockOverlayStyleProperties : NSObject
{
	id _primaryColor;
	id _secondaryColor;
	id _tintColor;
	double _tintAlpha;
	double _blurRadius;
	usigned long long _style;
	long long _quality;
	id _settings;
}

+ tintAlpha
+ initWithStyle:quality:
+ _stringForStyle
+ _stringForQuality
+ _settingsForStyle
+ dealloc
+ description
+ blurRadius
+ style
+ tintColor
+ graphicsQuality
+ _configure
- tintAlpha
- initWithStyle:quality:
- _stringForStyle
- _stringForQuality
- _settingsForStyle
- dealloc
- description
- blurRadius
- style
- tintColor
- graphicsQuality
- _configure
@end
