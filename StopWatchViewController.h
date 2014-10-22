@interface StopWatchViewController : UIViewController
{
	id _lapControls;
	id _padControls;
	id _lapTimeTable;
	id _displayLink;
	id _startTime;
	double _offset;
	double _currentInterval;
	double _previousLapsTotalInterval;
	id _laps;
	BOOL _isTimerRunning;
	id _restoreIdleTimerTimer;
	int _mode;
}

@end
