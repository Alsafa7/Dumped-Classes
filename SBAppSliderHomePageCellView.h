@interface SBAppSliderHomePageCellView : UIView
{
	id _possiblyRotatedContainer;
	id _nonRotatedContainer;
	id _homeScreenView;
	id _homeSnapshot;
	id _wallpaperView;
	id _fakeStatusBar;
	BOOL _usesSnapshots;
	long long _snapshotOrientation;
	long long _orientation;
}

+ setHomeSnapshot:inOrientation:
+ setHomeScreenView:
+ wallpaperDidChangeForVariant:
+ _viewPresenting:
+ _viewDismissing:
+ _viewDidAnimatePresentation:
+ _statusBarFrameChanging
+ _updateWallpaperView
+ homeSnapshot
+ homeScreenView
+ initWithFrame:
+ dealloc
+ layoutSubviews
+ sizeThatFits:
+ orientation
+ setOrientation:
+ setLegibilitySettings:
- setHomeSnapshot:inOrientation:
- setHomeScreenView:
- wallpaperDidChangeForVariant:
- _viewPresenting:
- _viewDismissing:
- _viewDidAnimatePresentation:
- _statusBarFrameChanging
- _updateWallpaperView
- homeSnapshot
- homeScreenView
- initWithFrame:
- dealloc
- layoutSubviews
- sizeThatFits:
- orientation
- setOrientation:
- setLegibilitySettings:
@end
