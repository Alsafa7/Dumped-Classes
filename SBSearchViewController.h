@interface SBSearchViewController : UIViewController
{
	id _searchHeader;
	id _tableBackdrop;
	id _tableView;
	id _noResultsLabel;
	id _touchStealingView;
	id _tapRecognizer;
	id _panRecognizer;
	pointer _addressBook;
	Array _placeHolderImages;
	double _lastContentOffsetY;
	BOOL _scrollDown;
	BOOL _hasShownBackgroundSinceLastClear;
	id _fadeOutCompletionBlock;
	BOOL _fadingOut;
	BOOL _visible;
}

@end
