@interface FLUnit : NSObject
{
	BOOL _shouldBypassOriginalFunction;
	BOOL _qualifiesForLegacyHook;
	id _name;
	id _target;
	id _targetC;
	id _targetMethod;
	id _overrides;
	id _patch;
	long long _targetReturnType;
}

@end
