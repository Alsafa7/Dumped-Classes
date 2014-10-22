@interface TileLayer : CALayer
{
	pointer _tileGrid;
	unsigned int _paintCount;
}

+ actionForKey:
+ setNeedsDisplayInRect:
+ paintCount
+ setPaintCount:
+ tileGrid
+ drawInContext:
+ setTileGrid:
+ layoutSublayers
- actionForKey:
- setNeedsDisplayInRect:
- paintCount
- setPaintCount:
- tileGrid
- drawInContext:
- setTileGrid:
- layoutSublayers
@end
