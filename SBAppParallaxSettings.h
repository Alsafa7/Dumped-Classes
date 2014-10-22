@interface SBAppParallaxSettings : _UISettings
{
	id _lockscreenWallpaperSettings;
	id _homescreenWallpaperSettings;
	id _iconSettings;
	id _iconBadgeSettings;
}

+ iconBadgeSettings
+ lockscreenWallpaperSettings
+ homescreenWallpaperSettings
+ setLockscreenWallpaperSettings:
+ setHomescreenWallpaperSettings:
+ setIconBadgeSettings:
+ setDefaultValues
+ iconSettings
+ setIconSettings:
- iconBadgeSettings
- lockscreenWallpaperSettings
- homescreenWallpaperSettings
- setLockscreenWallpaperSettings:
- setHomescreenWallpaperSettings:
- setIconBadgeSettings:
- setDefaultValues
- iconSettings
- setIconSettings:
@end
