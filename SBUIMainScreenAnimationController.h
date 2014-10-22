@interface SBUIMainScreenAnimationController : SBUIAnimationController
{
	BOOL _needsToClearBulletinWindowOrientation;
}

+ _noteAnimationDidCommit:withDuration:afterDelay:
+ initWithActivatingApp:deactivatingApp:
+ _getTransitionWindow
+ _cleanupAnimation
+ _dismissBannerAnimated:
+ _removeWallpaperAnimationPriorityWithFactory:
+ _shouldDismissBanner
+ __startAnimation
+ _clearBulletinWindowOverrideOrientationIfNecessary
+ dealloc
+ beginAnimation
- _noteAnimationDidCommit:withDuration:afterDelay:
- initWithActivatingApp:deactivatingApp:
- _getTransitionWindow
- _cleanupAnimation
- _dismissBannerAnimated:
- _removeWallpaperAnimationPriorityWithFactory:
- _shouldDismissBanner
- __startAnimation
- _clearBulletinWindowOverrideOrientationIfNecessary
- dealloc
- beginAnimation
@end
