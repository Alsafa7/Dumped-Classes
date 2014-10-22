@interface UIDynamicAnimator : NSObject
{
	id _world;
	id _displaylink;
	double _elapsedTime;
	double _realElapsedTime;
	double _lastUpdateTime;
	double _lastInterval;
	long long _ticks;
	id _debugLayer;
	id _bodies;
	id _topLevelBehaviors;
	id _registeredBehaviors;
	id _behaviorsToRemove;
	id _behaviorsToAdd;
	id _postSolverActions;
	id _beginContacts;
	id _endContacts;
	BOOL _isInWorldStepMethod;
	BOOL _needsLocalBehaviorReevaluation;
	usigned long long _referenceSystemType;
	usigned long long _integralization;
	struct _stateFlags;
	double _accuracy;
	int _registeredCollisionGroups;
	int _registeredImplicitBounds;
	struct _referenceSystemBounds;
	id _referenceSystem;
	int _debugInterval;
	id _action;
	id _delegate;
	BOOL _disableDisplayLink;
	double _speed;
}

@end
