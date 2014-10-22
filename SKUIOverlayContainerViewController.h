@interface SKUIOverlayContainerViewController : UIViewController
{
	id _backstopView;
	BOOL _isAdjustingViewsForDismiss;
	long long _selectedViewControllerIndex;
	id _tapGestureRecognizer;
	id _viewControllers;
}

@end
