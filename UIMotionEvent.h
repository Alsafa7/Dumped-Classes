@interface UIMotionEvent : UIInternalEvent
{
	id _motionAccelerometer;
	long long _subtype;
	int _shakeState;
	long long _stateMachineState;
	double _shakeStartTime;
	double _lastMovementTime;
	double _highLevelTime;
	double _lowEndTimeout;
	id _idleTimer;
	BOOL _sentMotionBegan;
	Array _lowPassState;
	usigned long long _lowPassStateIndex;
	usigned long long _highPassStateIndex;
	Array _highPassState;
	int notifyToken;
}

+ dealloc
+ description
+ _init
+ _isDetectingMotionEvents
+ _setSubtype:
+ setShakeState:
+ type
+ _windows
+ subtype
+ _sendEventToResponder:
+ _shakeState
+ _enablePeakDetectionIfNecessary
+ _willResume
+ _willSuspend
+ _updateAccelerometerEnabled
+ shakeState
+ _detectWhenNotActive
+ _idleTimerFired
+ _resetLowPassState
+ _accelerometerDidDetectMovementWithTimestamp:
+ _determineShakeLevelX:y:z:currentState:
+ _feedStateMachine:currentState:timestamp:
+ _highPass:
+ _lowPass:
+ accelerometer:didAccelerateWithTimeStamp:x:y:z:eventType:
- dealloc
- description
- _init
- _isDetectingMotionEvents
- _setSubtype:
- setShakeState:
- type
- _windows
- subtype
- _sendEventToResponder:
- _shakeState
- _enablePeakDetectionIfNecessary
- _willResume
- _willSuspend
- _updateAccelerometerEnabled
- shakeState
- _detectWhenNotActive
- _idleTimerFired
- _resetLowPassState
- _accelerometerDidDetectMovementWithTimestamp:
- _determineShakeLevelX:y:z:currentState:
- _feedStateMachine:currentState:timestamp:
- _highPass:
- _lowPass:
- accelerometer:didAccelerateWithTimeStamp:x:y:z:eventType:
@end
