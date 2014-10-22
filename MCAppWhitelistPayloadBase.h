@interface MCAppWhitelistPayloadBase : MCPayload
{
	BOOL _allowAccessWithoutPasscode;
	BOOL _forceAllowSupervisorAccess;
	id _whitelistedAppsAndOptions;
}

+ handlerWithProfileHandler:
+ restrictions
+ description
+ initWithDictionary:profile:outError:
+ stubDictionary
+ setWhitelistedAppsAndOptions:
+ whitelistedAppsAndOptions
+ allowAccessWithoutPasscode
+ forceAllowSupervisorAccess
+ setAllowAccessWithoutPasscode:
+ setForceAllowSupervisorAccess:
+ .cxx_destruct
- handlerWithProfileHandler:
- restrictions
- description
- initWithDictionary:profile:outError:
- stubDictionary
- setWhitelistedAppsAndOptions:
- whitelistedAppsAndOptions
- allowAccessWithoutPasscode
- forceAllowSupervisorAccess
- setAllowAccessWithoutPasscode:
- setForceAllowSupervisorAccess:
- .cxx_destruct
@end
