@interface MCRestrictionsPayload : MCPayload
{
	id _restrictions;
	id _iCloudPassword;
}

+ handlerWithProfileHandler:
+ restrictions
+ _invalidFieldErrorWithFieldName:
+ initWithDictionary:profile:outError:
+ stubDictionary
+ subtitle1Description
+ installationWarnings
+ _restrictedFeatureStrings
+ _enforcedFeatureStrings
+ _defaultMediaSettings
+ _intersectionStrings
+ _unionStrings
+ _insertRestrictedBoolForKey:value:preferenc:
+ iCloudPassword
+ setICloudPassword:
+ .cxx_destruct
- handlerWithProfileHandler:
- restrictions
- _invalidFieldErrorWithFieldName:
- initWithDictionary:profile:outError:
- stubDictionary
- subtitle1Description
- installationWarnings
- _restrictedFeatureStrings
- _enforcedFeatureStrings
- _defaultMediaSettings
- _intersectionStrings
- _unionStrings
- _insertRestrictedBoolForKey:value:preferenc:
- iCloudPassword
- setICloudPassword:
- .cxx_destruct
@end
