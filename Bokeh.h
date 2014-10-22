@interface Bokeh : SBFProceduralWallpaper
{
	id _skView;
	id _scene;
	long long _variant;
	id _bgColor;
	BOOL _shouldGenerateBlurs;
	usigned long long _blurFrameInterval;
	usigned long long _blurFrameCount;
	id _skUpdateQueue;
	id _delegate;
}

+ applyVariant:
+ initWithFrame:
+ setDelegate:
+ init
+ delegate
+ setAnimating:
+ _initialize
+ setWallpaperOptions:
+ setWallpaperVariant:
+ stopGeneratingBlurs
+ averageColorForRect:
+ averageLifetimeColor
+ startGeneratingBlursForRect:
+ copyBlurForRect:
+ .cxx_destruct
- applyVariant:
- initWithFrame:
- setDelegate:
- init
- delegate
- setAnimating:
- _initialize
- setWallpaperOptions:
- setWallpaperVariant:
- stopGeneratingBlurs
- averageColorForRect:
- averageLifetimeColor
- startGeneratingBlursForRect:
- copyBlurForRect:
- .cxx_destruct
@end
