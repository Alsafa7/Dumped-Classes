@interface SBFadeAnimationSettings : _UISettings
{
	double _backlightFadeDuration;
	id _dateInSettings;
	id _overlayInSettings;
	id _contentInSettings;
	id _wallpaperInSettings;
	id _dateOutSettings;
	id _overlayOutSettings;
	id _wallpaperOutSettings;
	struct _wallpaperInContentsRect;
	struct _wallpaperOutContentsRect;
}

+ backlightFadeDuration
+ dateInSettings
+ overlayInSettings
+ wallpaperInSettings
+ contentInSettings
+ overlayOutSettings
+ wallpaperOutSettings
+ wallpaperInContentsRect
+ dateOutSettings
+ wallpaperOutContentsRect
+ setWallpaperInContentsRect:
+ setWallpaperOutContentsRect:
+ setBacklightFadeDuration:
+ setDateInSettings:
+ setOverlayInSettings:
+ setContentInSettings:
+ setWallpaperInSettings:
+ setDateOutSettings:
+ setOverlayOutSettings:
+ setWallpaperOutSettings:
+ setDefaultValues
- backlightFadeDuration
- dateInSettings
- overlayInSettings
- wallpaperInSettings
- contentInSettings
- overlayOutSettings
- wallpaperOutSettings
- wallpaperInContentsRect
- dateOutSettings
- wallpaperOutContentsRect
- setWallpaperInContentsRect:
- setWallpaperOutContentsRect:
- setBacklightFadeDuration:
- setDateInSettings:
- setOverlayInSettings:
- setContentInSettings:
- setWallpaperInSettings:
- setDateOutSettings:
- setOverlayOutSettings:
- setWallpaperOutSettings:
- setDefaultValues
@end
