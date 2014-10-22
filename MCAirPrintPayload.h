@interface MCAirPrintPayload : MCPayload
{
	usigned long long _airPrintCount;
	id _ippAddresses;
}

+ handlerWithProfileHandler:
+ restrictions
+ description
+ initWithDictionary:profile:outError:
+ stubDictionary
+ airPrintCount
+ ippAddresses
+ subtitle1Label
+ subtitle1Description
+ setAirPrintCount:
+ setIppAddresses:
+ .cxx_destruct
- handlerWithProfileHandler:
- restrictions
- description
- initWithDictionary:profile:outError:
- stubDictionary
- airPrintCount
- ippAddresses
- subtitle1Label
- subtitle1Description
- setAirPrintCount:
- setIppAddresses:
- .cxx_destruct
@end
