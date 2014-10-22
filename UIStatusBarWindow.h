@interface UIStatusBarWindow : UIWindow
{
	id _statusBar;
	long long _orientation;
	id _topCorners;
	double _topCornersOffset;
	id _bottomCorners;
	BOOL _cornersHidden;
}

+ initWithFrame:
+ dealloc
+ hitTest:withEvent:
+ setStatusBar:
+ setOrientation:animationParameters:
+ orientation
+ _shouldZoom
+ _updateTransformLayerForClassicPresentation
+ _disableGroupOpacity
+ _isStatusBarWindow
+ _disableViewScaling
+ _rotate
+ setCornersHidden:animationParameters:
+ setTopCornerStyle:topCornersOffset:bottomCornerStyle:animationParameters:
- initWithFrame:
- dealloc
- hitTest:withEvent:
- setStatusBar:
- setOrientation:animationParameters:
- orientation
- _shouldZoom
- _updateTransformLayerForClassicPresentation
- _disableGroupOpacity
- _isStatusBarWindow
- _disableViewScaling
- _rotate
- setCornersHidden:animationParameters:
- setTopCornerStyle:topCornersOffset:bottomCornerStyle:animationParameters:
@end
