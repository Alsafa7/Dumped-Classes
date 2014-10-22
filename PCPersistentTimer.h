@interface PCPersistentTimer : NSObject
{
	double _fireTime;
	double _startTime;
	usigned long long _guidancePriority;
	double _minimumEarlyFireProportion;
	BOOL _triggerOnGMTChange;
	BOOL _disableSystemWaking;
	id _serviceIdentifier;
	id _target;
	SEL _selector;
	id _userInfo;
	id _simpleTimer;
}

+ initWithFireDate:serviceIdentifier:target:selector:userInfo:
+ setMinimumEarlyFireProportion:
+ scheduleInRunLoop:
+ fireTime
+ dealloc
+ debugDescription
+ invalidate
+ isValid
+ userInfo
+ interfaceManagerInternetReachabilityChanged:
+ interfaceManagerWWANInterfaceChangedPowerState:
+ interfaceManagerWWANInterfaceStatusChanged:
+ initWithTimeInterval:serviceIdentifier:target:selector:userInfo:
+ setDisableSystemWaking:
+ loggingIdentifier
+ _initWithAbsoluteTime:serviceIdentifier:guidancePriority:target:selector:userInfo:triggerOnGMTChange:
+ _updateTimers
+ scheduleInRunLoop:inMode:
+ _fireTimerFired
+ firingIsImminent
+ _nextForcedAlignmentAbsoluteTime
+ _earlyFireTime
+ cutPowerMonitorBatteryConnectedStateDidChange:
+ initWithTimeInterval:serviceIdentifier:guidancePriority:target:selector:userInfo:
+ minimumEarlyFireProportion
+ disableSystemWaking
- initWithFireDate:serviceIdentifier:target:selector:userInfo:
- setMinimumEarlyFireProportion:
- scheduleInRunLoop:
- fireTime
- dealloc
- debugDescription
- invalidate
- isValid
- userInfo
- interfaceManagerInternetReachabilityChanged:
- interfaceManagerWWANInterfaceChangedPowerState:
- interfaceManagerWWANInterfaceStatusChanged:
- initWithTimeInterval:serviceIdentifier:target:selector:userInfo:
- setDisableSystemWaking:
- loggingIdentifier
- _initWithAbsoluteTime:serviceIdentifier:guidancePriority:target:selector:userInfo:triggerOnGMTChange:
- _updateTimers
- scheduleInRunLoop:inMode:
- _fireTimerFired
- firingIsImminent
- _nextForcedAlignmentAbsoluteTime
- _earlyFireTime
- cutPowerMonitorBatteryConnectedStateDidChange:
- initWithTimeInterval:serviceIdentifier:guidancePriority:target:selector:userInfo:
- minimumEarlyFireProportion
- disableSystemWaking
@end
