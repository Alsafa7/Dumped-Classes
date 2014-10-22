@interface SBModeViewController : UIViewController
{
	id _delegate;
	id _selectedViewController;
	id _contentView;
	id _headerView;
	id _modeControl;
	id _leftSwipeGestureRecognizer;
	id _rightSwipeGestureRecognizer;
	id _separator;
	struct _modeViewControllerFlags;
}

@end
