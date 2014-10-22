@interface SBSimplePreferenceFileLogger : SBFileLogger
{
	BOOL _enabled;
}

+ reloadFromDefaults
+ logPreferenceName
+ logPreferenceDomain
+ isEnabled
- reloadFromDefaults
- logPreferenceName
- logPreferenceDomain
- isEnabled
@end
