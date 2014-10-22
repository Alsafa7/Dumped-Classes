@interface SBFStaticWallpaperView : SBFWallpaperView
{
	id _mappedBackdropKeys;
	id _image;
	id _colorBoxes;
}

+ dealloc
+ setContentsRect:
+ _zoomScale
+ settings:changedValueForKey:
+ wallpaperImage
+ initWithFrame:wallpaperImage:
+ _computeAverageColor
+ _colorBoxSize
+ colorBoxes
+ contrastInRect:contrastWithinBoxes:contrastBetweenBoxes:
+ _averageColorInContentViewRect:smudgeRadius:
+ _blurredImage
+ _imageForBackdropParameters:includeTint:
+ _displayedImage
+ contrastInRect:
+ isDisplayingWallpaper:
+ _resetColorBoxes
+ _createColorBoxes
+ setColorBoxes:
+ _wallpaperImageForAnalysis
+ _treatedImage
+ _treatedImageKey
+ _removeMappedBlurs
+ _mappedImageKeyForParameters:includingTint:
+ _untintedImageForBackdropParameters:
+ _imageSize
- dealloc
- setContentsRect:
- _zoomScale
- settings:changedValueForKey:
- wallpaperImage
- initWithFrame:wallpaperImage:
- _computeAverageColor
- _colorBoxSize
- colorBoxes
- contrastInRect:contrastWithinBoxes:contrastBetweenBoxes:
- _averageColorInContentViewRect:smudgeRadius:
- _blurredImage
- _imageForBackdropParameters:includeTint:
- _displayedImage
- contrastInRect:
- isDisplayingWallpaper:
- _resetColorBoxes
- _createColorBoxes
- setColorBoxes:
- _wallpaperImageForAnalysis
- _treatedImage
- _treatedImageKey
- _removeMappedBlurs
- _mappedImageKeyForParameters:includingTint:
- _untintedImageForBackdropParameters:
- _imageSize
@end
