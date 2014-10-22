@interface _UIFontCacheKey : NSObject
{
	int _traits;
	id _fontName;
	double _pointSize;
	id _textStyle;
	id _contentSizeCategory;
	id _fontDescriptor;
}

+ dealloc
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ pointSize
+ fontName
+ traits
+ setFontName:
+ textStyle
+ fontDescriptor
+ setTextStyle:
+ setTraits:
+ setPointSize:
+ setContentSizeCategory:
+ setFontDescriptor:
+ contentSizeCategory
- dealloc
- isEqual:
- hash
- description
- copyWithZone:
- pointSize
- fontName
- traits
- setFontName:
- textStyle
- fontDescriptor
- setTextStyle:
- setTraits:
- setPointSize:
- setContentSizeCategory:
- setFontDescriptor:
- contentSizeCategory
@end
