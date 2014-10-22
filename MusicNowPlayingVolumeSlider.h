@interface MusicNowPlayingVolumeSlider : MPVolumeSlider
{
	id _maximumTintUsedForTrackImageColor;
	id _minimumTintUsedForTrackImageColor;
}

+ _availableRoutesDidChangeNotification:
+ _newVolumeWarningView
+ dealloc
+ pointInside:withEvent:
+ initWithFrame:style:
+ trackRectForBounds:
+ thumbRectForBounds:trackRect:value:
+ minimumValueImageRectForBounds:
+ maximumValueImageRectForBounds:
+ _updateTrackTintForVolumeControlAvailability
+ _trackImageWithTintColor:
+ .cxx_destruct
- _availableRoutesDidChangeNotification:
- _newVolumeWarningView
- dealloc
- pointInside:withEvent:
- initWithFrame:style:
- trackRectForBounds:
- thumbRectForBounds:trackRect:value:
- minimumValueImageRectForBounds:
- maximumValueImageRectForBounds:
- _updateTrackTintForVolumeControlAvailability
- _trackImageWithTintColor:
- .cxx_destruct
@end
