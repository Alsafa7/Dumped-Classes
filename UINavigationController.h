@interface UINavigationController : UIViewController
{
	id _containerView;
	id _navigationBar;
	Class _navigationBarClass;
	id _toolbar;
	id _navigationTransitionView;
	double _bottomInsetDelta;
	double _statusBarHeightForHideShow;
	id _disappearingViewController;
	id _delegate;
	long long _savedNavBarStyleBeforeSheet;
	long long _savedToolBarStyleBeforeSheet;
	id _backGestureRecognizer;
	id _topPalette;
	id _freePalette;
	id _transitioningTopPalette;
	struct _navigationControllerFlags;
	BOOL _interactiveTransition;
	BOOL __usingBuiltinAnimator;
	BOOL __barAnimationWasCancelled;
	Class _toolbarClass;
	double _customNavigationTransitionDuration;
	id __transitionController;
	id __cachedTransitionController;
	id __interactionController;
	id __cachedInteractionController;
	id __toolbarAnimationId;
	id __navbarAnimationId;
	id __updateNavigationBarHandler;
	long long _builtinTransitionStyle;
	double _builtinTransitionGap;
}

@end
