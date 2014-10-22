@interface EKCalendarWidgetViewController : _SBUIWidgetViewController
{
	id _contentView;
	id _debugRefreshButton;
	id _dayView;
	id _eventStore;
	id _eventLoadingQueue;
	id _eventStoreQueue;
	id _eventStoreIdleTimerSource;
	BOOL _needsReload;
	BOOL _viewIsVisible;
	id _loadedEventCollection;
	long long _startHour;
	long long _endHour;
	struct _lastSeenFrame;
	id _noEventsLabel;
}

@end
