@interface SKUIColorScheme : NSObject
{
	id _backgroundColor;
	id _highlightedTextColor;
	id _primaryTextColor;
	id _secondaryTextColor;
}

+ setBackgroundColor:
+ initWithCoder:
+ backgroundColor
+ encodeWithCoder:
+ copyWithZone:
+ highlightedTextColor
+ setHighlightedTextColor:
+ primaryTextColor
+ initWithColorSchemeDictionary:
+ schemeStyle
+ setPrimaryTextColor:
+ secondaryTextColor
+ setSecondaryTextColor:
+ .cxx_destruct
- setBackgroundColor:
- initWithCoder:
- backgroundColor
- encodeWithCoder:
- copyWithZone:
- highlightedTextColor
- setHighlightedTextColor:
- primaryTextColor
- initWithColorSchemeDictionary:
- schemeStyle
- setPrimaryTextColor:
- secondaryTextColor
- setSecondaryTextColor:
- .cxx_destruct
@end
