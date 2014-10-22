@interface AVPlayerItemTrack : NSObject
{
	id _playerItemTrack;
}

+ _addLayer:
+ _removeLayer:
+ _figPlaybackItem
+ _audioVolumeCurve
+ _setAudioVolumeCurve:
+ _setAudioTapProcessor:
+ _setAudioTimePitchAlgorithm:
+ _playerItem
+ _initWithFigPlaybackItem:trackID:asset:playerItem:
+ fallbackTrack
+ currentVideoFrameRate
+ trackID
+ assetTrack
+ setLoudnessInfo:
+ loudnessInfo
+ dealloc
+ isEqual:
+ hash
+ description
+ isEnabled
+ setEnabled:
+ finalize
- _addLayer:
- _removeLayer:
- _figPlaybackItem
- _audioVolumeCurve
- _setAudioVolumeCurve:
- _setAudioTapProcessor:
- _setAudioTimePitchAlgorithm:
- _playerItem
- _initWithFigPlaybackItem:trackID:asset:playerItem:
- fallbackTrack
- currentVideoFrameRate
- trackID
- assetTrack
- setLoudnessInfo:
- loudnessInfo
- dealloc
- isEqual:
- hash
- description
- isEnabled
- setEnabled:
- finalize
@end
