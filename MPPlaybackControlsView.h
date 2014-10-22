@interface MPPlaybackControlsView : UIView
{
	id _activityIndicator;
	id _delegate;
	id _fastFowardButton;
	id _fastFowardButtonBezel;
	id _geniusButton;
	id _item;
	id _markerForProgressControlDuration;
	id _mailButton;
	id _playbackSpeedButton;
	id _progressControl;
	id _radioButton;
	id _radioHistoryButton;
	id _radioShareButton;
	id _trackInfoButton;
	id _repeatButton;
	id _rewindButton;
	id _rewindButtonBezel;
	id _rewindOpacityAnimation;
	id _player;
	double _progressOffset;
	float _seekedToValue;
	id _shuffleButton;
	double _tickInterval;
	id _trackInfoLabel;
	usigned long long _visibleParts;
	bit[1] _wantsTick;
	bit[1] _geniusButtonDisabled;
	bit[1] _fastForwardAndRewindButtonDisabled;
	bit[1] _playbackSpeedButtonDisabled;
	bit[1] _mailButtonDisabled;
	bit[1] _mailButtonHidden;
	bit[1] _useMediaDetailSlider;
	bit[1] _detailScrubbing;
	bit[1] _needsUpdateButtonVisibility;
	BOOL _radioButtonHidden;
	usigned long long _disabledParts;
}

+ _timeDidJumpNotification:
+ setItem:
+ visibleParts
+ setVisibleParts:
+ setCurrentTime:
+ setDisabledParts:
+ _validityChangedNotification:
+ _tickNotification:
+ repeatType
+ shuffleType
+ crossedTimeMakerWithEvent:
+ _applicationDidEnterBackgroundNotification:
+ _applicationWillEnterForegroundNotification:
+ registerForPlayerNotifications
+ unregisterForPlayerNotifications
+ stopTicking
+ startTicking
+ disabledParts
+ buttonClass
+ newButtonForPart:
+ localizedScrubSpeedText
+ detailSliderTrackingDidBegin:
+ detailSliderTrackingDidEnd:
+ detailSliderTrackingDidCancel:
+ detailSlider:didChangeValue:
+ detailSlider:didChangeScrubSpeed:
+ displayablePartsInPartMask:
+ reloadControls
+ _setVisiblePartsNeedReload
+ _isGeniusEnabledDidChangeNotification:
+ _updateButtonVisibility
+ _fastForwardButton:
+ _rewindButton:
+ _geniusButton:
+ geniusButtonImageForControlState:
+ _mailButton:
+ mailButtonImage
+ _playbackSpeedButton:
+ _radioButton:
+ _radioHistoryButton:
+ _radioShareButton:
+ _trackInfoButton:
+ _repeatButton:
+ repeatButtonImage
+ _shuffleButton:
+ shuffleButtonImage
+ progressBarClipsToChapterDuration
+ _currentDisplayTime
+ _updatedDisplayDurationForTime:preciseChapterMarkers:
+ _resetGeniusButtonImages
+ detailScrubbingHidesControls
+ updateForEndOfDetailScrubbing
+ shuffleIsOn
+ _setCurrentTime:duration:
+ _contentsChangedNotification:
+ _playbackModeDidChangeNotification:
+ shouldOverrideProgressTimeLabelStyle
+ _handleGeniusButtonClick
+ _updateForPlaybackSpeed
+ handleChangeToRepeatType:
+ _addOpacityAnimationToBezelView:reversed:
+ handleChangeToShuffleType:
+ resetDetailSlider:
+ reloadView
+ newButtonBezelViewForPart:
+ newTrackInfoLabel
+ newProgressIndicator
+ hideGeniusButton
+ playbackSpeedButtonImageForPlaybackSpeed:
+ playbackSpeedTitleForPlaybackSpeed:
+ reloadButtonVisibility
+ isScrubbing
+ _changeGeniusImageToPressedImage:
+ _changeGeniusImageToNormalImage:
+ initWithFrame:
+ dealloc
+ setDelegate:
+ pointInside:withEvent:
+ layoutSubviews
+ delegate
+ animationDidStop:finished:
+ didMoveToSuperview
+ item
+ buttonType
+ .cxx_destruct
+ player
+ setPlayer:
- _timeDidJumpNotification:
- setItem:
- visibleParts
- setVisibleParts:
- setCurrentTime:
- setDisabledParts:
- _validityChangedNotification:
- _tickNotification:
- repeatType
- shuffleType
- crossedTimeMakerWithEvent:
- _applicationDidEnterBackgroundNotification:
- _applicationWillEnterForegroundNotification:
- registerForPlayerNotifications
- unregisterForPlayerNotifications
- stopTicking
- startTicking
- disabledParts
- buttonClass
- newButtonForPart:
- localizedScrubSpeedText
- detailSliderTrackingDidBegin:
- detailSliderTrackingDidEnd:
- detailSliderTrackingDidCancel:
- detailSlider:didChangeValue:
- detailSlider:didChangeScrubSpeed:
- displayablePartsInPartMask:
- reloadControls
- _setVisiblePartsNeedReload
- _isGeniusEnabledDidChangeNotification:
- _updateButtonVisibility
- _fastForwardButton:
- _rewindButton:
- _geniusButton:
- geniusButtonImageForControlState:
- _mailButton:
- mailButtonImage
- _playbackSpeedButton:
- _radioButton:
- _radioHistoryButton:
- _radioShareButton:
- _trackInfoButton:
- _repeatButton:
- repeatButtonImage
- _shuffleButton:
- shuffleButtonImage
- progressBarClipsToChapterDuration
- _currentDisplayTime
- _updatedDisplayDurationForTime:preciseChapterMarkers:
- _resetGeniusButtonImages
- detailScrubbingHidesControls
- updateForEndOfDetailScrubbing
- shuffleIsOn
- _setCurrentTime:duration:
- _contentsChangedNotification:
- _playbackModeDidChangeNotification:
- shouldOverrideProgressTimeLabelStyle
- _handleGeniusButtonClick
- _updateForPlaybackSpeed
- handleChangeToRepeatType:
- _addOpacityAnimationToBezelView:reversed:
- handleChangeToShuffleType:
- resetDetailSlider:
- reloadView
- newButtonBezelViewForPart:
- newTrackInfoLabel
- newProgressIndicator
- hideGeniusButton
- playbackSpeedButtonImageForPlaybackSpeed:
- playbackSpeedTitleForPlaybackSpeed:
- reloadButtonVisibility
- isScrubbing
- _changeGeniusImageToPressedImage:
- _changeGeniusImageToNormalImage:
- initWithFrame:
- dealloc
- setDelegate:
- pointInside:withEvent:
- layoutSubviews
- delegate
- animationDidStop:finished:
- didMoveToSuperview
- item
- buttonType
- .cxx_destruct
- player
- setPlayer:
@end
