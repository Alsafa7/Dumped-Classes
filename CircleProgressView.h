@interface CircleProgressView : UIImageView
{
	id _maskLayer;
	double _progress;
	double _animateNextPathChange;
}

+ setMaskPath:
+ animateNextPathChange
+ setAnimateNextPathChange:
+ initWithFrame:
+ dealloc
+ layoutSubviews
+ animationDidStop:finished:
+ setProgress:
+ progress
- setMaskPath:
- animateNextPathChange
- setAnimateNextPathChange:
- initWithFrame:
- dealloc
- layoutSubviews
- animationDidStop:finished:
- setProgress:
- progress
@end
