@interface _UIModalItemsPresentingViewController : UIViewController
{
	id _items;
	id _itemsViews;
	id _occludedWindows;
	id _backgroundView;
	id _currentItem;
	id _currentItemView;
	id _dimmingView;
	struct _keyboardFrame;
	double _keyboardHeight;
	BOOL _isInTransition;
	id _itemBeingPresented;
	id _itemBeingDismissed;
	id _rotationDelegate;
	id _itemsTransitionCompletion;
}

@end
