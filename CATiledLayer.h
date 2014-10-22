@interface CATiledLayer : CALayer
{

}

+ isDrawingEnabled
+ maximumTileScale
+ setNeedsDisplayInRect:levelOfDetail:
+ canDrawRect:levelOfDetail:
+ setMaximumTileScale:
+ setFillColor:
+ fillColor
+ setDrawingEnabled:
+ setNeedsDisplayInRect:levelOfDetail:options:
+ displayInRect:levelOfDetail:options:
+ setNeedsDisplayInMapRect:levelOfDetail:
+ setNeedsDisplayInMapRect:levelOfDetail:options:
+ displayInMapRect:levelOfDetail:options:
+ shouldArchiveValueForKey:
+ _canDisplayConcurrently
+ levelsOfDetail
+ levelsOfDetailBias
+ dealloc
+ didChangeValueForKey:
+ setNeedsDisplayInRect:
+ setContents:
+ invalidateContents
+ setTileSize:
+ _dealloc
+ _display
+ tileSize
+ setLevelsOfDetail:
+ setLevelsOfDetailBias:
- isDrawingEnabled
- maximumTileScale
- setNeedsDisplayInRect:levelOfDetail:
- canDrawRect:levelOfDetail:
- setMaximumTileScale:
- setFillColor:
- fillColor
- setDrawingEnabled:
- setNeedsDisplayInRect:levelOfDetail:options:
- displayInRect:levelOfDetail:options:
- setNeedsDisplayInMapRect:levelOfDetail:
- setNeedsDisplayInMapRect:levelOfDetail:options:
- displayInMapRect:levelOfDetail:options:
- shouldArchiveValueForKey:
- _canDisplayConcurrently
- levelsOfDetail
- levelsOfDetailBias
- dealloc
- didChangeValueForKey:
- setNeedsDisplayInRect:
- setContents:
- invalidateContents
- setTileSize:
- _dealloc
- _display
- tileSize
- setLevelsOfDetail:
- setLevelsOfDetailBias:
@end
