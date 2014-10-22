@interface SBWallpaperLegibilitySettingsProvider : NSObject
{
	id _delegate;
	long long _variant;
}

+ wallpaperDidChangeForVariant:
+ wallpaperLegibilitySettingsDidChange:forVariant:
+ dealloc
+ setDelegate:
+ delegate
+ legibilitySettings
+ initWithVariant:
- wallpaperDidChangeForVariant:
- wallpaperLegibilitySettingsDidChange:forVariant:
- dealloc
- setDelegate:
- delegate
- legibilitySettings
- initWithVariant:
@end
