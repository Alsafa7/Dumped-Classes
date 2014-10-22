@interface SBBouncingItem : NSObject
{
	struct _bounds;
	struct _center;
	double _multiplier;
	id _translateBlock;
}

+ setTranslateBlock:
+ translateBlock
+ setMultiplier:
+ dealloc
+ bounds
+ setBounds:
+ center
+ transform
+ setCenter:
+ setTransform:
+ multiplier
- setTranslateBlock:
- translateBlock
- setMultiplier:
- dealloc
- bounds
- setBounds:
- center
- transform
- setCenter:
- setTransform:
- multiplier
@end
