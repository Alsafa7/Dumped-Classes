@interface MCSingleSignOnPayload : MCPayload
{
	id _humanReadableName;
	id _kerberosInfo;
}

+ handlerWithProfileHandler:
+ description
+ title
+ initWithDictionary:profile:outError:
+ stubDictionary
+ kerberosInfo
+ setHumanReadableName:
+ setKerberosInfo:
+ humanReadableName
+ .cxx_destruct
- handlerWithProfileHandler:
- description
- title
- initWithDictionary:profile:outError:
- stubDictionary
- kerberosInfo
- setHumanReadableName:
- setKerberosInfo:
- humanReadableName
- .cxx_destruct
@end
