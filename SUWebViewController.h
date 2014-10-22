@interface SUWebViewController : SUViewController
{
	id _webView;
	id _authenticationContext;
	id _delayedNavigationItem;
	BOOL _hasEverAppeared;
	long long _lastKnownOrientation;
	id _loadBlock;
	id _mescalSession;
	id _objectPool;
	id _performanceMetrics;
	long long _scheduledOrientation;
	id _showcaseViewController;
	id _storePageProtocol;
	long long _style;
	id _url;
	BOOL _viewIsReady;
	id _webViewManager;
}

@end
