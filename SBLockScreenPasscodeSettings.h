@interface SBLockScreenPasscodeSettings : _UISettings
{
	int _scrollBehavior;
	double _fixedHysteresis;
	double _percentOfNextButtonIncluded;
}

+ scrollBehavior
+ fixedHysteresis
+ percentOfNextButtonIncluded
+ setScrollBehavior:
+ setPercentOfNextButtonIncluded:
+ setFixedHysteresis:
+ setDefaultValues
- scrollBehavior
- fixedHysteresis
- percentOfNextButtonIncluded
- setScrollBehavior:
- setPercentOfNextButtonIncluded:
- setFixedHysteresis:
- setDefaultValues
@end
