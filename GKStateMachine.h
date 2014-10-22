@interface GKStateMachine : NSObject
{
	int _lock;
	BOOL _shouldLogStateTransitions;
	id _currentState;
	id _validTransitions;
	id _delegate;
}

+ shouldLogStateTransitions
+ _validateTransitionFromState:toState:
+ _performTransitionFromState:toState:
+ validTransitions
+ setShouldLogStateTransitions:
+ setValidTransitions:
+ illegalTransitionFromState:toState:
+ dealloc
+ setDelegate:
+ init
+ delegate
+ currentState
+ setCurrentState:
- shouldLogStateTransitions
- _validateTransitionFromState:toState:
- _performTransitionFromState:toState:
- validTransitions
- setShouldLogStateTransitions:
- setValidTransitions:
- illegalTransitionFromState:toState:
- dealloc
- setDelegate:
- init
- delegate
- currentState
- setCurrentState:
@end
