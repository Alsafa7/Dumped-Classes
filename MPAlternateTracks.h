@interface MPAlternateTracks : NSObject
{
	id _item;
	id _alternateTracks;
	id _trackChangeDictionary;
	BOOL _disableAlternateTextTrackRendering;
	id _legibleOutput;
	id _currentTextTrack;
	id _outOfBandTextTracks;
}

+ outOfBandTextTracks
+ setOutOfBandTextTracks:
+ disableAlternateTextTrackRendering
+ setDisableAlternateTextTrackRendering:
+ enableLegibleOutputIfNecessary
+ _suppressAVFSubtitleRendering
+ _currentTextTrackAccordingToAVF
+ tracksForType:
+ indexOfCurrentTrackForType:
+ currentTrackForType:
+ _keyForTrackType:
+ beginTrackChanges
+ commitTrackChanges
+ reloadDataWithChangedCaptionDisplayType:
+ legibleOutput:didOutputAttributedStrings:nativeSampleBuffers:forItemTime:
+ initWithItem:
+ selectedAlternateTextTrack
+ setSelectedAlternateTextTrack:
+ setTrack:forType:
+ hasTracksForTypes:
+ trackCountForTypes:
+ reloadData
+ isLoaded
+ .cxx_destruct
- outOfBandTextTracks
- setOutOfBandTextTracks:
- disableAlternateTextTrackRendering
- setDisableAlternateTextTrackRendering:
- enableLegibleOutputIfNecessary
- _suppressAVFSubtitleRendering
- _currentTextTrackAccordingToAVF
- tracksForType:
- indexOfCurrentTrackForType:
- currentTrackForType:
- _keyForTrackType:
- beginTrackChanges
- commitTrackChanges
- reloadDataWithChangedCaptionDisplayType:
- legibleOutput:didOutputAttributedStrings:nativeSampleBuffers:forItemTime:
- initWithItem:
- selectedAlternateTextTrack
- setSelectedAlternateTextTrack:
- setTrack:forType:
- hasTracksForTypes:
- trackCountForTypes:
- reloadData
- isLoaded
- .cxx_destruct
@end
