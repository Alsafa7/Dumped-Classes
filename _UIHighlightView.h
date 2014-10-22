@interface _UIHighlightView : UIView
{
	id _color;
	double _cornerRadius;
	struct _invertedHighlightClipRect;
	id _cornerRadii;
	id _innerBounds;
	id _innerQuads;
	BOOL _invertHighlight;
}

+ initWithFrame:
+ dealloc
+ drawRect:
+ setFrame:
+ setCornerRadius:
+ hitTest:forEvent:
+ setColor:
+ cleanUp
+ setCornerRadii:
+ setFrames:boundaryRect:
+ setQuads:boundaryRect:
+ setInvertHighlight:clipRect:
- initWithFrame:
- dealloc
- drawRect:
- setFrame:
- setCornerRadius:
- hitTest:forEvent:
- setColor:
- cleanUp
- setCornerRadii:
- setFrames:boundaryRect:
- setQuads:boundaryRect:
- setInvertHighlight:clipRect:
@end
