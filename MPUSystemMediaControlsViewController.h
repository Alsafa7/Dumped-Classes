@interface MPUSystemMediaControlsViewController : UIViewController
{
	id _nowPlayingController;
	id _audioDeviceController;
	BOOL _wantsToLaunchNowPlayingApp;
	unsigned int _runningLongPressCommand;
	id _mediaControlsView;
	id _artworkImageView;
	id _nowPlayingInfoForPresentedTrackActions;
	id _trackActionsPopoverController;
	id _trackActionsModalItem;
	id _audioCategoryForDisabledHUD;
	id _scrubberCommitTimer;
	double _scrubbedTimeDestination;
	double _lastDurationFromUpdate;
	BOOL _persistentUpdatesEnabled;
	long long _style;
	id _delegate;
}

@end
