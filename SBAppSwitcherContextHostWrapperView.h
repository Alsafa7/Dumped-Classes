@interface SBAppSwitcherContextHostWrapperView : UIView
{
	id _contextHostManager;
	id _containerView;
	id _contextHostView;
	id _snapshotView;
	id _wallpaperEffectView;
	long long _orientation;
}

+ initWithFrame:application:
+ _viewPresenting:
+ _viewDismissing:
+ _viewDidAnimatePresentation:
+ _viewDidAnimateDismissal:
+ _rotationTransformForOrientation:
+ initWithFrame:
+ dealloc
+ layoutSubviews
+ sizeThatFits:
+ orientation
+ didMoveToSuperview
+ setOrientation:
- initWithFrame:application:
- _viewPresenting:
- _viewDismissing:
- _viewDidAnimatePresentation:
- _viewDidAnimateDismissal:
- _rotationTransformForOrientation:
- initWithFrame:
- dealloc
- layoutSubviews
- sizeThatFits:
- orientation
- didMoveToSuperview
- setOrientation:
@end
