@interface SBAppSliderScrollingViewController : UIViewController
{
	id _items;
	id _scrollView;
	BOOL _dragMaster;
	BOOL _preventScroll;
	id _tapGesture;
	id _stopScrollingGesture;
	long long _layoutOrientation;
	id _scrollDoneBlock;
	id _delegate;
}

@end
