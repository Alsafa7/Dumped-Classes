@interface SBHUDController : NSObject
{
	id _hudWindow;
	id _hudContentView;
	id _hudView;
	long long _orientation;
	BOOL _hudVisibleOrFading;
}

+ _orderWindowOut:
+ visibleHUDView
+ hideHUDView
+ visibleOrFadingHUDView
+ _recenterHUDView
+ _createUI
+ presentHUDView:
+ presentHUDView:autoDismissWithDelay:
+ reorientHUDIfNeeded:
+ dealloc
+ _tearDown
- _orderWindowOut:
- visibleHUDView
- hideHUDView
- visibleOrFadingHUDView
- _recenterHUDView
- _createUI
- presentHUDView:
- presentHUDView:autoDismissWithDelay:
- reorientHUDIfNeeded:
- dealloc
- _tearDown
@end
