@interface UIKBKeyDisplayContents : NSObject
{
	BOOL _isCustomGlyph;
	BOOL _secondaryIsCustomGlyph;
	BOOL _fallbackIsCustomGlyph;
	BOOL _fillPath;
	id _displayString;
	id _displayStringImage;
	id _secondaryDisplayString;
	id _fallbackDisplayString;
	id _variantDisplayStrings;
	id _variantDisplayImages;
	long long _highlightedVariantIndex;
	long long _displayPathType;
}

+ dealloc
+ description
+ setVariantDisplayStrings:
+ displayString
+ setDisplayString:
+ setHighlightedVariantIndex:
+ highlightedVariantIndex
+ setIsCustomGlyph:
+ secondaryDisplayString
+ displayStringImage
+ isCustomGlyph
+ secondaryIsCustomGlyph
+ fallbackDisplayString
+ fallbackIsCustomGlyph
+ variantDisplayImages
+ variantDisplayStrings
+ displayPathType
+ fillPath
+ setDisplayStringImage:
+ setDisplayPathType:
+ setSecondaryDisplayString:
+ setFallbackDisplayString:
+ setSecondaryIsCustomGlyph:
+ setFallbackIsCustomGlyph:
+ setVariantDisplayImages:
+ setFillPath:
- dealloc
- description
- setVariantDisplayStrings:
- displayString
- setDisplayString:
- setHighlightedVariantIndex:
- highlightedVariantIndex
- setIsCustomGlyph:
- secondaryDisplayString
- displayStringImage
- isCustomGlyph
- secondaryIsCustomGlyph
- fallbackDisplayString
- fallbackIsCustomGlyph
- variantDisplayImages
- variantDisplayStrings
- displayPathType
- fillPath
- setDisplayStringImage:
- setDisplayPathType:
- setSecondaryDisplayString:
- setFallbackDisplayString:
- setSecondaryIsCustomGlyph:
- setFallbackIsCustomGlyph:
- setVariantDisplayImages:
- setFillPath:
@end
