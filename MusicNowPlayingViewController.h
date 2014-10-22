@interface MusicNowPlayingViewController : UIViewController
{
	BOOL _canMarqueeText;
	id _contentView;
	id _contentViewController;
	id _effectiveNavigationItem;
	BOOL _hasProperApplicationStateForWantingVideoLayer;
	BOOL _hasVisibilityForWantingVideoLayer;
	id _infoButtonContainerView;
	BOOL _isDetailScrubbing;
	BOOL _isShowingRatings;
	id _item;
	id _lyricsView;
	id _padFakeNavigationBar;
	id _playbackControlsView;
	id _previousNavigationItem;
	id _ratingControl;
	id _repeatActionSheet;
	id _stationActionsPopoverController;
	id _stationActionsViewController;
	id _stationActionsPresentationView;
	BOOL _supportsCoverFlow;
	id _tapGestureRecognizer;
	id _titlesView;
	id _trackActionsModalItem;
	id _trackActionsPopoverController;
	id _trackActionsViewController;
	id _trackDownloadView;
	BOOL _visuallyEngagedAds;
	BOOL _wantsVideoLayer;
}

@end
