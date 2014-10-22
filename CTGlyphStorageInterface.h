@interface CTGlyphStorageInterface : NSObject
{
	long long _glyphCount;
	pointer _glyphs;
	pointer _advances;
	pointer _props;
	pointer _stringIndexes;
	pointer _absorbedCounts;
}

+ createCopy:
+ getCustomAdvance:forIndex:
+ setGlyphID:forIndex:
+ setAdvance:forIndex:
+ setProps:forIndex:
+ setAbsorbedCount:forIndex:
+ setStringIndex:forIndex:
+ swapGlyph:withIndex:
+ moveGlyphsTo:from:
+ insertGlyphs:
+ initGlyphStack:
+ pushGlyph:
+ popGlyph:
+ disposeGlyphStack
- createCopy:
- getCustomAdvance:forIndex:
- setGlyphID:forIndex:
- setAdvance:forIndex:
- setProps:forIndex:
- setAbsorbedCount:forIndex:
- setStringIndex:forIndex:
- swapGlyph:withIndex:
- moveGlyphsTo:from:
- insertGlyphs:
- initGlyphStack:
- pushGlyph:
- popGlyph:
- disposeGlyphStack
@end
