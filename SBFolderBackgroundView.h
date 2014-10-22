@interface SBFolderBackgroundView : UIView
{
	id _backdropView;
	id _backgroundImageView;
	id _folderSettings;
}

+ wallpaperDidChangeForVariant:
+ _configureBackground
+ willAnimate
+ didAnimate
+ adjustCornerRadiusForMagnificationFraction:
+ initWithFrame:
+ dealloc
+ layoutSubviews
+ settings:changedValueForKey:
- wallpaperDidChangeForVariant:
- _configureBackground
- willAnimate
- didAnimate
- adjustCornerRadiusForMagnificationFraction:
- initWithFrame:
- dealloc
- layoutSubviews
- settings:changedValueForKey:
@end
