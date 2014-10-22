@interface WebTiledBackingLayer : CALayer
{
	struct _tileController;
}

+ setOpaque:
+ dealloc
+ setNeedsDisplay
+ init
+ setBounds:
+ invalidate
+ actionForKey:
+ isOpaque
+ setContentsScale:
+ setNeedsDisplayInRect:
+ setBorderWidth:
+ setBorderColor:
+ .cxx_construct
+ initWithLayer:
+ .cxx_destruct
+ tileContainerLayer
+ acceleratesDrawing
+ setAcceleratesDrawing:
+ tiledBacking
- setOpaque:
- dealloc
- setNeedsDisplay
- init
- setBounds:
- invalidate
- actionForKey:
- isOpaque
- setContentsScale:
- setNeedsDisplayInRect:
- setBorderWidth:
- setBorderColor:
- .cxx_construct
- initWithLayer:
- .cxx_destruct
- tileContainerLayer
- acceleratesDrawing
- setAcceleratesDrawing:
- tiledBacking
@end
