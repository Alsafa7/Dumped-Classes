@interface MusicRadioViewController : MPUDataSourceViewController
{
	id _authenticationResponseHandlers;
	id _deferredDeselectCompletionHandler;
	long long _deselectDeferralCount;
	id _dispatchSourceImpressionTimersByStation;
	id _editButton;
	id _featuredStations;
	id _featuredStationsCollectionView;
	id _featuredStationsLabel;
	id _freeloaderAlertView;
	double _highlightedItemTimestamp;
	id _initialArtworkLoadGroup;
	id _heartbeatInvalidTimerSource;
	BOOL _isVisible;
	BOOL _isVisuallyEngaged;
	id _myStations;
	id _myStationsCollectionView;
	id _myStationsLabel;
	id _placeholderView;
	id _prospectiveStation;
	id _scrollView;
	id _signInViewController;
	id _snapshotView;
	id _welcomeViewController;
}

@end
