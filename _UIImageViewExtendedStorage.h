@interface _UIImageViewExtendedStorage : NSObject
{
	BOOL _highlighted;
	id _image;
	id _highlightedImage;
	id _animationImages;
	id _highlightedAnimationImages;
	double _animationDuration;
	long long _animationRepeatCount;
	int _drawMode;
	long long _defaultRenderingMode;
	BOOL _masksTemplateImages;
	usigned long long _templateImageRenderingEffects;
}

+ dealloc
+ animationDidStop:finished:
- dealloc
- animationDidStop:finished:
@end
