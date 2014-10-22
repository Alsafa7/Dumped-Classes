@interface SBLegibilityView : _UILegibilityView
{
	long long _tintColor;
	id _tintImage;
	struct _hitTestEdgeInsets;
}

+ _tintColorForSettings:
+ initWithSettings:strength:image:tintColor:
+ tintImage
+ setTintImage:
+ dealloc
+ pointInside:withEvent:
+ tintColor
+ setTintColor:
+ setSettings:image:shadowImage:
+ setHitTestEdgeInsets:
+ hitTestEdgeInsets
- _tintColorForSettings:
- initWithSettings:strength:image:tintColor:
- tintImage
- setTintImage:
- dealloc
- pointInside:withEvent:
- tintColor
- setTintColor:
- setSettings:image:shadowImage:
- setHitTestEdgeInsets:
- hitTestEdgeInsets
@end
