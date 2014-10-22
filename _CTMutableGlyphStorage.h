@interface _CTMutableGlyphStorage : _CTGlyphStorage
{
	id _interface;
}

+ setProps:atIndex:
+ setAttachmentCount:atIndex:
+ setStringIndex:atIndex:
+ attachmentCountAtIndex:
+ popGlyphAtIndex:
+ pushGlyphAtIndex:
+ initGlyphStackWithCapacity:
+ puntStringIndicesInRange:by:
+ copyWithRange:
+ refCon
+ setGlyph:atIndex:
+ setAdvance:atIndex:
+ insertGlyphsAtRange:
+ swapGlyphsAtIndex:withIndex:
+ moveGlyphsFromRange:toIndex:
+ sync
+ initWithInterface:
+ customAdvanceForIndex:
+ disposeGlyphStack
- setProps:atIndex:
- setAttachmentCount:atIndex:
- setStringIndex:atIndex:
- attachmentCountAtIndex:
- popGlyphAtIndex:
- pushGlyphAtIndex:
- initGlyphStackWithCapacity:
- puntStringIndicesInRange:by:
- copyWithRange:
- refCon
- setGlyph:atIndex:
- setAdvance:atIndex:
- insertGlyphsAtRange:
- swapGlyphsAtIndex:withIndex:
- moveGlyphsFromRange:toIndex:
- sync
- initWithInterface:
- customAdvanceForIndex:
- disposeGlyphStack
@end
