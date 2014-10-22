@interface SBCameraGrabberView : UIView
{
	struct _hitTestEdgeInsets;
	id _colorCompositingView;
	id _darkTintView;
	id _lightTintView;
	id _backgroundView;
	id _legibilityView;
	id _vibrantSettings;
	id _delegate;
}

+ _cameraGrabberImage
+ _lazyLegibilityView
+ initWithFrame:
+ dealloc
+ setDelegate:
+ pointInside:withEvent:
+ sizeThatFits:
+ delegate
+ touchesCancelled:withEvent:
+ touchesBegan:withEvent:
+ touchesEnded:withEvent:
+ setBackgroundView:
+ setStrength:
+ updateForChangedSettings:
+ setVibrantSettings:
+ vibrantSettings
- _cameraGrabberImage
- _lazyLegibilityView
- initWithFrame:
- dealloc
- setDelegate:
- pointInside:withEvent:
- sizeThatFits:
- delegate
- touchesCancelled:withEvent:
- touchesBegan:withEvent:
- touchesEnded:withEvent:
- setBackgroundView:
- setStrength:
- updateForChangedSettings:
- setVibrantSettings:
- vibrantSettings
@end
