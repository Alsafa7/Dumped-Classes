@interface StopwatchPadControls : UIView
{
	double _timeValue;
	id _timeLabel;
	double _currentLapTimeInterval;
	id _currentLapTimeLabel;
	id _middleKeylineView;
	id _bottomKeylineView;
	id _buttonsBackgroundView;
	BOOL _rotating;
	id _controller;
	int _mode;
}

+ handleLocaleChange
+ hostViewWillRotate
+ hostViewDidRotate
+ setCurrentLapTime:
+ _configureAndAddButton:
+ _setControlsBackgroundColor
+ dealloc
+ layoutSubviews
+ target
+ initWithTarget:
+ setMode:
+ mode
+ setTime:
- handleLocaleChange
- hostViewWillRotate
- hostViewDidRotate
- setCurrentLapTime:
- _configureAndAddButton:
- _setControlsBackgroundColor
- dealloc
- layoutSubviews
- target
- initWithTarget:
- setMode:
- mode
- setTime:
@end
