@interface SBCrossfadeIconZoomAnimator : SBScaleIconZoomAnimator
{
	id _crossfadeView;
	BOOL _performsTrueCrossfade;
	BOOL _masksCorners;
}

+ _prepareAnimation
+ setMasksCorners:
+ masksCorners
+ performsTrueCrossfade
+ setPerformsTrueCrossfade:
+ _cleanupAnimation
+ _zoomedFrame
+ _zoomedIconCenter
+ _setAnimationFraction:
+ _numberOfSignificantAnimations
+ _animateToFraction:afterDelay:withSharedCompletion:
+ initWithFolderController:crossfadeView:icon:
+ _delayedForRotation
+ _assertCrossfadeViewSizeIfNecessary
+ dealloc
- _prepareAnimation
- setMasksCorners:
- masksCorners
- performsTrueCrossfade
- setPerformsTrueCrossfade:
- _cleanupAnimation
- _zoomedFrame
- _zoomedIconCenter
- _setAnimationFraction:
- _numberOfSignificantAnimations
- _animateToFraction:afterDelay:withSharedCompletion:
- initWithFolderController:crossfadeView:icon:
- _delayedForRotation
- _assertCrossfadeViewSizeIfNecessary
- dealloc
@end
