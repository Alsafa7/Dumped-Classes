@interface UIDynamicItemBehavior : UIDynamicBehavior
{
	BOOL _useDefaultViewPropertiesApplier;
	BOOL _useCircularBoundingBox;
	struct _stateFlags;
	id _cachedAngularVelocities;
	id _cachedLinearVelocities;
	BOOL _allowsRotation;
	double _elasticity;
	double _friction;
	double _density;
	double _resistance;
	double _angularResistance;
}

@end
