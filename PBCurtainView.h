@interface PBCurtainView : UIView
{
	int _style;
	BOOL _isAnimating;
	id _didStartBlock;
	id _completionBlock;
	id _animation;
	BOOL _animating;
}

+ animateWithStyle:didStartBlock:completionBlock:
+ dealloc
+ setStyle:
+ style
+ animationDidStop:finished:
+ animationDidStart:
+ initWithStyle:
+ isAnimating
+ _setStyle:
- animateWithStyle:didStartBlock:completionBlock:
- dealloc
- setStyle:
- style
- animationDidStop:finished:
- animationDidStart:
- initWithStyle:
- isAnimating
- _setStyle:
@end
