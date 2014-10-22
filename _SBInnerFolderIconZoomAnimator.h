@interface _SBInnerFolderIconZoomAnimator : SBIconZoomAnimator
{
	id _folderView;
	id _folderIconView;
	struct _folderIconViewScaleTransform;
}

+ _prepareAnimation
+ _cleanupAnimation
+ _setAnimationFraction:
+ _numberOfSignificantAnimations
+ _animateToFraction:afterDelay:withSharedCompletion:
+ initWithFolderController:iconView:iconZoomScale:
+ _applyIconCrossfadeForZoomFraction:
+ _applyIconTransformForZoomFraction:
+ _applyFolderFadeForZoomFraction:
+ _calculateZoomedOffset:scale:forIcon:withView:
+ dealloc
- _prepareAnimation
- _cleanupAnimation
- _setAnimationFraction:
- _numberOfSignificantAnimations
- _animateToFraction:afterDelay:withSharedCompletion:
- initWithFolderController:iconView:iconZoomScale:
- _applyIconCrossfadeForZoomFraction:
- _applyIconTransformForZoomFraction:
- _applyFolderFadeForZoomFraction:
- _calculateZoomedOffset:scale:forIcon:withView:
- dealloc
@end
