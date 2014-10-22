@interface MPAVControllerToAggregateDCommunicator : NSObject
{
	id _item;
	usigned long long _lastMediaType;
	double _playbackStartTime;
	BOOL _playbackStartTimeIsValid;
}

+ _handlePlaybackStateChangedNotification:
+ _handleItemChangedNotification:
+ _handleItemTypeAvailableNotification:
+ _stopPlaybackTimer
+ _updateLastMediaTypeForItem
+ dealloc
+ init
+ _startPlaybackTimer
+ .cxx_destruct
- _handlePlaybackStateChangedNotification:
- _handleItemChangedNotification:
- _handleItemTypeAvailableNotification:
- _stopPlaybackTimer
- _updateLastMediaTypeForItem
- dealloc
- init
- _startPlaybackTimer
- .cxx_destruct
@end
