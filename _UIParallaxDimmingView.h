@interface _UIParallaxDimmingView : UIView
{
	id leftEdgeFade;
	BOOL _backgroundIsDimmed;
	id _dimmingColor;
	id _addingSubview;
}

+ initWithFrame:
+ dealloc
+ didMoveToWindow
+ setBackgroundIsDimmed:
+ crossFade
+ setDimmingColor:
+ dimmingColor
+ setAddingSubview:
+ initViewWrappingView:withLeftBorder:
+ addingSubview
+ backgroundIsDimmed
+ defaultBorderColor
+ _basicAnimationWithKeyPath:
- initWithFrame:
- dealloc
- didMoveToWindow
- setBackgroundIsDimmed:
- crossFade
- setDimmingColor:
- dimmingColor
- setAddingSubview:
- initViewWrappingView:withLeftBorder:
- addingSubview
- backgroundIsDimmed
- defaultBorderColor
- _basicAnimationWithKeyPath:
@end
