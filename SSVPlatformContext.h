@interface SSVPlatformContext : NSObject
{
	id _lookupURLString;
	id _sapContext;
	id _signedHeaders;
	id _signedQueryParameters;
}

+ copyWithZone:
+ initWithBagDictionary:
+ bagDictionary
+ lookupURLString
+ SAPContext
+ setSAPContext:
+ signedHeaders
+ signedQueryParameters
+ .cxx_destruct
- copyWithZone:
- initWithBagDictionary:
- bagDictionary
- lookupURLString
- SAPContext
- setSAPContext:
- signedHeaders
- signedQueryParameters
- .cxx_destruct
@end
