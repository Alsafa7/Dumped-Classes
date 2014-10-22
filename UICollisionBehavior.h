@interface UICollisionBehavior : UIDynamicBehavior
{
	BOOL _usesImplicitBounds;
	struct _implicitBoundsInsets;
	id _implicitBoundsBody;
	id _boundaryBodies;
	id _boundaryPaths;
	usigned long long _collisionMode;
	id _collisionDelegate;
	unsigned int _groupVID;
	unsigned int _groupBID;
	struct _collisionBehaviorFlags;
}

@end
