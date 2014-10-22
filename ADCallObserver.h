@interface ADCallObserver : NSObject
{
	BOOL _isObserving;
	id _stateChangedBlock;
}

+ startObservingCallStateWithBlock:
+ stopObservingCallState
+ _setStateChangedBlock:
+ _callStateChanged:
+ _stateChangedBlock
+ dealloc
+ .cxx_destruct
- startObservingCallStateWithBlock:
- stopObservingCallState
- _setStateChangedBlock:
- _callStateChanged:
- _stateChangedBlock
- dealloc
- .cxx_destruct
@end
