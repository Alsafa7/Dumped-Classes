@interface SBScreenFadeAnimationController : NSObject
{
	id _fadeWindow;
	id _overlayView;
	id _dateView;
	double _originalDateLeftEdge;
	double _originalDateBottomEdge;
	double _finalTimeAlpha;
	double _finalDateAlpha;
	double _finalStatusBarAlpha;
	id _lockScreenView;
	BOOL _preparingToAnimateFadeIn;
	BOOL _animatingForFadeIn;
	BOOL _animatingForFadeOut;
	int _animationToken;
	id _fadeInCompletionBlock;
	id _fadeOutCompletionBlock;
	BOOL _animatingDateTime;
	BOOL _animatingWallpaper;
	BOOL _animatingOverlay;
	BOOL _animatingContent;
	id _settings;
}

+ isFadeOutAnimationInProgress
+ isFadeInAnimationInProgress
+ fadeOutWithCompletion:
+ _blankScreenStateChanged
+ _mediaControlsDidShow
+ _assistantVisibilityChanged
+ _cleanupAnimationWhenInterruptingFadeIn:
+ _runCompletionHandlerForFadeIn:
+ _createFadeWindowForFadeIn:
+ _setRelevantLockScreenViewsHidden:
+ _adjustViewsForCurrentOrientation
+ _startFadeInIfNecessary
+ _startFadeAnimationsForFadeIn:
+ setDateViewAlpha:
+ _handleAnimationCompletionIfNecessaryForFadeIn:
+ fadeInAnimationDuration
+ fadeOutAnimationDuration
+ updateDateFrameHorizontalOffset:verticalOffset:
+ prepareToFadeInWithTimeAlpha:dateAlpha:statusBarAlpha:lockScreenView:existingDateView:completion:
+ hideDate
+ dealloc
+ init
+ setTextColor:
+ setLegibilitySettings:
- isFadeOutAnimationInProgress
- isFadeInAnimationInProgress
- fadeOutWithCompletion:
- _blankScreenStateChanged
- _mediaControlsDidShow
- _assistantVisibilityChanged
- _cleanupAnimationWhenInterruptingFadeIn:
- _runCompletionHandlerForFadeIn:
- _createFadeWindowForFadeIn:
- _setRelevantLockScreenViewsHidden:
- _adjustViewsForCurrentOrientation
- _startFadeInIfNecessary
- _startFadeAnimationsForFadeIn:
- setDateViewAlpha:
- _handleAnimationCompletionIfNecessaryForFadeIn:
- fadeInAnimationDuration
- fadeOutAnimationDuration
- updateDateFrameHorizontalOffset:verticalOffset:
- prepareToFadeInWithTimeAlpha:dateAlpha:statusBarAlpha:lockScreenView:existingDateView:completion:
- hideDate
- dealloc
- init
- setTextColor:
- setLegibilitySettings:
@end
