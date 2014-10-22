@interface UIAnimator : NSObject
{
	id _animations;
	double _lastUpdateTime;
	Array _heartbeat;
	Array _heartbeatClientCount;
}

+ _addAnimation:withDuration:start:startTime:
+ _startAnimation:withStartTime:
+ _advanceAnimationsOfType:withTimestamp:
+ _TimerHeartbeatCallback:
+ _TVHeartbeatCallback:
+ _LCDHeartbeatCallback:
+ _isRunningAnimation:
+ dealloc
+ removeAnimationsForTarget:ofKind:
+ addAnimation:withDuration:start:
+ stopAnimation:
+ addAnimations:withDuration:start:
+ removeAnimationsForTarget:
+ startAnimation:
+ fractionForAnimation:
- _addAnimation:withDuration:start:startTime:
- _startAnimation:withStartTime:
- _advanceAnimationsOfType:withTimestamp:
- _TimerHeartbeatCallback:
- _TVHeartbeatCallback:
- _LCDHeartbeatCallback:
- _isRunningAnimation:
- dealloc
- removeAnimationsForTarget:ofKind:
- addAnimation:withDuration:start:
- stopAnimation:
- addAnimations:withDuration:start:
- removeAnimationsForTarget:
- startAnimation:
- fractionForAnimation:
@end
