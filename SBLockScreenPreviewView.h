@interface SBLockScreenPreviewView : UIView
{
	id _wallpaperView;
	id _dateView;
	id _cameraView;
	id _slideToUnlockView;
	id _slideToUnlockLegibilityLabel;
	id _statusBar;
	id _dateFormatter;
	id _legibilitySettings;
}

+ _legibilityPrototypeSettings
+ _layoutSlideToUnlockView
+ initWithFrame:legibilitySettings:
+ _setupWallpaperView
+ _setupDateView
+ _setupSlideToUnlockView
+ _setupCameraView
+ _setupStatusBar
+ _layoutStatusBar
+ _layoutCameraView
+ dealloc
+ layoutSubviews
+ _layoutDateView
+ _layoutWallpaperView
- _legibilityPrototypeSettings
- _layoutSlideToUnlockView
- initWithFrame:legibilitySettings:
- _setupWallpaperView
- _setupDateView
- _setupSlideToUnlockView
- _setupCameraView
- _setupStatusBar
- _layoutStatusBar
- _layoutCameraView
- dealloc
- layoutSubviews
- _layoutDateView
- _layoutWallpaperView
@end
