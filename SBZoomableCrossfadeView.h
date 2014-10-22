@interface SBZoomableCrossfadeView : UIView
{
	id _startView;
	id _endView;
	BOOL _translucent;
	BOOL _crossfaded;
}

+ crossfadeWithCompletion:
+ _initWithStartView:endView:translucent:
+ dealloc
+ layoutSubviews
+ _shouldAnimatePropertyWithKey:
+ animationFactory
- crossfadeWithCompletion:
- _initWithStartView:endView:translucent:
- dealloc
- layoutSubviews
- _shouldAnimatePropertyWithKey:
- animationFactory
@end
