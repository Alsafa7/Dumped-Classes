@interface _SBIconWallpaperColorProvider : NSObject
{
	id _colorSettings;
	id _clients;
	pointer _blurColor;
	pointer _solidColor;
}

+ wallpaperDidChangeForVariant:
+ wallpaperLegibilitySettingsDidChange:forVariant:
+ wallpaperGeometryDidChangeForVariant:
+ updateColorForClientBoundsChange:
+ _updateColors
+ _updateClient:
+ _updateBlurForClient:
+ _updateAllClients
+ dealloc
+ init
+ settings:changedValueForKey:
+ addClient:
+ removeClient:
- wallpaperDidChangeForVariant:
- wallpaperLegibilitySettingsDidChange:forVariant:
- wallpaperGeometryDidChangeForVariant:
- updateColorForClientBoundsChange:
- _updateColors
- _updateClient:
- _updateBlurForClient:
- _updateAllClients
- dealloc
- init
- settings:changedValueForKey:
- addClient:
- removeClient:
@end
