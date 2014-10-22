@interface _SBFakeBlurView : UIView
{
	id _observer;
	long long _requestedStyle;
	long long _effectiveStyle;
	id _wallpaperView;
	id _imageView;
}

+ displayRecorder_updatePosition
+ reconfigureWithSource:
+ setBlurImage:
+ blurImageWithSource:
+ _updateImageWithSource:notifyObserver:
+ _setImage:style:notify:
+ effectiveStyle
+ updateImageWithSource:
+ variant
+ dealloc
+ didMoveToWindow
+ layoutSubviews
+ willMoveToWindow:
+ requestStyle:
+ rotateToInterfaceOrientation:
+ setObserver:
+ observer
+ initWithVariant:
- displayRecorder_updatePosition
- reconfigureWithSource:
- setBlurImage:
- blurImageWithSource:
- _updateImageWithSource:notifyObserver:
- _setImage:style:notify:
- effectiveStyle
- updateImageWithSource:
- variant
- dealloc
- didMoveToWindow
- layoutSubviews
- willMoveToWindow:
- requestStyle:
- rotateToInterfaceOrientation:
- setObserver:
- observer
- initWithVariant:
@end
