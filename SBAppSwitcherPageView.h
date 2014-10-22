@interface SBAppSwitcherPageView : UIView
{
	id _shadowView;
	id _hitTestBlocker;
	id _view;
	id _overlayView;
	long long _orientation;
}

+ setView:animated:
+ _transformForScale
+ initWithFrame:
+ dealloc
+ layoutSubviews
+ description
+ sizeThatFits:
+ view
+ invalidate
+ orientation
+ setView:
+ setOrientation:
+ overlay
+ setOverlay:
+ setShadowAlpha:
+ shadowAlpha
+ _viewFrame
+ setShadowEnabled:
+ _transformForOrientation:
- setView:animated:
- _transformForScale
- initWithFrame:
- dealloc
- layoutSubviews
- description
- sizeThatFits:
- view
- invalidate
- orientation
- setView:
- setOrientation:
- overlay
- setOverlay:
- setShadowAlpha:
- shadowAlpha
- _viewFrame
- setShadowEnabled:
- _transformForOrientation:
@end
