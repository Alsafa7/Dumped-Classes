@interface NSATSLineFragment : NSObject
{
	pointer _line;
	id _typesetter;
	struct _glyphRange;
	struct _characterRange;
	double _minPosition;
	double _maxPosition;
	long long _elasticCharIndex;
	double _elasticRangeWidth;
	unsigned int _hyphenGlyph;
	double _hyphenGlyphWidth;
	struct _flags;
}

+ dealloc
+ _invalidate
+ initWithTypesetter:
+ layoutForStartingGlyphAtIndex:characterIndex:minPosition:maxPosition:lineFragmentRect:
+ glyphRange
+ characterRange
+ getTypographicLineHeight:baselineOffset:leading:
+ justifyWithFactor:
+ lineWidthForType:
+ hasElasticRange
+ saveMorphedGlyphs:
+ saveWithGlyphOrigin:
+ _copyRenderingContextWithGlyphOrigin:
+ _flushCachedObjects
+ resolvedLineBreakMode:
+ _charIndexToBreakLineByWordWrappingAtIndex:lineFragmentWidth:hyphenate:
+ finalize
- dealloc
- _invalidate
- initWithTypesetter:
- layoutForStartingGlyphAtIndex:characterIndex:minPosition:maxPosition:lineFragmentRect:
- glyphRange
- characterRange
- getTypographicLineHeight:baselineOffset:leading:
- justifyWithFactor:
- lineWidthForType:
- hasElasticRange
- saveMorphedGlyphs:
- saveWithGlyphOrigin:
- _copyRenderingContextWithGlyphOrigin:
- _flushCachedObjects
- resolvedLineBreakMode:
- _charIndexToBreakLineByWordWrappingAtIndex:lineFragmentWidth:hyphenate:
- finalize
@end
