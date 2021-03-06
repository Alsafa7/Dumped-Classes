@interface MPDetailScrubController : NSObject
{
	BOOL _didBeginTracking;
	BOOL _needsCommit;
	float _accumulatedDelta;
	struct _previousLocationInView;
	struct _beginLocationInView;
	struct _lastCommittedLocationInView;
	float _currentValue;
	BOOL _detailedScrubbingEnabled;
	BOOL _isTracking;
	id _scrubbingControl;
	id _delegate;
	double _duration;
	double _scrubbingVerticalRange;
	long long _currentScrubSpeed;
}

+ initWithScrubbingControl:
+ setDetailedScrubbingEnabled:
+ detailedScrubbingEnabled
+ durationAllowsForDetailedScrubbing
+ scaleForVerticalPosition:
+ currentScrubSpeed
+ _beginScrubbing
+ _minimumScale
+ _scaleForIdealValueForVerticalPosition:
+ _commitValue:
+ _endScrubbing
+ scrubbingControl
+ setScrubbingControl:
+ scrubbingVerticalRange
+ setScrubbingVerticalRange:
+ setDelegate:
+ init
+ delegate
+ duration
+ setDuration:
+ isTracking
+ cancelTrackingWithEvent:
+ beginTrackingWithTouch:withEvent:
+ continueTrackingWithTouch:withEvent:
+ endTrackingWithTouch:withEvent:
+ .cxx_destruct
- initWithScrubbingControl:
- setDetailedScrubbingEnabled:
- detailedScrubbingEnabled
- durationAllowsForDetailedScrubbing
- scaleForVerticalPosition:
- currentScrubSpeed
- _beginScrubbing
- _minimumScale
- _scaleForIdealValueForVerticalPosition:
- _commitValue:
- _endScrubbing
- scrubbingControl
- setScrubbingControl:
- scrubbingVerticalRange
- setScrubbingVerticalRange:
- setDelegate:
- init
- delegate
- duration
- setDuration:
- isTracking
- cancelTrackingWithEvent:
- beginTrackingWithTouch:withEvent:
- continueTrackingWithTouch:withEvent:
- endTrackingWithTouch:withEvent:
- .cxx_destruct
@end
