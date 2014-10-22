@interface MCAPNPayload : MCPayload
{
	id _apnInfos;
	BOOL _wasInstalled;
}

+ handlerWithProfileHandler:
+ description
+ initWithDictionary:profile:outError:
+ stubDictionary
+ subtitle1Label
+ subtitle1Description
+ subtitle2Label
+ subtitle2Description
+ _validationErrorType:forInvalidKey:
+ _checkForValidContents:outError:
+ _finishInitializationWithContents:
+ _strippedAPNDefaults
+ apnDefaults
+ wasInstalled
+ setWasInstalled:
+ .cxx_destruct
- handlerWithProfileHandler:
- description
- initWithDictionary:profile:outError:
- stubDictionary
- subtitle1Label
- subtitle1Description
- subtitle2Label
- subtitle2Description
- _validationErrorType:forInvalidKey:
- _checkForValidContents:outError:
- _finishInitializationWithContents:
- _strippedAPNDefaults
- apnDefaults
- wasInstalled
- setWasInstalled:
- .cxx_destruct
@end
