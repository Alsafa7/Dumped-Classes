@interface BBBehaviorOverride : NSObject
{
	usigned long long _overrideType;
	usigned long long _mode;
	id _effectiveIntervals;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ description
+ copyWithZone:
+ setMode:
+ mode
+ nextOverrideTransitionDateAfterDate:
+ overrideType
+ isActiveForDate:
+ initWithOverrideType:mode:effectiveIntervals:
+ setOverrideType:
+ setEffectiveIntervals:
+ effectiveIntervals
+ initWithEffectiveIntervals:overrideType:
- dealloc
- initWithCoder:
- encodeWithCoder:
- description
- copyWithZone:
- setMode:
- mode
- nextOverrideTransitionDateAfterDate:
- overrideType
- isActiveForDate:
- initWithOverrideType:mode:effectiveIntervals:
- setOverrideType:
- setEffectiveIntervals:
- effectiveIntervals
- initWithEffectiveIntervals:overrideType:
@end
