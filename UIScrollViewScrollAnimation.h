@interface UIScrollViewScrollAnimation : UIAnimation
{
	struct _originalOffset;
	struct _targetOffset;
	double _accuracy;
	BOOL _adjustsForContentOffsetDelta;
}

+ dealloc
+ adjustForContentOffsetDelta:
+ setProgress:
- dealloc
- adjustForContentOffsetDelta:
- setProgress:
@end
