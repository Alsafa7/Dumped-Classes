@interface WorldClockCellView : UIView
{
	id _timeZone;
	long long _nowInMinutes;
	BOOL _editing;
	BOOL _started;
	id _delegate;
	long long _style;
	id _analogClock;
	id _digitalClock;
	id _nameLabel;
	id _combinedLabel;
}

+ nameLabel
+ initWithFrame:
+ dealloc
+ setDelegate:
+ layoutSubviews
+ delegate
+ setStyle:
+ setTimeZone:
+ style
+ setStyle:animated:
+ setEditing:animated:
+ start
+ updateInterval
+ stop
+ started
+ coarseUpdateInterval
+ significantTimeChange:
+ localeChange:
+ stringFromDate:withTimezoneOffset:
+ updateTimeContinuously:
+ runMode
+ analogClock
+ digitalClock
+ combinedLabel
+ updateTime
- nameLabel
- initWithFrame:
- dealloc
- setDelegate:
- layoutSubviews
- delegate
- setStyle:
- setTimeZone:
- style
- setStyle:animated:
- setEditing:animated:
- start
- updateInterval
- stop
- started
- coarseUpdateInterval
- significantTimeChange:
- localeChange:
- stringFromDate:withTimezoneOffset:
- updateTimeContinuously:
- runMode
- analogClock
- digitalClock
- combinedLabel
- updateTime
@end
