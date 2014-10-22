@interface SBBounceBehavior : UIDynamicBehavior
{
	double _midwayPosition;
	double _completionThreshold;
	struct _targetFrame;
	id _item;
	id _bodyBehavior;
	id _collisionBehavior;
	id _gravityBehavior;
	id _pushBehavior;
	id _draggingBehavior;
	id _delegate;
	double _gravity;
	double _velocity;
	double _elasticity;
	double _friction;
	double _resistance;
	double _minVelocityToAssist;
	double _maxVelocityToAssist;
	double _maxVelocityAssistance;
	struct _boundaryInsets;
}

@end
