@interface SBChevronView : UIView
{
	id _leftGrabberView;
	id _rightGrabberView;
	double _animationDuration;
	long long _state;
	id _color;
	id _vibrantSettings;
	id _colorCompositingView;
	id _darkTintView;
	id _lightTintView;
	id _backgroundView;
	id _alphaContainerView;
}

+ setState:animated:
+ _layoutGrabberView:forState:
+ _frameForGrabberView:forState:
+ _transformForGrabberView:forState:
+ initWithFrame:
+ dealloc
+ layoutSubviews
+ description
+ sizeThatFits:
+ state
+ setAnimationDuration:
+ setState:
+ setBackgroundView:
+ animationDuration
+ color
+ setColor:
+ initWithColor:
+ _setState:
+ setVibrantSettings:
+ vibrantSettings
- setState:animated:
- _layoutGrabberView:forState:
- _frameForGrabberView:forState:
- _transformForGrabberView:forState:
- initWithFrame:
- dealloc
- layoutSubviews
- description
- sizeThatFits:
- state
- setAnimationDuration:
- setState:
- setBackgroundView:
- animationDuration
- color
- setColor:
- initWithColor:
- _setState:
- setVibrantSettings:
- vibrantSettings
@end
