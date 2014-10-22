@interface SBScaleIconZoomAnimator : SBIconZoomAnimator
{
	struct _iconScootch;
	double _dockStretch;
	struct _dockListCenterCoordinate;
	struct _mainListCenterCoordinate;
	double _naturalVisualAltitude;
	id _scalingView;
	id _targetIcon;
	double _zoomScale;
}

+ _prepareAnimation
+ _cleanupAnimation
+ _zoomedFrame
+ _zoomedIconCenter
+ _calculateIconScootch
+ _setAnimationFraction:
+ _applyZoomFraction:
+ _applyOuterFadeFraction:
+ _numberOfSignificantAnimations
+ _animateToFraction:afterDelay:withSharedCompletion:
+ _scootchForIcon:inDock:
+ targetIconView
+ _zoomedVisualAltitude
+ initWithFolderController:targetIcon:
+ targetIcon
+ dealloc
+ zoomScale
- _prepareAnimation
- _cleanupAnimation
- _zoomedFrame
- _zoomedIconCenter
- _calculateIconScootch
- _setAnimationFraction:
- _applyZoomFraction:
- _applyOuterFadeFraction:
- _numberOfSignificantAnimations
- _animateToFraction:afterDelay:withSharedCompletion:
- _scootchForIcon:inDock:
- targetIconView
- _zoomedVisualAltitude
- initWithFolderController:targetIcon:
- targetIcon
- dealloc
- zoomScale
@end
