@interface _UILegibilityLabel : _UILegibilityView
{
	BOOL _usesSecondaryColor;
	id _string;
	id _font;
}

+ dealloc
+ sizeThatFits:
+ string
+ setFont:
+ font
+ baselineOffset
+ setString:
+ updateImage
+ usesSecondaryColor
+ initWithSettings:strength:string:font:options:
+ initWithSettings:strength:string:font:
- dealloc
- sizeThatFits:
- string
- setFont:
- font
- baselineOffset
- setString:
- updateImage
- usesSecondaryColor
- initWithSettings:strength:string:font:options:
- initWithSettings:strength:string:font:
@end
