@interface _CTGlyphStorage : NSObject
{
	long long _count;
	_glyphs;
	_advances;
	_props;
	_stringIndices;
}

+ setProps:atIndex:
+ setAttachmentCount:atIndex:
+ setStringIndex:atIndex:
+ attachmentCountAtIndex:
+ popGlyphAtIndex:
+ pushGlyphAtIndex:
+ initGlyphStackWithCapacity:
+ puntStringIndicesInRange:by:
+ initWithCount:
+ copyWithRange:
+ refCon
+ setGlyph:atIndex:
+ setAdvance:atIndex:
+ insertGlyphsAtRange:
+ swapGlyphsAtIndex:withIndex:
+ moveGlyphsFromRange:toIndex:
+ sync
+ isEqual:
+ disposeGlyphStack
- setProps:atIndex:
- setAttachmentCount:atIndex:
- setStringIndex:atIndex:
- attachmentCountAtIndex:
- popGlyphAtIndex:
- pushGlyphAtIndex:
- initGlyphStackWithCapacity:
- puntStringIndicesInRange:by:
- initWithCount:
- copyWithRange:
- refCon
- setGlyph:atIndex:
- setAdvance:atIndex:
- insertGlyphsAtRange:
- swapGlyphsAtIndex:withIndex:
- moveGlyphsFromRange:toIndex:
- sync
- isEqual:
- disposeGlyphStack
@end
