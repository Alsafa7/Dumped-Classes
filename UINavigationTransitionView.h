@interface UINavigationTransitionView : UIView
{
	id _delegate;
	id _fromView;
	id _toView;
	long long _transition;
	id _firstResponderToRestore;
	id _originalWindow;
	double _fromViewAlpha;
	bit[1] _isTransitioning;
	bit[1] _popoverWillCleanUpNavigationTransition;
	bit[1] _usesRoundedCorners;
}

+ initWithFrame:
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ setDelegate:
+ delegate
+ transition:fromView:toView:
+ isTransitioning
+ _isTransitioningFromView:
+ transition:toView:
+ fromView
+ setUsesRoundedCorners:
+ usesRoundedCorners
+ _navigationTransitionDidStop
+ _cleanupTransition
+ _notifyDelegateTransitionDidStopWithContext:
+ setPopoverWillCleanUpNavigationTransition:
+ popoverWillCleanUpNavigationTransition
+ _cleanupTransitionFromPopover
- initWithFrame:
- dealloc
- initWithCoder:
- encodeWithCoder:
- setDelegate:
- delegate
- transition:fromView:toView:
- isTransitioning
- _isTransitioningFromView:
- transition:toView:
- fromView
- setUsesRoundedCorners:
- usesRoundedCorners
- _navigationTransitionDidStop
- _cleanupTransition
- _notifyDelegateTransitionDidStopWithContext:
- setPopoverWillCleanUpNavigationTransition:
- popoverWillCleanUpNavigationTransition
- _cleanupTransitionFromPopover
@end
