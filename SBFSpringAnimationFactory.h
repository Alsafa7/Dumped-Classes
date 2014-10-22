@interface SBFSpringAnimationFactory : SBFAnimationFactory
{
	double _mass;
	double _stiffness;
	double _damping;
	double _epsilon;
}

+ stiffness
+ damping
+ mass
+ epsilon
+ _animation
+ _initWithMass:stiffness:damping:epsilon:
+ _calculateDuration
+ _springAnimation
- stiffness
- damping
- mass
- epsilon
- _animation
- _initWithMass:stiffness:damping:epsilon:
- _calculateDuration
- _springAnimation
@end
