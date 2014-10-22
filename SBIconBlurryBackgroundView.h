@interface SBIconBlurryBackgroundView : UIView
{
	struct _wallpaperRelativeBounds;
	BOOL _isBlurring;
	BOOL _suppressesExternalUpdates;
	id _observer;
	id _wantsBlurEvaluator;
	struct _wallpaperRelativeCenter;
}

+ setWallpaperRelativeCenter:
+ setSuppressesExternalUpdates:
+ isBlurring
+ setWantsBlurEvaluator:
+ wallpaperRelativeBounds
+ wantsBlur:
+ setWallpaperColor:phase:
+ setBlurring:
+ wallpaperRelativeCenter
+ wantsBlurEvaluator
+ isSuppressingExternalUpdates
+ initWithFrame:
+ dealloc
+ _shouldAnimatePropertyWithKey:
+ didAddSubview:
+ setObserver:
+ observer
- setWallpaperRelativeCenter:
- setSuppressesExternalUpdates:
- isBlurring
- setWantsBlurEvaluator:
- wallpaperRelativeBounds
- wantsBlur:
- setWallpaperColor:phase:
- setBlurring:
- wallpaperRelativeCenter
- wantsBlurEvaluator
- isSuppressingExternalUpdates
- initWithFrame:
- dealloc
- _shouldAnimatePropertyWithKey:
- didAddSubview:
- setObserver:
- observer
@end
