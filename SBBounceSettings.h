@interface SBBounceSettings : _UISettings
{
	BOOL _resistanceAppliesAfterBounce;
	double _gravity;
	double _velocity;
	double _elasticity;
	double _friction;
	double _resistance;
	double _multiplier;
	double _minVelocityToAssist;
	double _maxVelocityToAssist;
	double _maxVelocityAssistance;
}

+ minVelocityToAssist
+ setMinVelocityToAssist:
+ maxVelocityToAssist
+ setMaxVelocityToAssist:
+ maxVelocityAssistance
+ setMaxVelocityAssistance:
+ setResistanceAppliesAfterBounce:
+ resistanceAppliesAfterBounce
+ setMultiplier:
+ setVelocity:
+ setDefaultValues
+ elasticity
+ friction
+ setFriction:
+ resistance
+ velocity
+ setElasticity:
+ setResistance:
+ multiplier
+ gravity
+ setGravity:
- minVelocityToAssist
- setMinVelocityToAssist:
- maxVelocityToAssist
- setMaxVelocityToAssist:
- maxVelocityAssistance
- setMaxVelocityAssistance:
- setResistanceAppliesAfterBounce:
- resistanceAppliesAfterBounce
- setMultiplier:
- setVelocity:
- setDefaultValues
- elasticity
- friction
- setFriction:
- resistance
- velocity
- setElasticity:
- setResistance:
- multiplier
- gravity
- setGravity:
@end
