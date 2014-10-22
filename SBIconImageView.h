@interface SBIconImageView : UIView
{
	id _overlayView;
	id _progressView;
	BOOL _isPaused;
	id _cachedSquareContentsImage;
	BOOL _showsSquareCorners;
	id _icon;
	double _brightness;
	double _overlayAlpha;
}

+ darkeningOverlayImage
+ _generateSquareContentsImage
+ squareDarkeningOverlayImage
+ setShowsSquareCorners:
+ progressViewCanBeRemoved:
+ iconImageDidUpdate:
+ setOverlayAlpha:
+ updateImageAnimated:
+ setProgressAlpha:
+ setIcon:animated:
+ setProgressState:paused:percent:animated:
+ _clearCachedImages
+ _updateOverlayImage
+ _updateOverlayAlpha
+ _updateProgressMask
+ _clearProgressView
+ squareContentsImage
+ _currentOverlayImage
+ overlayAlpha
+ showsSquareCorners
+ icon
+ initWithFrame:
+ dealloc
+ layoutSubviews
+ sizeThatFits:
+ _shouldAnimatePropertyWithKey:
+ snapshot
+ visibleBounds
+ prepareForReuse
+ contentsImage
+ setIcon:
+ setPaused:
+ setBrightness:
+ brightness
- darkeningOverlayImage
- _generateSquareContentsImage
- squareDarkeningOverlayImage
- setShowsSquareCorners:
- progressViewCanBeRemoved:
- iconImageDidUpdate:
- setOverlayAlpha:
- updateImageAnimated:
- setProgressAlpha:
- setIcon:animated:
- setProgressState:paused:percent:animated:
- _clearCachedImages
- _updateOverlayImage
- _updateOverlayAlpha
- _updateProgressMask
- _clearProgressView
- squareContentsImage
- _currentOverlayImage
- overlayAlpha
- showsSquareCorners
- icon
- initWithFrame:
- dealloc
- layoutSubviews
- sizeThatFits:
- _shouldAnimatePropertyWithKey:
- snapshot
- visibleBounds
- prepareForReuse
- contentsImage
- setIcon:
- setPaused:
- setBrightness:
- brightness
@end
