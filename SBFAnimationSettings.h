@interface SBFAnimationSettings : SBFAnimationCurveSettings
{
	long long _animationType;
	double _delay;
	double _duration;
	double _mass;
	double _stiffness;
	double _damping;
	double _epsilon;
	double _calculatedDuration;
}

+ animationType
+ stiffness
+ setStiffness:
+ setDamping:
+ setMass:
+ duration
+ setDuration:
+ setDelay:
+ delay
+ damping
+ setDefaultValues
+ mass
+ epsilon
+ setAnimationType:
+ setCalculatedDuration:
+ setEpsilon:
+ calculatedDuration
- animationType
- stiffness
- setStiffness:
- setDamping:
- setMass:
- duration
- setDuration:
- setDelay:
- delay
- damping
- setDefaultValues
- mass
- epsilon
- setAnimationType:
- setCalculatedDuration:
- setEpsilon:
- calculatedDuration
@end
