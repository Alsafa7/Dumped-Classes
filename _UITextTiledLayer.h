@interface _UITextTiledLayer : CALayer
{
	id _reusableTiles;
	struct _gridBounds;
	struct _tcTiledLayerFlags;
	struct _tileSize;
}

+ dealloc
+ init
+ setBounds:
+ renderInContext:
+ setNeedsDisplayInRect:
+ setTileSize:
+ tileSize
+ setUsesTiledLayers:
+ usesTiledLayers
+ drawDirtyLayer:intoContext:
+ _buildTilesForRect:
+ _cullAndAddLayers:
+ _hideAndShowTiles:visibleBounds:
+ _validateTiles
+ suspendTiling
+ resumeTiling
+ layoutSublayers
- dealloc
- init
- setBounds:
- renderInContext:
- setNeedsDisplayInRect:
- setTileSize:
- tileSize
- setUsesTiledLayers:
- usesTiledLayers
- drawDirtyLayer:intoContext:
- _buildTilesForRect:
- _cullAndAddLayers:
- _hideAndShowTiles:visibleBounds:
- _validateTiles
- suspendTiling
- resumeTiling
- layoutSublayers
@end
