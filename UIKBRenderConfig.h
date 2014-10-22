@interface UIKBRenderConfig : NSObject
{
	BOOL _lightKeyboard;
	double _blurRadius;
	double _blurSaturation;
	double _keycapOpacity;
	double _keyborderOpacity;
}

+ isEqual:
+ description
+ blurRadius
+ setBlurRadius:
+ setBlurSaturation:
+ setLightKeyboard:
+ setKeycapOpacity:
+ setKeyborderOpacity:
+ keycapOpacity
+ whiteText
+ lightKeyboard
+ keyborderOpacity
+ backdropStyle
+ blurSaturation
- isEqual:
- description
- blurRadius
- setBlurRadius:
- setBlurSaturation:
- setLightKeyboard:
- setKeycapOpacity:
- setKeyborderOpacity:
- keycapOpacity
- whiteText
- lightKeyboard
- keyborderOpacity
- backdropStyle
- blurSaturation
@end
