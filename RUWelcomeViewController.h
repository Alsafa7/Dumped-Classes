@interface RUWelcomeViewController : UIViewController
{
	id _activityIndicatorView;
	id _displayLink;
	double _lastTimestamp;
	id _learnMoreButton;
	id _loadingLabel;
	id _scrollingStackCollectionView;
	id _signInButton;
	id _signInViewController;
	id _termsViewController;
	id _ticker;
	id _titleLabel;
	BOOL _displayingLoading;
	id _delegate;
}

@end
