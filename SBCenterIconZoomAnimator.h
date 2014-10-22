@interface SBCenterIconZoomAnimator : SBIconZoomAnimator
{
	id _zoomView;
	double _iconZoomedZ;
	double _centerRow;
	double _centerCol;
	struct _cameraPosition;
}

+ _prepareAnimation
+ iconListView:wouldHaveMovedIcon:
+ iconListViewLayoutInvalidated:
+ _cleanupAnimation
+ initWithFolderController:
+ _setAnimationFraction:
+ _numberOfSignificantAnimations
+ _animateToFraction:afterDelay:withSharedCompletion:
+ _calculateCentersAndCameraPosition
+ _positionView:forIcon:
+ _iconZoomDelay
+ _animationFactoryForIcon:
+ _animationFactoryForDock
+ zoomView
+ dealloc
+ cameraPosition
- _prepareAnimation
- iconListView:wouldHaveMovedIcon:
- iconListViewLayoutInvalidated:
- _cleanupAnimation
- initWithFolderController:
- _setAnimationFraction:
- _numberOfSignificantAnimations
- _animateToFraction:afterDelay:withSharedCompletion:
- _calculateCentersAndCameraPosition
- _positionView:forIcon:
- _iconZoomDelay
- _animationFactoryForIcon:
- _animationFactoryForDock
- zoomView
- dealloc
- cameraPosition
@end
