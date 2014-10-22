@interface SBScaleZoomSettings : SBIconZoomSettings
{
	BOOL _crossfadeWithZoom;
	id _outerFolderFadeSettings;
	id _crossfadeSettings;
}

+ setCrossfadeWithZoom:
+ crossfadeWithZoom
+ crossfadeSettings
+ effectiveCrossfadeAnimationSettings
+ outerFolderFadeSettings
+ setOuterFolderFadeSettings:
+ setCrossfadeSettings:
+ setDefaultValues
- setCrossfadeWithZoom:
- crossfadeWithZoom
- crossfadeSettings
- effectiveCrossfadeAnimationSettings
- outerFolderFadeSettings
- setOuterFolderFadeSettings:
- setCrossfadeSettings:
- setDefaultValues
@end
