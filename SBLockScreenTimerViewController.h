@interface SBLockScreenTimerViewController : UIViewController
{
	BOOL _enabled;
	id _updateTimer;
	id _endDate;
	id _observer;
	id _delegate;
	id _timerBulletin;
}

@end
