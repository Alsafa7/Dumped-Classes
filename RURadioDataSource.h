@interface RURadioDataSource : NSObject
{
	id _delegate;
	id _pushNotificationController;
	long long _stationCountToRefresh;
	id _stationsBeingRefreshed;
	id _stations;
}

@end
