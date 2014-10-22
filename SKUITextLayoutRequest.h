@interface SKUITextLayoutRequest : NSObject
{
	double _fontSize;
	long long _fontWeight;
	long long _numberOfLines;
	id _text;
	unsigned char _textAlignment;
	double _width;
}

+ init
+ copyWithZone:
+ text
+ width
+ setWidth:
+ setText:
+ setTextAlignment:
+ textAlignment
+ setNumberOfLines:
+ numberOfLines
+ setFontSize:
+ fontSize
+ layoutClass
+ .cxx_destruct
+ fontWeight
+ setFontWeight:
- init
- copyWithZone:
- text
- width
- setWidth:
- setText:
- setTextAlignment:
- textAlignment
- setNumberOfLines:
- numberOfLines
- setFontSize:
- fontSize
- layoutClass
- .cxx_destruct
- fontWeight
- setFontWeight:
@end
