@interface WorldClockPadViewController : UIViewController
{
	id _addClockNavigationController;
	id _editClocksController;
	id _fullScreenClocksController;
	long long _currentPage;
	long long _addedClockIndex;
	BOOL _networkReachable;
	id _weatherUpdateTimer;
	id _pinchGestureRecognizer;
	id _pinchedIndexPath;
}

@end
