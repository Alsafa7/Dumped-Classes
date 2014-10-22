@interface UIStatusBarStyleRequest : NSObject
{
	BOOL _legacy;
	long long _style;
	long long _legibilityStyle;
	id _foregroundColor;
	id _overrideHeight;
}

+ dealloc
+ init
+ isEqual:
+ hash
+ isTranslucent
+ copyWithZone:
+ style
+ isDoubleHeight
+ legibilityStyle
+ foregroundColor
+ overrideHeight
+ isLegacy
+ initWithStyle:legacy:legibilityStyle:foregroundColor:
+ initWithStyle:legacy:legibilityStyle:foregroundColor:overrideHeight:
+ mutableCopyWithZone:
+ _copyWithZone:class:
- dealloc
- init
- isEqual:
- hash
- isTranslucent
- copyWithZone:
- style
- isDoubleHeight
- legibilityStyle
- foregroundColor
- overrideHeight
- isLegacy
- initWithStyle:legacy:legibilityStyle:foregroundColor:
- initWithStyle:legacy:legibilityStyle:foregroundColor:overrideHeight:
- mutableCopyWithZone:
- _copyWithZone:class:
@end
