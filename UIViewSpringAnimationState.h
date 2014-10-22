@interface UIViewSpringAnimationState : UIViewAnimationState
{
	double _mass;
	double _stiffness;
	double _damping;
	double _velocity;
}

+ _defaultAnimationForKey:
+ actionForLayer:forKey:forView:
+ generateSpringPropertiesForDuration:damping:velocity:
- _defaultAnimationForKey:
- actionForLayer:forKey:forView:
- generateSpringPropertiesForDuration:damping:velocity:
@end
