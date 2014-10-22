@interface WebTileLayer : CALayer
{
	pointer _tileController;
	unsigned int _paintCount;
}

+ actionForKey:
+ paintCount
+ drawInContext:
+ setTileController:
+ resetPaintCount
+ incrementPaintCount
+ logFilledFreshTile
- actionForKey:
- paintCount
- drawInContext:
- setTileController:
- resetPaintCount
- incrementPaintCount
- logFilledFreshTile
@end
