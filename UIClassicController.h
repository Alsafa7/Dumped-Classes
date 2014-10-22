@interface UIClassicController : NSObject
{
	id _window;
	id _chromeView;
	id _statusBarViewController;
	id _zoomViewController;
	BOOL _hidesClassicChrome;
	BOOL _hidesStatusBarFiller;
}

+ dealloc
+ _initializeStatusBarOrientation
+ setStatusBarStyle:animationParameters:
+ setStatusBarHidden:animationParameters:
+ setStatusBarOrientation:animationParameters:
+ _window
+ _setupWindow
+ isClassicControlWindow:
+ setZoomed:animated:
+ _supportsZoom
+ _shouldHideStatusBar
+ isZoomed
+ setZoomed:
+ _classicChangeStatusBarOrientation:
+ _classicChangeStatusBarOrientationFinished:finished:context:
+ drawsStatusBarFiller
+ setDrawsStatusBarFiller:
- dealloc
- _initializeStatusBarOrientation
- setStatusBarStyle:animationParameters:
- setStatusBarHidden:animationParameters:
- setStatusBarOrientation:animationParameters:
- _window
- _setupWindow
- isClassicControlWindow:
- setZoomed:animated:
- _supportsZoom
- _shouldHideStatusBar
- isZoomed
- setZoomed:
- _classicChangeStatusBarOrientation:
- _classicChangeStatusBarOrientationFinished:finished:context:
- drawsStatusBarFiller
- setDrawsStatusBarFiller:
@end
