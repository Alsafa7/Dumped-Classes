@interface CUITextEffectStack : CUIShapeEffectStack
{
	BOOL renderHighQuality;
}

+ initWithEffectPreset:
+ useCoreImageRendering
+ newGlyphMaskContextForBounds:fromContext:withScale:
+ drawProcessedMask:atBounds:inContext:withScale:
+ newBackgroundPatternColorWithSize:contentScale:forContext:
+ _drawShadow:forGlyphs:inContext:usingFont:withAdvances:count:
+ _drawShadow:forGlyphs:inContext:usingFont:atPositions:count:
+ _drawShadow:usingQuartz:inContext:
+ effectiveInteriorFillOpacity
+ drawGlyphs:inContext:usingFont:withAdvances:count:lineHeight:inBounds:atScale:
+ drawGlyphs:inContext:usingFont:atPositions:count:lineHeight:inBounds:atScale:
+ drawUsingQuartz:inContext:inBounds:atScale:
- initWithEffectPreset:
- useCoreImageRendering
- newGlyphMaskContextForBounds:fromContext:withScale:
- drawProcessedMask:atBounds:inContext:withScale:
- newBackgroundPatternColorWithSize:contentScale:forContext:
- _drawShadow:forGlyphs:inContext:usingFont:withAdvances:count:
- _drawShadow:forGlyphs:inContext:usingFont:atPositions:count:
- _drawShadow:usingQuartz:inContext:
- effectiveInteriorFillOpacity
- drawGlyphs:inContext:usingFont:withAdvances:count:lineHeight:inBounds:atScale:
- drawGlyphs:inContext:usingFont:atPositions:count:lineHeight:inBounds:atScale:
- drawUsingQuartz:inContext:inBounds:atScale:
@end
