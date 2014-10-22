@interface CUICatalog : NSObject
{
	usigned long long _storageRef;
}

+ dealloc
+ debugDescription
+ styledInsetsForStylePresetName:styleConfiguration:foregroundColor:scale:
+ imageByStylingImage:stylePresetName:styleConfiguration:foregroundColor:scale:
+ initWithName:fromBundle:
+ initWithName:fromBundle:error:
+ imageWithName:scaleFactor:deviceIdiom:deviceSubtype:
+ _themeStore
+ _resolvedRenditionKeyForName:scaleFactor:deviceIdiom:deviceSubtype:
+ _baseKeyForName:
+ _toggleScaleOfRenditionKey:
+ newShapeEffectPresetWithRenditionKey:
+ temporaryFallbackCatalog
+ newShapeEffectPresetWithStyleID:state:presentationState:value:resolution:
+ hasStylePresetWithName:
+ newShapeEffectPresetWithStylePresetName:state:presentationState:value:resolution:
+ newShapeEffectPresetForStylePresetName:styleConfiguration:
+ requiredDrawOfUnstyledGlyphs:atPositions:inContext:withFont:count:
+ newTextEffectStackForStylePresetName:styleConfiguration:foregroundColor:
+ fillStyledPath:inContext:stylePresetName:styleConfiguration:
+ _doStyledQuartzDrawingInContext:inBounds:stylePresetName:styleConfiguration:drawingHandler:
+ newShapeEffectStackForStylePresetName:styleConfiguration:foregroundColor:
+ imageWithName:scaleFactor:
+ imageWithName:scaleFactor:deviceIdiom:
+ _themeRef
+ artVariantIDOrZero
+ strokeStyledPath:inContext:stylePresetName:styleConfiguration:
+ fillStyledRect:inContext:stylePresetName:styleConfiguration:
+ clearCachedImageResources
+ drawGlyphs:atPositions:inContext:withFont:count:stylePresetName:styleConfiguration:foregroundColor:
- dealloc
- debugDescription
- styledInsetsForStylePresetName:styleConfiguration:foregroundColor:scale:
- imageByStylingImage:stylePresetName:styleConfiguration:foregroundColor:scale:
- initWithName:fromBundle:
- initWithName:fromBundle:error:
- imageWithName:scaleFactor:deviceIdiom:deviceSubtype:
- _themeStore
- _resolvedRenditionKeyForName:scaleFactor:deviceIdiom:deviceSubtype:
- _baseKeyForName:
- _toggleScaleOfRenditionKey:
- newShapeEffectPresetWithRenditionKey:
- temporaryFallbackCatalog
- newShapeEffectPresetWithStyleID:state:presentationState:value:resolution:
- hasStylePresetWithName:
- newShapeEffectPresetWithStylePresetName:state:presentationState:value:resolution:
- newShapeEffectPresetForStylePresetName:styleConfiguration:
- requiredDrawOfUnstyledGlyphs:atPositions:inContext:withFont:count:
- newTextEffectStackForStylePresetName:styleConfiguration:foregroundColor:
- fillStyledPath:inContext:stylePresetName:styleConfiguration:
- _doStyledQuartzDrawingInContext:inBounds:stylePresetName:styleConfiguration:drawingHandler:
- newShapeEffectStackForStylePresetName:styleConfiguration:foregroundColor:
- imageWithName:scaleFactor:
- imageWithName:scaleFactor:deviceIdiom:
- _themeRef
- artVariantIDOrZero
- strokeStyledPath:inContext:stylePresetName:styleConfiguration:
- fillStyledRect:inContext:stylePresetName:styleConfiguration:
- clearCachedImageResources
- drawGlyphs:atPositions:inContext:withFont:count:stylePresetName:styleConfiguration:foregroundColor:
@end
