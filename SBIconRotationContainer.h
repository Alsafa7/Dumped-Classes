@interface SBIconRotationContainer : UIView
{
	struct _coordinate;
	id _viewMap;
	id _startView;
	id _endView;
	struct _wallpaperRelativeImageCenter;
}

+ setWallpaperRelativeImageCenter:
+ iconImageCenter
+ initWithFrame:startIcon:endIcon:viewMap:coordinate:
+ prepareToCrossfade
+ crossfadeWithDuration:
+ endIcon
+ wallpaperRelativeImageCenter
+ dealloc
+ coordinate
- setWallpaperRelativeImageCenter:
- iconImageCenter
- initWithFrame:startIcon:endIcon:viewMap:coordinate:
- prepareToCrossfade
- crossfadeWithDuration:
- endIcon
- wallpaperRelativeImageCenter
- dealloc
- coordinate
@end
