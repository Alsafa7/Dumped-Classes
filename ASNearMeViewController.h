@interface ASNearMeViewController : SKUIViewController
{
	id _allItems;
	BOOL _isMonitoring;
	id _ipadViewController;
	id _iphoneViewController;
	id _itemList;
	id _lastPageEvent;
	id _loadingView;
	id _loadingTimeoutTimer;
	id _locationManager;
	long long _locationTimeoutCount;
	id _locationTimeoutTimer;
	id _lookupRequest;
	id _metricsController;
	id _noResultsView;
	id _optInView;
	id _pageMetricsConfiguration;
	id _refreshControl;
	id _refreshTimer;
}

@end
