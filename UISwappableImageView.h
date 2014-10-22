@interface UISwappableImageView : UIImageView
{
	id _value;
	id _alternate;
	double _scale;
	BOOL _showAlternate;
	BOOL _flipped;
	BOOL _updateImage;
	BOOL _bezel;
	int _bezelStyle;
	int _currentAnimation;
	id _buttonBar;
	int _buttonTag;
	id _proxy;
	long long _barButtonItemStyle;
	BOOL _didDisableWindowAutorotation;
	id _didFinishTarget;
	SEL _didFinishSelector;
}

+ dealloc
+ setImage:
+ animationDidStop:finished:
+ _willMoveToWindow:
+ updateImageIfNeededWithTintColor:
+ updateImageIfNeeded
+ setBezelStyleForBarStyle:tintColor:
+ setBezelStyleForBarStyle:tintColor:iconTintColor:iconTintColorDidChange:
+ initWithImage:alternateImage:barStyle:barButtonItemStyle:tintColor:bezel:
+ showAlternateImage:
+ setFlipped:
+ animateImage:withButtonBar:withTag:target:didFinishSelector:
- dealloc
- setImage:
- animationDidStop:finished:
- _willMoveToWindow:
- updateImageIfNeededWithTintColor:
- updateImageIfNeeded
- setBezelStyleForBarStyle:tintColor:
- setBezelStyleForBarStyle:tintColor:iconTintColor:iconTintColorDidChange:
- initWithImage:alternateImage:barStyle:barButtonItemStyle:tintColor:bezel:
- showAlternateImage:
- setFlipped:
- animateImage:withButtonBar:withTag:target:didFinishSelector:
@end
