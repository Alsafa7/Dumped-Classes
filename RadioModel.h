@interface RadioModel : NSObject
{
	id _backgroundCleanupQueue;
	id _backgroundProcessAssertion;
	id _backgroundTaskAccessQueue;
	long long _backgroundTaskCount;
	id _backgroundTaskInvalidateTimerSource;
	id _context;
	BOOL _isBackgroundModel;
	id _model;
	int _modelChangedToken;
	BOOL _modelChangedTokenIsValid;
	int _modelDeletedToken;
	BOOL _modelDeletedTokenIsValid;
	id _stationFetchedResultsController;
	id _stationFetchRequest;
	id _storeCoordinator;
	id _trackHistoriesFetchedResultsController;
	id _trackHistoriesFetchRequest;
	long long _transactionCount;
	id _wishlistedTracksFetchedResultsController;
	id _wishlistedTracksFetchRequest;
}

@end
