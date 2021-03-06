@interface PCSimpleTimer : NSObject
{
	double _fireTime;
	double _startTime;
	double _lastUpdateTime;
	BOOL _triggerOnGMTChange;
	BOOL _disableSystemWaking;
	id _scheduledWakeDate;
	id _serviceIdentifier;
	id _target;
	SEL _selector;
	id _userInfo;
	id _preventSleepTimer;
	id _fireTimer;
	BOOL _sleepIsImminent;
	unsigned int _powerAssertionID;
	id _timeChangeSource;
	id _timerRunLoop;
	id _timerMode;
	int _significantTimeChangeToken;
	pointer _queue;
}

+ initWithFireDate:serviceIdentifier:target:selector:userInfo:
+ scheduleInRunLoop:
+ dealloc
+ debugDescription
+ invalidate
+ isValid
+ userInfo
+ initWithTimeInterval:serviceIdentifier:target:selector:userInfo:
+ setDisableSystemWaking:
+ loggingIdentifier
+ _updateTimers
+ scheduleInRunLoop:inMode:
+ _fireTimerFired
+ initWithAbsoluteTime:serviceIdentifier:target:selector:userInfo:triggerOnGMTChange:
+ firingIsImminent
+ updateFireTime:triggerOnGMTChange:
+ disableSystemWaking
+ _scheduleTimer
+ _preventSleepFired
+ _setPowerMonitoringEnabled:
+ _setSignificantTimeChangeMonitoringEnabled:
+ _significantTimeChange
+ scheduleInQueue:
+ _getTimerRunLoop
+ _getTimerMode
+ _performBlockOnQueue:
+ _powerNotificationSleepIsNotImminent
+ _powerNotificationSleepIsImminent
- initWithFireDate:serviceIdentifier:target:selector:userInfo:
- scheduleInRunLoop:
- dealloc
- debugDescription
- invalidate
- isValid
- userInfo
- initWithTimeInterval:serviceIdentifier:target:selector:userInfo:
- setDisableSystemWaking:
- loggingIdentifier
- _updateTimers
- scheduleInRunLoop:inMode:
- _fireTimerFired
- initWithAbsoluteTime:serviceIdentifier:target:selector:userInfo:triggerOnGMTChange:
- firingIsImminent
- updateFireTime:triggerOnGMTChange:
- disableSystemWaking
- _scheduleTimer
- _preventSleepFired
- _setPowerMonitoringEnabled:
- _setSignificantTimeChangeMonitoringEnabled:
- _significantTimeChange
- scheduleInQueue:
- _getTimerRunLoop
- _getTimerMode
- _performBlockOnQueue:
- _powerNotificationSleepIsNotImminent
- _powerNotificationSleepIsImminent
@end
