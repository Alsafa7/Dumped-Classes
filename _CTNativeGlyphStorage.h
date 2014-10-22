@interface _CTNativeGlyphStorage : _CTGlyphStorage
{
	_attachCounts;
	usigned long long _retainCount;
	pointer _stack;
	long long _capacity;
	pointer _preallocatedStorage;
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
+ setGlyph:atIndex:
+ setAdvance:atIndex:
+ insertGlyphsAtRange:
+ swapGlyphsAtIndex:withIndex:
+ moveGlyphsFromRange:toIndex:
+ prepareWithCapacity:preallocated:
+ setCapacity:
+ stringIndices
+ release
+ retain
+ dealloc
+ retainCount
+ _tryRetain
+ _isDeallocating
+ finalize
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
- setGlyph:atIndex:
- setAdvance:atIndex:
- insertGlyphsAtRange:
- swapGlyphsAtIndex:withIndex:
- moveGlyphsFromRange:toIndex:
- prepareWithCapacity:preallocated:
- setCapacity:
- stringIndices
- release
- retain
- dealloc
- retainCount
- _tryRetain
- _isDeallocating
- finalize
@end
