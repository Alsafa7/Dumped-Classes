@interface MPUMediaControlsVolumeView : UIView
{
	id _warningView;
	BOOL _warningIndicatorBlinking;
	id _warningBlinkTimer;
	id _volumeCommitTimer;
	long long _style;
	id _slider;
	id _volumeController;
}

+ _layoutVolumeWarningView
+ _beginBlinkingWarningView
+ _blinkWarningView
+ volumeController:volumeValueDidChange:
+ volumeController:volumeWarningStateDidChange:
+ volumeController:EUVolumeLimitDidChange:
+ volumeController:EUVolumeLimitEnforcedDidChange:
+ initWithFrame:
+ dealloc
+ layoutSubviews
+ sizeThatFits:
+ style
+ initWithStyle:
+ _createVolumeSliderView
+ _volumeSliderBeganChanging:
+ _volumeSliderValueChanged:
+ _volumeSliderStoppedChanging:
+ updateSystemVolumeLevel
+ _stopBlinkingWarningView
+ _stopVolumeCommitTimer
+ _shouldStartBlinkingVolumeWarningIndicator
+ _beginVolumeCommitTimer
+ _commitCurrentVolumeValue
+ _warningTrackImage
+ slider
+ volumeController
+ .cxx_destruct
- _layoutVolumeWarningView
- _beginBlinkingWarningView
- _blinkWarningView
- volumeController:volumeValueDidChange:
- volumeController:volumeWarningStateDidChange:
- volumeController:EUVolumeLimitDidChange:
- volumeController:EUVolumeLimitEnforcedDidChange:
- initWithFrame:
- dealloc
- layoutSubviews
- sizeThatFits:
- style
- initWithStyle:
- _createVolumeSliderView
- _volumeSliderBeganChanging:
- _volumeSliderValueChanged:
- _volumeSliderStoppedChanging:
- updateSystemVolumeLevel
- _stopBlinkingWarningView
- _stopVolumeCommitTimer
- _shouldStartBlinkingVolumeWarningIndicator
- _beginVolumeCommitTimer
- _commitCurrentVolumeValue
- _warningTrackImage
- slider
- volumeController
- .cxx_destruct
@end
