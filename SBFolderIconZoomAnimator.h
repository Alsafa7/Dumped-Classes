@interface SBFolderIconZoomAnimator : SBScaleIconZoomAnimator
{
	id _innerFolderController;
	id _innerFolderView;
	id _innerZoomAnimator;
}

+ _prepareAnimation
+ _cleanupAnimation
+ _zoomedFrame
+ _setAnimationFraction:
+ _numberOfSignificantAnimations
+ _animateToFraction:afterDelay:withSharedCompletion:
+ initWithOuterController:innerController:folderIcon:
+ dealloc
- _prepareAnimation
- _cleanupAnimation
- _zoomedFrame
- _setAnimationFraction:
- _numberOfSignificantAnimations
- _animateToFraction:afterDelay:withSharedCompletion:
- initWithOuterController:innerController:folderIcon:
- dealloc
@end
