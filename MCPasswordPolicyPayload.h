@interface MCPasswordPolicyPayload : MCPayload
{
	id _isSimplePasscodeAllowed;
	id _isPasscodeRequired;
	id _isAlphanumericPasscodeRequired;
	id _isManualFetchingWhenRoaming;
	id _minLength;
	id _maxFailedAttempts;
	id _maxGracePeriodMinutes;
	id _maxInactivityMinutes;
	id _maxPasscodeAgeDays;
	id _passcodeHistoryCount;
	id _minComplexCharacters;
}

+ handlerWithProfileHandler:
+ restrictions
+ description
+ title
+ initWithDictionary:profile:outError:
+ stubDictionary
+ subtitle1Description
+ minLength
+ isSimplePasscodeAllowed
+ isAlphanumericPasscodeRequired
+ minComplexCharacters
+ isPasscodeRequired
+ maxFailedAttempts
+ maxGracePeriodMinutes
+ maxInactivityMinutes
+ maxPasscodeAgeDays
+ passcodeHistoryCount
+ isManualFetchingWhenRoaming
+ .cxx_destruct
- handlerWithProfileHandler:
- restrictions
- description
- title
- initWithDictionary:profile:outError:
- stubDictionary
- subtitle1Description
- minLength
- isSimplePasscodeAllowed
- isAlphanumericPasscodeRequired
- minComplexCharacters
- isPasscodeRequired
- maxFailedAttempts
- maxGracePeriodMinutes
- maxInactivityMinutes
- maxPasscodeAgeDays
- passcodeHistoryCount
- isManualFetchingWhenRoaming
- .cxx_destruct
@end
