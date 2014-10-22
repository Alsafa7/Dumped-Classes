@interface NSATSGlyphStorage : CTGlyphStorageInterface
{
	pointer _glyphStorage;
	pointer _masterRuns;
	id _typesetter;
	pointer _runs;
	long long _numRuns;
	long long _runBufferSize;
	struct _glyphRange;
	struct _characterRange;
	long long _bufferSize;
	id _parent;
	pointer _children;
	long long _paraEndElasticCharIndex;
	double _paraEndElasticCharWidth;
	id _textString;
	pointer _stack;
	_lastElasticRun;
	long long _lastElasticRunLocation;
	long long _totalAbsorbedCount;
	struct _gFlags;
}

+ release
+ dealloc
+ _tryRetain
+ _isDeallocating
+ _invalidate
+ typesetter
+ initWithTypesetter:
+ setGlyphRange:characterRange:
+ createCTTypesetter
+ _flushCachedObjects
+ childGlyphStorageWithCharacterRange:
+ _createEllipsisRunWithStringRange:attributes:
+ _resolvePositionalStakeGlyphsForLineFragment:lineFragmentRect:minPosition:maxPosition:maxLineFragmentWidth:breakHint:
+ _collectElasticRangeSurroundingCharacterAtIndex:minimumCharacterIndex:
+ _widthForStringRange:
+ _attributeRunForCharacterAtIndex:
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
+ finalize
- release
- dealloc
- _tryRetain
- _isDeallocating
- _invalidate
- typesetter
- initWithTypesetter:
- setGlyphRange:characterRange:
- createCTTypesetter
- _flushCachedObjects
- childGlyphStorageWithCharacterRange:
- _createEllipsisRunWithStringRange:attributes:
- _resolvePositionalStakeGlyphsForLineFragment:lineFragmentRect:minPosition:maxPosition:maxLineFragmentWidth:breakHint:
- _collectElasticRangeSurroundingCharacterAtIndex:minimumCharacterIndex:
- _widthForStringRange:
- _attributeRunForCharacterAtIndex:
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
- finalize
@end
