@interface SUStorePageViewController : SUViewController
{
	id _activeChildViewController;
	pointer _allowedInterfaceOrientations;
	double _expirationTime;
	long long _pageType;
	id _pendingChildViewController;
	id _scriptUserInfo;
	id _lastValidProtocol;
	id _navigationMenuPopover;
	id _navigationMenuViewController;
	id _searchFieldController;
	BOOL _canMoveToOverlay;
	BOOL _externalRequest;
	BOOL _loadingForSectionChange;
	BOOL _loadsWhenHidden;
	BOOL _reloadOnAppear;
	BOOL _reloadsWhenCacheExpired;
	id _authContext;
	id _urlRequestProperties;
	BOOL _needsAuthentication;
	long long _activeSectionIndex;
	id _sectionsGroup;
	id _segmentedControl;
	id _backdropView;
	id _delegate;
	BOOL _lastLoadDidFail;
	id _loadBlock;
	id _performanceMetrics;
	id _showcaseDictionary;
	BOOL _useWebViewFastPath;
}

@end
